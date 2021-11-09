const notificationSystem = {
    options: {
        show: {
            theme: 'dark',
            icon: 'icon-person',
            position: 'topCenter',
            progressBarColor: 'rgb(0, 255, 184)',
            buttons: [
                ['<button>Ok</button>', function (instance, toast) {
                    alert("Hello world!");
                }, true],
                ['<button>Close</button>', function (instance, toast) {
                    instance.hide({
                        transitionOut: 'fadeOutUp',
                        onClosing: function (instance, toast, closedBy) {
                            console.info('closedBy: ' + closedBy);
                        }
                    }, toast, 'buttonName');
                }]
            ],
            onOpening: function (instance, toast) {
                console.info('callback abriu!');
            },
            onClosing: function (instance, toast, closedBy) {
                console.info('closedBy: ' + closedBy);
            }
        },
        ballon: {
            // balloon: true,
			// theme: "light",
			color: 'yellow',
            position: 'topCenter'
        },
        info: {
            position: 'bottomLeft'
        },
        success: {
            position: 'topRight'
        },
        warning1: {
			position: 'topCenter',
			timeout: 8000,
		},
		warning2: {
			position: 'topCenter',
			timeout: 8000
        },
        error: {
            position: 'topRight'
        },
        question: {
            timeout: 20000,
            close: false,
            overlay: true,
            toastOnce: true,
            id: 'question',
            zindex: 999,
            position: 'center',
            buttons: [
                ['<button><b>YES</b></button>', function (instance, toast) {
                    instance.hide({ transitionOut: 'fadeOut' }, toast, 'button');
                }, true],
                ['<button>NO</button>', function (instance, toast) {
                    instance.hide({ transitionOut: 'fadeOut' }, toast, 'button');
                }]
            ],
            onClosing: function (instance, toast, closedBy) {
                console.info('Closing | closedBy: ' + closedBy);
            },
            onClosed: function (instance, toast, closedBy) {
                console.info('Closed | closedBy: ' + closedBy);
            }
        }
    }
}

export default notificationSystem;
