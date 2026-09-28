# resources: Neutralino desktop build of the front end

Compiled (minified) front end used by the Neutralino desktop app. [`neutralino.config.json`](../neutralino.config.json) in the repository root points Neutralino at this folder (`/resources/`), and the runtime binaries are in [`bin/`](../bin). The files come from a Vue CLI build of `src/` committed on 2021-11-30 and 2021-12-05; there is no source code in this folder. This build calls `Neutralino.init()`. When "Connect to DS" is ticked on the login page (ticked by default in this build), it starts `./ds_client.exe <IP Address> <DS Port> <Server Port>` in the background with `Neutralino.os.execCommand` and then connects to it with Socket.IO at `localhost:<Server Port>`. The root `ds_client.exe` is byte-identical to the 2021-12-05 build of `py/dist/ds_mp.exe` (the Socket.IO backend). **Author (git history):** Zeyu Mao, 2021.

## Files

| File | What it does |
|---|---|
| `index.html` | Entry page. Loads `js/neutralino.js`, `js/vendor.986669f7.js`, `js/app.9b4c8629.js` and the CSS. |
| `js/app.9b4c8629.js` | Minified entry code (login page, Neutralino start-up, launch of `ds_client.exe`). |
| `js/manifest.5e4e2d52.js` | Minified dashboard code, including the Socket.IO client and the report download. |
| `js/vendor.986669f7.js` | Minified third-party libraries. |
| `neutralino.js`, `js/neutralino.js` | Neutralino client library, identical to `src/assets/neutralino.js`. |
| `css/`, `fonts/`, `img/grid.4e4f92d6.svg` | Compiled styles, Material Icons fonts, logo. |
| `favicon.ico`, `grid.ico`, `manifest.json`, `robots.txt` | Icons, web manifest, robots file. |

## Known issues

- This build is older than `src/` (last changed 2022-04-08). The current `src/` has `Neutralino.init()` commented out and no longer starts `ds_client.exe`, so a new build of `src/` does not reproduce this behaviour.
- No npm script writes to this folder. `npm run build` writes `dist/` with the `/GridUniverse/` public path, which is not the layout used here.

## Setup

1. Windows (the build starts `ds_client.exe`).
2. The Neutralino CLI: `npm install -g @neutralinojs/neu`. The runtime binaries (version 3.3.0 in `neutralino.config.json`) are already in `bin/`.
3. A PWDS server reachable over TCP. Python is not needed when the bundled `ds_client.exe` is used.

## Running

From the repository root:

```
neu run
```

or `npm run neu:serve`. On the login page enter the PWDS host as IP Address, the PWDS port as DS Port, and a free Server Port (default 9990). Keep "Connect to DS" ticked and log in.

## Inputs and outputs

- Input: live data from `ds_client.exe` (or any running `py/ds_mp.py`) over Socket.IO.
- Output: the desktop window with the dashboard; the JSON report download (`UIN-Name-CaseX.json`).
