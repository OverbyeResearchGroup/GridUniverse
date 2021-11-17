/* Generated code for Python module 'idna.uts46data'
 * created by Nuitka version 0.6.17.7
 *
 * This code is in part copyright 2021 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "nuitka/unfreezing.h"

#include "__helpers.h"

/* The "module_idna$uts46data" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_idna$uts46data;
PyDictObject *moduledict_idna$uts46data;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[182];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[182];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("idna.uts46data"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for(int i = 0; i < 182; i++) {
            mod_consts_hash[i] = DEEP_HASH(mod_consts[i]);
        }
#endif
    }
}

/* For multiprocessing, we want to be able to initialize the __main__ constants. */
#if (_NUITKA_PLUGIN_MULTIPROCESSING_ENABLED || _NUITKA_PLUGIN_TRACEBACK_ENCRYPTION_ENABLED) && 0
void createMainModuleConstants(void) {
    createModuleConstants();
}
#endif

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_idna$uts46data(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for(int i = 0; i < 182; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_47b1429513e72d7c4d7611e800671b6c;
static PyCodeObject *codeobj_ecfa6c88bd8f48d254fd3a171c0f3150;
static PyCodeObject *codeobj_abf5378f3519a02f49490ef1b2a05f88;
static PyCodeObject *codeobj_f1ee02a51c2a0086f1dd513e599eb893;
static PyCodeObject *codeobj_5d7cc1f47339f56e7716282c1e557903;
static PyCodeObject *codeobj_eb690e304fb87ecbda2510384bf83a91;
static PyCodeObject *codeobj_90f41298279a2e030622f158089221ba;
static PyCodeObject *codeobj_86ed4cf40ab4b91ba5ff3054f28df5ed;
static PyCodeObject *codeobj_e54ad5ad1970cdda8beebdace48d1acf;
static PyCodeObject *codeobj_f0bba897966f311af77d254e9e1a95a1;
static PyCodeObject *codeobj_b5012fda625c35dd41c18bbce65d0333;
static PyCodeObject *codeobj_a2407796053177a5df9eb94335e80bda;
static PyCodeObject *codeobj_2bd9ddcda516bc005b11530853e3c70e;
static PyCodeObject *codeobj_40e073636dd098cbdf0d3f60789b6dc0;
static PyCodeObject *codeobj_ca950308d2148d59bf2b6829a828376c;
static PyCodeObject *codeobj_f3e325bad156ff63b1d4c089eb085aa3;
static PyCodeObject *codeobj_853a98e64cd6531fd2d47cd2e6c703ac;
static PyCodeObject *codeobj_6f3a19403841c5b4ef7176774df58c7f;
static PyCodeObject *codeobj_f89e4adbcf3e95cab66b4f7aff34aa22;
static PyCodeObject *codeobj_8bd12fe35f12a499173858452e80ce8a;
static PyCodeObject *codeobj_7c30f387b428f3a7c10300bf4b48897b;
static PyCodeObject *codeobj_2a44348404ec3dd27d00d9b51a77d686;
static PyCodeObject *codeobj_221c9d175abe4585491b28da900cd0f3;
static PyCodeObject *codeobj_889c97cd18a78db0feb8f1226eaa9eef;
static PyCodeObject *codeobj_2df58257d804c47688e4f97b428bf8a7;
static PyCodeObject *codeobj_5f51a27e3c2dd7bf2765536d86cc7bcd;
static PyCodeObject *codeobj_c3dd033caf033e2dc82178149c1cd07b;
static PyCodeObject *codeobj_521d61f55023fd3d1acfe70770fe5843;
static PyCodeObject *codeobj_a119bffc1959be51608616b48153508f;
static PyCodeObject *codeobj_c265050da89a3d137716e41c6cfa5beb;
static PyCodeObject *codeobj_0374e98590000ba486d0f7ccc0765775;
static PyCodeObject *codeobj_ab3259d7d9e109971be306e0482c9434;
static PyCodeObject *codeobj_55b32b3487ccf027b539ebfdbee2f1c7;
static PyCodeObject *codeobj_da346f81babb58b0cb0adb46480f569f;
static PyCodeObject *codeobj_bc12d888a9f3b3a5c4b6da4471c3c43c;
static PyCodeObject *codeobj_a017faa5195dff7673f548cf064e351e;
static PyCodeObject *codeobj_5d89be3719886a057ae9d2e258929652;
static PyCodeObject *codeobj_1929a1e3aee0d7b070b7c06ad2f154f7;
static PyCodeObject *codeobj_33287ec1ff772e460863ffdec89fdaa3;
static PyCodeObject *codeobj_aa6f6bdd9d74906075012e7df610810f;
static PyCodeObject *codeobj_017a8e44a120c31993ddf91ff28254e3;
static PyCodeObject *codeobj_6fab9a91c9cdefe8621a456f1feb3be8;
static PyCodeObject *codeobj_62942485f6b94d075f174b7e0aa02257;
static PyCodeObject *codeobj_6dc54c9630441d10f8985ef6d2cfeed7;
static PyCodeObject *codeobj_d187df21e12f9e79964d85e8220169e6;
static PyCodeObject *codeobj_7f502263c2330a0d85a011c7259a43c1;
static PyCodeObject *codeobj_cfca1c92dfa8e742c42fc71ff53d36c5;
static PyCodeObject *codeobj_78f418c80d94b04be3890d243ecba24c;
static PyCodeObject *codeobj_2c96a9dbfc0ba9418533d63ae394d753;
static PyCodeObject *codeobj_1c6b009afd520b72d0cd38d39cbeee1a;
static PyCodeObject *codeobj_4723a0c13e3113c07b8cdbefe3e424c4;
static PyCodeObject *codeobj_af3ca7188898f47ffd2cf2918ee79633;
static PyCodeObject *codeobj_8490e23768b5bc2f3048d135ecc946a0;
static PyCodeObject *codeobj_70eb48cb17bbbdd432a16a6512b83865;
static PyCodeObject *codeobj_b7e3db50a4323402f885b116759477b9;
static PyCodeObject *codeobj_ae1716dd5dff22b89233448c1e8ab898;
static PyCodeObject *codeobj_5aeb0f60dbd02174062beeafa1a3ab60;
static PyCodeObject *codeobj_1c7717384e9a37e0da02978d94189f87;
static PyCodeObject *codeobj_77f177e6a95c367499ef4ba882c33c9b;
static PyCodeObject *codeobj_5f0f247b67e71ef890e8449c80ad41c6;
static PyCodeObject *codeobj_c3eaca15240cb2575f410a9f922e4583;
static PyCodeObject *codeobj_2941f7e15bea71eee58e47be3c1e58db;
static PyCodeObject *codeobj_9d9ac38607fba2f0c4baa3f9c0352ed7;
static PyCodeObject *codeobj_d834cdc6b571d2b4dade75143f3443bc;
static PyCodeObject *codeobj_fe1c8e3b878341114ef46ab1642b9bd4;
static PyCodeObject *codeobj_d819ea1ee328559a07a120c425bb61cd;
static PyCodeObject *codeobj_45534c91d644043efbcf0dcbb2cd3090;
static PyCodeObject *codeobj_85a8c83c9c0ce6288984bbffaeb42679;
static PyCodeObject *codeobj_8ce876bdc007eec156844d4eca84831e;
static PyCodeObject *codeobj_ac32f0f98d542cc670df961e92ee914e;
static PyCodeObject *codeobj_781f8e9008533ef875f29f739575f570;
static PyCodeObject *codeobj_e9023472c28df9f95fe131c4a72f17fe;
static PyCodeObject *codeobj_d784a247c95c3cb7cae1b3cd2b02eddb;
static PyCodeObject *codeobj_6699b1515ac3fc9e95fbfbda0732eb58;
static PyCodeObject *codeobj_46e7cda4adfc2555051514e2e1f25fa1;
static PyCodeObject *codeobj_97a6246784c96a21070dfdeb2f7d4143;
static PyCodeObject *codeobj_6ca60d33297e642391efcf6aba02d977;
static PyCodeObject *codeobj_3da2406609082735d9c3ed0e970193a9;
static PyCodeObject *codeobj_8bf0a516cb69d5f5e96a958c8d9d5908;
static PyCodeObject *codeobj_c21275985009e4dce8ae32292e605591;
static PyCodeObject *codeobj_cff2d4b5fbe9dc2cddc330f963e3c07c;
static PyCodeObject *codeobj_c5545e9a544097337fb29b792ef545eb;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[180]); CHECK_OBJECT(module_filename_obj);
    codeobj_47b1429513e72d7c4d7611e800671b6c = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[181], NULL, NULL, 0, 0, 0);
    codeobj_ecfa6c88bd8f48d254fd3a171c0f3150 = MAKE_CODEOBJECT(module_filename_obj, 11, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[98], NULL, NULL, 0, 0, 0);
    codeobj_abf5378f3519a02f49490ef1b2a05f88 = MAKE_CODEOBJECT(module_filename_obj, 115, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[99], NULL, NULL, 0, 0, 0);
    codeobj_f1ee02a51c2a0086f1dd513e599eb893 = MAKE_CODEOBJECT(module_filename_obj, 1051, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[108], NULL, NULL, 0, 0, 0);
    codeobj_5d7cc1f47339f56e7716282c1e557903 = MAKE_CODEOBJECT(module_filename_obj, 1155, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[109], NULL, NULL, 0, 0, 0);
    codeobj_eb690e304fb87ecbda2510384bf83a91 = MAKE_CODEOBJECT(module_filename_obj, 1259, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[110], NULL, NULL, 0, 0, 0);
    codeobj_90f41298279a2e030622f158089221ba = MAKE_CODEOBJECT(module_filename_obj, 1363, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[111], NULL, NULL, 0, 0, 0);
    codeobj_86ed4cf40ab4b91ba5ff3054f28df5ed = MAKE_CODEOBJECT(module_filename_obj, 1467, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[112], NULL, NULL, 0, 0, 0);
    codeobj_e54ad5ad1970cdda8beebdace48d1acf = MAKE_CODEOBJECT(module_filename_obj, 1571, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[113], NULL, NULL, 0, 0, 0);
    codeobj_f0bba897966f311af77d254e9e1a95a1 = MAKE_CODEOBJECT(module_filename_obj, 1675, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[114], NULL, NULL, 0, 0, 0);
    codeobj_b5012fda625c35dd41c18bbce65d0333 = MAKE_CODEOBJECT(module_filename_obj, 1779, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[115], NULL, NULL, 0, 0, 0);
    codeobj_a2407796053177a5df9eb94335e80bda = MAKE_CODEOBJECT(module_filename_obj, 1883, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[116], NULL, NULL, 0, 0, 0);
    codeobj_2bd9ddcda516bc005b11530853e3c70e = MAKE_CODEOBJECT(module_filename_obj, 1987, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[117], NULL, NULL, 0, 0, 0);
    codeobj_40e073636dd098cbdf0d3f60789b6dc0 = MAKE_CODEOBJECT(module_filename_obj, 219, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[100], NULL, NULL, 0, 0, 0);
    codeobj_ca950308d2148d59bf2b6829a828376c = MAKE_CODEOBJECT(module_filename_obj, 2091, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[118], NULL, NULL, 0, 0, 0);
    codeobj_f3e325bad156ff63b1d4c089eb085aa3 = MAKE_CODEOBJECT(module_filename_obj, 2195, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[119], NULL, NULL, 0, 0, 0);
    codeobj_853a98e64cd6531fd2d47cd2e6c703ac = MAKE_CODEOBJECT(module_filename_obj, 2299, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[120], NULL, NULL, 0, 0, 0);
    codeobj_6f3a19403841c5b4ef7176774df58c7f = MAKE_CODEOBJECT(module_filename_obj, 2403, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[121], NULL, NULL, 0, 0, 0);
    codeobj_f89e4adbcf3e95cab66b4f7aff34aa22 = MAKE_CODEOBJECT(module_filename_obj, 2507, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[122], NULL, NULL, 0, 0, 0);
    codeobj_8bd12fe35f12a499173858452e80ce8a = MAKE_CODEOBJECT(module_filename_obj, 2611, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[123], NULL, NULL, 0, 0, 0);
    codeobj_7c30f387b428f3a7c10300bf4b48897b = MAKE_CODEOBJECT(module_filename_obj, 2715, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[124], NULL, NULL, 0, 0, 0);
    codeobj_2a44348404ec3dd27d00d9b51a77d686 = MAKE_CODEOBJECT(module_filename_obj, 2819, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[125], NULL, NULL, 0, 0, 0);
    codeobj_221c9d175abe4585491b28da900cd0f3 = MAKE_CODEOBJECT(module_filename_obj, 2923, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[126], NULL, NULL, 0, 0, 0);
    codeobj_889c97cd18a78db0feb8f1226eaa9eef = MAKE_CODEOBJECT(module_filename_obj, 3027, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[127], NULL, NULL, 0, 0, 0);
    codeobj_2df58257d804c47688e4f97b428bf8a7 = MAKE_CODEOBJECT(module_filename_obj, 323, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[101], NULL, NULL, 0, 0, 0);
    codeobj_5f51a27e3c2dd7bf2765536d86cc7bcd = MAKE_CODEOBJECT(module_filename_obj, 3131, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[128], NULL, NULL, 0, 0, 0);
    codeobj_c3dd033caf033e2dc82178149c1cd07b = MAKE_CODEOBJECT(module_filename_obj, 3235, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[129], NULL, NULL, 0, 0, 0);
    codeobj_521d61f55023fd3d1acfe70770fe5843 = MAKE_CODEOBJECT(module_filename_obj, 3339, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[130], NULL, NULL, 0, 0, 0);
    codeobj_a119bffc1959be51608616b48153508f = MAKE_CODEOBJECT(module_filename_obj, 3443, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[131], NULL, NULL, 0, 0, 0);
    codeobj_c265050da89a3d137716e41c6cfa5beb = MAKE_CODEOBJECT(module_filename_obj, 3547, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[132], NULL, NULL, 0, 0, 0);
    codeobj_0374e98590000ba486d0f7ccc0765775 = MAKE_CODEOBJECT(module_filename_obj, 3651, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[133], NULL, NULL, 0, 0, 0);
    codeobj_ab3259d7d9e109971be306e0482c9434 = MAKE_CODEOBJECT(module_filename_obj, 3755, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[134], NULL, NULL, 0, 0, 0);
    codeobj_55b32b3487ccf027b539ebfdbee2f1c7 = MAKE_CODEOBJECT(module_filename_obj, 3859, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[135], NULL, NULL, 0, 0, 0);
    codeobj_da346f81babb58b0cb0adb46480f569f = MAKE_CODEOBJECT(module_filename_obj, 3963, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[136], NULL, NULL, 0, 0, 0);
    codeobj_bc12d888a9f3b3a5c4b6da4471c3c43c = MAKE_CODEOBJECT(module_filename_obj, 4067, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[137], NULL, NULL, 0, 0, 0);
    codeobj_a017faa5195dff7673f548cf064e351e = MAKE_CODEOBJECT(module_filename_obj, 427, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[102], NULL, NULL, 0, 0, 0);
    codeobj_5d89be3719886a057ae9d2e258929652 = MAKE_CODEOBJECT(module_filename_obj, 4171, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[138], NULL, NULL, 0, 0, 0);
    codeobj_1929a1e3aee0d7b070b7c06ad2f154f7 = MAKE_CODEOBJECT(module_filename_obj, 4275, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[139], NULL, NULL, 0, 0, 0);
    codeobj_33287ec1ff772e460863ffdec89fdaa3 = MAKE_CODEOBJECT(module_filename_obj, 4379, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[140], NULL, NULL, 0, 0, 0);
    codeobj_aa6f6bdd9d74906075012e7df610810f = MAKE_CODEOBJECT(module_filename_obj, 4483, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[141], NULL, NULL, 0, 0, 0);
    codeobj_017a8e44a120c31993ddf91ff28254e3 = MAKE_CODEOBJECT(module_filename_obj, 4587, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[142], NULL, NULL, 0, 0, 0);
    codeobj_6fab9a91c9cdefe8621a456f1feb3be8 = MAKE_CODEOBJECT(module_filename_obj, 4691, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[143], NULL, NULL, 0, 0, 0);
    codeobj_62942485f6b94d075f174b7e0aa02257 = MAKE_CODEOBJECT(module_filename_obj, 4795, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[144], NULL, NULL, 0, 0, 0);
    codeobj_6dc54c9630441d10f8985ef6d2cfeed7 = MAKE_CODEOBJECT(module_filename_obj, 4899, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[145], NULL, NULL, 0, 0, 0);
    codeobj_d187df21e12f9e79964d85e8220169e6 = MAKE_CODEOBJECT(module_filename_obj, 5003, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[146], NULL, NULL, 0, 0, 0);
    codeobj_7f502263c2330a0d85a011c7259a43c1 = MAKE_CODEOBJECT(module_filename_obj, 5107, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[147], NULL, NULL, 0, 0, 0);
    codeobj_cfca1c92dfa8e742c42fc71ff53d36c5 = MAKE_CODEOBJECT(module_filename_obj, 531, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[103], NULL, NULL, 0, 0, 0);
    codeobj_78f418c80d94b04be3890d243ecba24c = MAKE_CODEOBJECT(module_filename_obj, 5211, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[148], NULL, NULL, 0, 0, 0);
    codeobj_2c96a9dbfc0ba9418533d63ae394d753 = MAKE_CODEOBJECT(module_filename_obj, 5315, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[149], NULL, NULL, 0, 0, 0);
    codeobj_1c6b009afd520b72d0cd38d39cbeee1a = MAKE_CODEOBJECT(module_filename_obj, 5419, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[150], NULL, NULL, 0, 0, 0);
    codeobj_4723a0c13e3113c07b8cdbefe3e424c4 = MAKE_CODEOBJECT(module_filename_obj, 5523, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[151], NULL, NULL, 0, 0, 0);
    codeobj_af3ca7188898f47ffd2cf2918ee79633 = MAKE_CODEOBJECT(module_filename_obj, 5627, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[152], NULL, NULL, 0, 0, 0);
    codeobj_8490e23768b5bc2f3048d135ecc946a0 = MAKE_CODEOBJECT(module_filename_obj, 5731, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[153], NULL, NULL, 0, 0, 0);
    codeobj_70eb48cb17bbbdd432a16a6512b83865 = MAKE_CODEOBJECT(module_filename_obj, 5835, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[154], NULL, NULL, 0, 0, 0);
    codeobj_b7e3db50a4323402f885b116759477b9 = MAKE_CODEOBJECT(module_filename_obj, 5939, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[155], NULL, NULL, 0, 0, 0);
    codeobj_ae1716dd5dff22b89233448c1e8ab898 = MAKE_CODEOBJECT(module_filename_obj, 6043, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[156], NULL, NULL, 0, 0, 0);
    codeobj_5aeb0f60dbd02174062beeafa1a3ab60 = MAKE_CODEOBJECT(module_filename_obj, 6147, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[157], NULL, NULL, 0, 0, 0);
    codeobj_1c7717384e9a37e0da02978d94189f87 = MAKE_CODEOBJECT(module_filename_obj, 635, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[104], NULL, NULL, 0, 0, 0);
    codeobj_77f177e6a95c367499ef4ba882c33c9b = MAKE_CODEOBJECT(module_filename_obj, 6251, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[158], NULL, NULL, 0, 0, 0);
    codeobj_5f0f247b67e71ef890e8449c80ad41c6 = MAKE_CODEOBJECT(module_filename_obj, 6355, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[159], NULL, NULL, 0, 0, 0);
    codeobj_c3eaca15240cb2575f410a9f922e4583 = MAKE_CODEOBJECT(module_filename_obj, 6459, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[160], NULL, NULL, 0, 0, 0);
    codeobj_2941f7e15bea71eee58e47be3c1e58db = MAKE_CODEOBJECT(module_filename_obj, 6563, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[161], NULL, NULL, 0, 0, 0);
    codeobj_9d9ac38607fba2f0c4baa3f9c0352ed7 = MAKE_CODEOBJECT(module_filename_obj, 6667, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[162], NULL, NULL, 0, 0, 0);
    codeobj_d834cdc6b571d2b4dade75143f3443bc = MAKE_CODEOBJECT(module_filename_obj, 6771, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[163], NULL, NULL, 0, 0, 0);
    codeobj_fe1c8e3b878341114ef46ab1642b9bd4 = MAKE_CODEOBJECT(module_filename_obj, 6875, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[164], NULL, NULL, 0, 0, 0);
    codeobj_d819ea1ee328559a07a120c425bb61cd = MAKE_CODEOBJECT(module_filename_obj, 6979, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[165], NULL, NULL, 0, 0, 0);
    codeobj_45534c91d644043efbcf0dcbb2cd3090 = MAKE_CODEOBJECT(module_filename_obj, 7083, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[166], NULL, NULL, 0, 0, 0);
    codeobj_85a8c83c9c0ce6288984bbffaeb42679 = MAKE_CODEOBJECT(module_filename_obj, 7187, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[167], NULL, NULL, 0, 0, 0);
    codeobj_8ce876bdc007eec156844d4eca84831e = MAKE_CODEOBJECT(module_filename_obj, 739, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[105], NULL, NULL, 0, 0, 0);
    codeobj_ac32f0f98d542cc670df961e92ee914e = MAKE_CODEOBJECT(module_filename_obj, 7291, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[168], NULL, NULL, 0, 0, 0);
    codeobj_781f8e9008533ef875f29f739575f570 = MAKE_CODEOBJECT(module_filename_obj, 7395, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[169], NULL, NULL, 0, 0, 0);
    codeobj_e9023472c28df9f95fe131c4a72f17fe = MAKE_CODEOBJECT(module_filename_obj, 7499, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[170], NULL, NULL, 0, 0, 0);
    codeobj_d784a247c95c3cb7cae1b3cd2b02eddb = MAKE_CODEOBJECT(module_filename_obj, 7603, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[171], NULL, NULL, 0, 0, 0);
    codeobj_6699b1515ac3fc9e95fbfbda0732eb58 = MAKE_CODEOBJECT(module_filename_obj, 7707, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[172], NULL, NULL, 0, 0, 0);
    codeobj_46e7cda4adfc2555051514e2e1f25fa1 = MAKE_CODEOBJECT(module_filename_obj, 7811, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[173], NULL, NULL, 0, 0, 0);
    codeobj_97a6246784c96a21070dfdeb2f7d4143 = MAKE_CODEOBJECT(module_filename_obj, 7915, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[174], NULL, NULL, 0, 0, 0);
    codeobj_6ca60d33297e642391efcf6aba02d977 = MAKE_CODEOBJECT(module_filename_obj, 8019, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[175], NULL, NULL, 0, 0, 0);
    codeobj_3da2406609082735d9c3ed0e970193a9 = MAKE_CODEOBJECT(module_filename_obj, 8123, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[176], NULL, NULL, 0, 0, 0);
    codeobj_8bf0a516cb69d5f5e96a958c8d9d5908 = MAKE_CODEOBJECT(module_filename_obj, 8227, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[177], NULL, NULL, 0, 0, 0);
    codeobj_c21275985009e4dce8ae32292e605591 = MAKE_CODEOBJECT(module_filename_obj, 843, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[106], NULL, NULL, 0, 0, 0);
    codeobj_cff2d4b5fbe9dc2cddc330f963e3c07c = MAKE_CODEOBJECT(module_filename_obj, 8331, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[178], NULL, NULL, 0, 0, 0);
    codeobj_c5545e9a544097337fb29b792ef545eb = MAKE_CODEOBJECT(module_filename_obj, 947, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[107], NULL, NULL, 0, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__10__seg_9(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__11__seg_10(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__12__seg_11(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__13__seg_12(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__14__seg_13(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__15__seg_14(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__16__seg_15(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__17__seg_16(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__18__seg_17(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__19__seg_18(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__1__seg_0(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__20__seg_19(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__21__seg_20(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__22__seg_21(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__23__seg_22(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__24__seg_23(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__25__seg_24(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__26__seg_25(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__27__seg_26(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__28__seg_27(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__29__seg_28(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__2__seg_1(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__30__seg_29(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__31__seg_30(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__32__seg_31(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__33__seg_32(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__34__seg_33(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__35__seg_34(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__36__seg_35(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__37__seg_36(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__38__seg_37(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__39__seg_38(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__3__seg_2(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__40__seg_39(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__41__seg_40(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__42__seg_41(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__43__seg_42(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__44__seg_43(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__45__seg_44(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__46__seg_45(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__47__seg_46(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__48__seg_47(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__49__seg_48(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__4__seg_3(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__50__seg_49(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__51__seg_50(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__52__seg_51(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__53__seg_52(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__54__seg_53(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__55__seg_54(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__56__seg_55(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__57__seg_56(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__58__seg_57(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__59__seg_58(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__5__seg_4(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__60__seg_59(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__61__seg_60(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__62__seg_61(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__63__seg_62(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__64__seg_63(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__65__seg_64(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__66__seg_65(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__67__seg_66(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__68__seg_67(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__69__seg_68(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__6__seg_5(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__70__seg_69(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__71__seg_70(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__72__seg_71(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__73__seg_72(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__74__seg_73(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__75__seg_74(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__76__seg_75(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__77__seg_76(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__78__seg_77(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__79__seg_78(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__7__seg_6(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__80__seg_79(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__81__seg_80(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__8__seg_7(PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__9__seg_8(PyObject *annotations);


// The module function definitions.
static PyObject *impl_idna$uts46data$$$function__1__seg_0(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[0]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__2__seg_1(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[1]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__3__seg_2(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[2]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__4__seg_3(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[3]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__5__seg_4(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[4]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__6__seg_5(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[5]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__7__seg_6(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[6]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__8__seg_7(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[7]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__9__seg_8(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[8]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__10__seg_9(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[9]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__11__seg_10(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[10]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__12__seg_11(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[11]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__13__seg_12(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[12]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__14__seg_13(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[13]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__15__seg_14(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[14]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__16__seg_15(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[15]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__17__seg_16(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[16]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__18__seg_17(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[17]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__19__seg_18(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[18]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__20__seg_19(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[19]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__21__seg_20(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[20]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__22__seg_21(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[21]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__23__seg_22(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[22]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__24__seg_23(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[23]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__25__seg_24(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[24]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__26__seg_25(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[25]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__27__seg_26(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[26]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__28__seg_27(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[27]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__29__seg_28(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[28]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__30__seg_29(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[29]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__31__seg_30(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[30]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__32__seg_31(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[31]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__33__seg_32(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[32]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__34__seg_33(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[33]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__35__seg_34(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[34]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__36__seg_35(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[35]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__37__seg_36(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[36]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__38__seg_37(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[37]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__39__seg_38(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[38]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__40__seg_39(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[39]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__41__seg_40(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[40]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__42__seg_41(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[41]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__43__seg_42(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[42]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__44__seg_43(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[43]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__45__seg_44(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[44]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__46__seg_45(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[45]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__47__seg_46(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[46]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__48__seg_47(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[47]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__49__seg_48(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[48]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__50__seg_49(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[49]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__51__seg_50(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[50]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__52__seg_51(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[51]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__53__seg_52(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[52]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__54__seg_53(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[53]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__55__seg_54(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[54]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__56__seg_55(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[55]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__57__seg_56(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[56]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__58__seg_57(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[57]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__59__seg_58(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[58]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__60__seg_59(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[59]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__61__seg_60(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[60]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__62__seg_61(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[61]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__63__seg_62(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[62]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__64__seg_63(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[63]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__65__seg_64(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[64]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__66__seg_65(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[65]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__67__seg_66(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[66]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__68__seg_67(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[67]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__69__seg_68(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[68]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__70__seg_69(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[69]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__71__seg_70(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[70]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__72__seg_71(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[71]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__73__seg_72(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[72]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__74__seg_73(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[73]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__75__seg_74(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[74]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__76__seg_75(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[75]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__77__seg_76(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[76]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__78__seg_77(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[77]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__79__seg_78(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[78]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__80__seg_79(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[79]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__81__seg_80(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[80]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__10__seg_9(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__10__seg_9,
        mod_consts[107],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_c5545e9a544097337fb29b792ef545eb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__11__seg_10(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__11__seg_10,
        mod_consts[108],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f1ee02a51c2a0086f1dd513e599eb893,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__12__seg_11(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__12__seg_11,
        mod_consts[109],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_5d7cc1f47339f56e7716282c1e557903,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__13__seg_12(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__13__seg_12,
        mod_consts[110],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_eb690e304fb87ecbda2510384bf83a91,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__14__seg_13(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__14__seg_13,
        mod_consts[111],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_90f41298279a2e030622f158089221ba,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__15__seg_14(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__15__seg_14,
        mod_consts[112],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_86ed4cf40ab4b91ba5ff3054f28df5ed,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__16__seg_15(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__16__seg_15,
        mod_consts[113],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_e54ad5ad1970cdda8beebdace48d1acf,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__17__seg_16(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__17__seg_16,
        mod_consts[114],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f0bba897966f311af77d254e9e1a95a1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__18__seg_17(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__18__seg_17,
        mod_consts[115],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_b5012fda625c35dd41c18bbce65d0333,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__19__seg_18(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__19__seg_18,
        mod_consts[116],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_a2407796053177a5df9eb94335e80bda,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__1__seg_0(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__1__seg_0,
        mod_consts[98],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ecfa6c88bd8f48d254fd3a171c0f3150,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__20__seg_19(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__20__seg_19,
        mod_consts[117],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_2bd9ddcda516bc005b11530853e3c70e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__21__seg_20(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__21__seg_20,
        mod_consts[118],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ca950308d2148d59bf2b6829a828376c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__22__seg_21(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__22__seg_21,
        mod_consts[119],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f3e325bad156ff63b1d4c089eb085aa3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__23__seg_22(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__23__seg_22,
        mod_consts[120],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_853a98e64cd6531fd2d47cd2e6c703ac,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__24__seg_23(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__24__seg_23,
        mod_consts[121],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_6f3a19403841c5b4ef7176774df58c7f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__25__seg_24(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__25__seg_24,
        mod_consts[122],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f89e4adbcf3e95cab66b4f7aff34aa22,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__26__seg_25(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__26__seg_25,
        mod_consts[123],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_8bd12fe35f12a499173858452e80ce8a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__27__seg_26(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__27__seg_26,
        mod_consts[124],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_7c30f387b428f3a7c10300bf4b48897b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__28__seg_27(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__28__seg_27,
        mod_consts[125],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_2a44348404ec3dd27d00d9b51a77d686,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__29__seg_28(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__29__seg_28,
        mod_consts[126],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_221c9d175abe4585491b28da900cd0f3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__2__seg_1(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__2__seg_1,
        mod_consts[99],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_abf5378f3519a02f49490ef1b2a05f88,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__30__seg_29(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__30__seg_29,
        mod_consts[127],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_889c97cd18a78db0feb8f1226eaa9eef,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__31__seg_30(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__31__seg_30,
        mod_consts[128],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_5f51a27e3c2dd7bf2765536d86cc7bcd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__32__seg_31(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__32__seg_31,
        mod_consts[129],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_c3dd033caf033e2dc82178149c1cd07b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__33__seg_32(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__33__seg_32,
        mod_consts[130],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_521d61f55023fd3d1acfe70770fe5843,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__34__seg_33(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__34__seg_33,
        mod_consts[131],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_a119bffc1959be51608616b48153508f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__35__seg_34(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__35__seg_34,
        mod_consts[132],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_c265050da89a3d137716e41c6cfa5beb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__36__seg_35(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__36__seg_35,
        mod_consts[133],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_0374e98590000ba486d0f7ccc0765775,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__37__seg_36(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__37__seg_36,
        mod_consts[134],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ab3259d7d9e109971be306e0482c9434,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__38__seg_37(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__38__seg_37,
        mod_consts[135],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_55b32b3487ccf027b539ebfdbee2f1c7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__39__seg_38(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__39__seg_38,
        mod_consts[136],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_da346f81babb58b0cb0adb46480f569f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__3__seg_2(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__3__seg_2,
        mod_consts[100],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_40e073636dd098cbdf0d3f60789b6dc0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__40__seg_39(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__40__seg_39,
        mod_consts[137],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_bc12d888a9f3b3a5c4b6da4471c3c43c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__41__seg_40(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__41__seg_40,
        mod_consts[138],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_5d89be3719886a057ae9d2e258929652,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__42__seg_41(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__42__seg_41,
        mod_consts[139],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_1929a1e3aee0d7b070b7c06ad2f154f7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__43__seg_42(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__43__seg_42,
        mod_consts[140],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_33287ec1ff772e460863ffdec89fdaa3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__44__seg_43(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__44__seg_43,
        mod_consts[141],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_aa6f6bdd9d74906075012e7df610810f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__45__seg_44(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__45__seg_44,
        mod_consts[142],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_017a8e44a120c31993ddf91ff28254e3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__46__seg_45(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__46__seg_45,
        mod_consts[143],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_6fab9a91c9cdefe8621a456f1feb3be8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__47__seg_46(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__47__seg_46,
        mod_consts[144],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_62942485f6b94d075f174b7e0aa02257,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__48__seg_47(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__48__seg_47,
        mod_consts[145],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_6dc54c9630441d10f8985ef6d2cfeed7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__49__seg_48(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__49__seg_48,
        mod_consts[146],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_d187df21e12f9e79964d85e8220169e6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__4__seg_3(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__4__seg_3,
        mod_consts[101],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_2df58257d804c47688e4f97b428bf8a7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__50__seg_49(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__50__seg_49,
        mod_consts[147],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_7f502263c2330a0d85a011c7259a43c1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__51__seg_50(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__51__seg_50,
        mod_consts[148],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_78f418c80d94b04be3890d243ecba24c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__52__seg_51(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__52__seg_51,
        mod_consts[149],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_2c96a9dbfc0ba9418533d63ae394d753,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__53__seg_52(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__53__seg_52,
        mod_consts[150],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_1c6b009afd520b72d0cd38d39cbeee1a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__54__seg_53(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__54__seg_53,
        mod_consts[151],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_4723a0c13e3113c07b8cdbefe3e424c4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__55__seg_54(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__55__seg_54,
        mod_consts[152],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_af3ca7188898f47ffd2cf2918ee79633,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__56__seg_55(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__56__seg_55,
        mod_consts[153],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_8490e23768b5bc2f3048d135ecc946a0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__57__seg_56(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__57__seg_56,
        mod_consts[154],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_70eb48cb17bbbdd432a16a6512b83865,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__58__seg_57(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__58__seg_57,
        mod_consts[155],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_b7e3db50a4323402f885b116759477b9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__59__seg_58(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__59__seg_58,
        mod_consts[156],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ae1716dd5dff22b89233448c1e8ab898,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__5__seg_4(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__5__seg_4,
        mod_consts[102],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_a017faa5195dff7673f548cf064e351e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__60__seg_59(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__60__seg_59,
        mod_consts[157],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_5aeb0f60dbd02174062beeafa1a3ab60,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__61__seg_60(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__61__seg_60,
        mod_consts[158],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_77f177e6a95c367499ef4ba882c33c9b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__62__seg_61(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__62__seg_61,
        mod_consts[159],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_5f0f247b67e71ef890e8449c80ad41c6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__63__seg_62(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__63__seg_62,
        mod_consts[160],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_c3eaca15240cb2575f410a9f922e4583,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__64__seg_63(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__64__seg_63,
        mod_consts[161],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_2941f7e15bea71eee58e47be3c1e58db,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__65__seg_64(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__65__seg_64,
        mod_consts[162],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_9d9ac38607fba2f0c4baa3f9c0352ed7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__66__seg_65(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__66__seg_65,
        mod_consts[163],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_d834cdc6b571d2b4dade75143f3443bc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__67__seg_66(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__67__seg_66,
        mod_consts[164],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_fe1c8e3b878341114ef46ab1642b9bd4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__68__seg_67(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__68__seg_67,
        mod_consts[165],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_d819ea1ee328559a07a120c425bb61cd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__69__seg_68(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__69__seg_68,
        mod_consts[166],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_45534c91d644043efbcf0dcbb2cd3090,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__6__seg_5(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__6__seg_5,
        mod_consts[103],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_cfca1c92dfa8e742c42fc71ff53d36c5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__70__seg_69(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__70__seg_69,
        mod_consts[167],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_85a8c83c9c0ce6288984bbffaeb42679,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__71__seg_70(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__71__seg_70,
        mod_consts[168],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ac32f0f98d542cc670df961e92ee914e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__72__seg_71(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__72__seg_71,
        mod_consts[169],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_781f8e9008533ef875f29f739575f570,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__73__seg_72(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__73__seg_72,
        mod_consts[170],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_e9023472c28df9f95fe131c4a72f17fe,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__74__seg_73(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__74__seg_73,
        mod_consts[171],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_d784a247c95c3cb7cae1b3cd2b02eddb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__75__seg_74(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__75__seg_74,
        mod_consts[172],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_6699b1515ac3fc9e95fbfbda0732eb58,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__76__seg_75(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__76__seg_75,
        mod_consts[173],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_46e7cda4adfc2555051514e2e1f25fa1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__77__seg_76(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__77__seg_76,
        mod_consts[174],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_97a6246784c96a21070dfdeb2f7d4143,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__78__seg_77(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__78__seg_77,
        mod_consts[175],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_6ca60d33297e642391efcf6aba02d977,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__79__seg_78(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__79__seg_78,
        mod_consts[176],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_3da2406609082735d9c3ed0e970193a9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__7__seg_6(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__7__seg_6,
        mod_consts[104],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_1c7717384e9a37e0da02978d94189f87,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__80__seg_79(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__80__seg_79,
        mod_consts[177],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_8bf0a516cb69d5f5e96a958c8d9d5908,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__81__seg_80(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__81__seg_80,
        mod_consts[178],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_cff2d4b5fbe9dc2cddc330f963e3c07c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__8__seg_7(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__8__seg_7,
        mod_consts[105],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_8ce876bdc007eec156844d4eca84831e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__9__seg_8(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__9__seg_8,
        mod_consts[106],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_c21275985009e4dce8ae32292e605591,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}


extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();

extern PyTypeObject Nuitka_Loader_Type;

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
// Provide a way to create find a function via its C code and create it back
// in another process, useful for multiprocessing extensions like dill
extern void registerDillPluginTables(char const *module_name, PyMethodDef *reduce_compiled_function, PyMethodDef *create_compiled_function);

function_impl_code functable_idna$uts46data[] = {
    impl_idna$uts46data$$$function__1__seg_0,
    impl_idna$uts46data$$$function__2__seg_1,
    impl_idna$uts46data$$$function__3__seg_2,
    impl_idna$uts46data$$$function__4__seg_3,
    impl_idna$uts46data$$$function__5__seg_4,
    impl_idna$uts46data$$$function__6__seg_5,
    impl_idna$uts46data$$$function__7__seg_6,
    impl_idna$uts46data$$$function__8__seg_7,
    impl_idna$uts46data$$$function__9__seg_8,
    impl_idna$uts46data$$$function__10__seg_9,
    impl_idna$uts46data$$$function__11__seg_10,
    impl_idna$uts46data$$$function__12__seg_11,
    impl_idna$uts46data$$$function__13__seg_12,
    impl_idna$uts46data$$$function__14__seg_13,
    impl_idna$uts46data$$$function__15__seg_14,
    impl_idna$uts46data$$$function__16__seg_15,
    impl_idna$uts46data$$$function__17__seg_16,
    impl_idna$uts46data$$$function__18__seg_17,
    impl_idna$uts46data$$$function__19__seg_18,
    impl_idna$uts46data$$$function__20__seg_19,
    impl_idna$uts46data$$$function__21__seg_20,
    impl_idna$uts46data$$$function__22__seg_21,
    impl_idna$uts46data$$$function__23__seg_22,
    impl_idna$uts46data$$$function__24__seg_23,
    impl_idna$uts46data$$$function__25__seg_24,
    impl_idna$uts46data$$$function__26__seg_25,
    impl_idna$uts46data$$$function__27__seg_26,
    impl_idna$uts46data$$$function__28__seg_27,
    impl_idna$uts46data$$$function__29__seg_28,
    impl_idna$uts46data$$$function__30__seg_29,
    impl_idna$uts46data$$$function__31__seg_30,
    impl_idna$uts46data$$$function__32__seg_31,
    impl_idna$uts46data$$$function__33__seg_32,
    impl_idna$uts46data$$$function__34__seg_33,
    impl_idna$uts46data$$$function__35__seg_34,
    impl_idna$uts46data$$$function__36__seg_35,
    impl_idna$uts46data$$$function__37__seg_36,
    impl_idna$uts46data$$$function__38__seg_37,
    impl_idna$uts46data$$$function__39__seg_38,
    impl_idna$uts46data$$$function__40__seg_39,
    impl_idna$uts46data$$$function__41__seg_40,
    impl_idna$uts46data$$$function__42__seg_41,
    impl_idna$uts46data$$$function__43__seg_42,
    impl_idna$uts46data$$$function__44__seg_43,
    impl_idna$uts46data$$$function__45__seg_44,
    impl_idna$uts46data$$$function__46__seg_45,
    impl_idna$uts46data$$$function__47__seg_46,
    impl_idna$uts46data$$$function__48__seg_47,
    impl_idna$uts46data$$$function__49__seg_48,
    impl_idna$uts46data$$$function__50__seg_49,
    impl_idna$uts46data$$$function__51__seg_50,
    impl_idna$uts46data$$$function__52__seg_51,
    impl_idna$uts46data$$$function__53__seg_52,
    impl_idna$uts46data$$$function__54__seg_53,
    impl_idna$uts46data$$$function__55__seg_54,
    impl_idna$uts46data$$$function__56__seg_55,
    impl_idna$uts46data$$$function__57__seg_56,
    impl_idna$uts46data$$$function__58__seg_57,
    impl_idna$uts46data$$$function__59__seg_58,
    impl_idna$uts46data$$$function__60__seg_59,
    impl_idna$uts46data$$$function__61__seg_60,
    impl_idna$uts46data$$$function__62__seg_61,
    impl_idna$uts46data$$$function__63__seg_62,
    impl_idna$uts46data$$$function__64__seg_63,
    impl_idna$uts46data$$$function__65__seg_64,
    impl_idna$uts46data$$$function__66__seg_65,
    impl_idna$uts46data$$$function__67__seg_66,
    impl_idna$uts46data$$$function__68__seg_67,
    impl_idna$uts46data$$$function__69__seg_68,
    impl_idna$uts46data$$$function__70__seg_69,
    impl_idna$uts46data$$$function__71__seg_70,
    impl_idna$uts46data$$$function__72__seg_71,
    impl_idna$uts46data$$$function__73__seg_72,
    impl_idna$uts46data$$$function__74__seg_73,
    impl_idna$uts46data$$$function__75__seg_74,
    impl_idna$uts46data$$$function__76__seg_75,
    impl_idna$uts46data$$$function__77__seg_76,
    impl_idna$uts46data$$$function__78__seg_77,
    impl_idna$uts46data$$$function__79__seg_78,
    impl_idna$uts46data$$$function__80__seg_79,
    impl_idna$uts46data$$$function__81__seg_80,
    NULL
};

static char const *_reduce_compiled_function_argnames[] = {
    "func",
    NULL
};

static PyObject *_reduce_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    PyObject *func;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "O:reduce_compiled_function", (char **)_reduce_compiled_function_argnames, &func, NULL)) {
        return NULL;
    }

    if (Nuitka_Function_Check(func) == false) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "not a compiled function");
        return NULL;
    }

    struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)func;

    function_impl_code *current = functable_idna$uts46data;
    int offset = 0;

    while (*current != NULL) {
        if (*current == function->m_c_code) {
            break;
        }

        current += 1;
        offset += 1;
    }

    if (*current == NULL) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "Cannot find compiled function in module.");
        return NULL;
    }

    PyObject *code_object_desc = PyTuple_New(6);
    PyTuple_SET_ITEM0(code_object_desc, 0, function->m_code_object->co_filename);
    PyTuple_SET_ITEM0(code_object_desc, 1, function->m_code_object->co_name);
    PyTuple_SET_ITEM(code_object_desc, 2, PyLong_FromLong(function->m_code_object->co_firstlineno));
    PyTuple_SET_ITEM0(code_object_desc, 3, function->m_code_object->co_varnames);
    PyTuple_SET_ITEM(code_object_desc, 4, PyLong_FromLong(function->m_code_object->co_argcount));
    PyTuple_SET_ITEM(code_object_desc, 5, PyLong_FromLong(function->m_code_object->co_flags));

    CHECK_OBJECT_DEEP(code_object_desc);

    PyObject *result = PyTuple_New(4);
    PyTuple_SET_ITEM(result, 0, PyLong_FromLong(offset));
    PyTuple_SET_ITEM(result, 1, code_object_desc);
    PyTuple_SET_ITEM0(result, 2, function->m_defaults);
    PyTuple_SET_ITEM0(result, 3, function->m_doc != NULL ? function->m_doc : Py_None);

    CHECK_OBJECT_DEEP(result);

    return result;
}

static PyMethodDef _method_def_reduce_compiled_function = {"reduce_compiled_function", (PyCFunction)_reduce_compiled_function,
                                                           METH_VARARGS | METH_KEYWORDS, NULL};

static char const *_create_compiled_function_argnames[] = {
    "func",
    "code_object_desc",
    "defaults",
    "doc",
    NULL
};


static PyObject *_create_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    CHECK_OBJECT_DEEP(args);

    PyObject *func;
    PyObject *code_object_desc;
    PyObject *defaults;
    PyObject *doc;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "OOOO:create_compiled_function", (char **)_create_compiled_function_argnames, &func, &code_object_desc, &defaults, &doc, NULL)) {
        return NULL;
    }

    int offset = PyLong_AsLong(func);

    if (offset == -1 && ERROR_OCCURRED()) {
        return NULL;
    }

    if (offset > sizeof(functable_idna$uts46data) || offset < 0) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "Wrong offset for compiled function.");
        return NULL;
    }

    PyObject *filename = PyTuple_GET_ITEM(code_object_desc, 0);
    PyObject *function_name = PyTuple_GET_ITEM(code_object_desc, 1);
    PyObject *line = PyTuple_GET_ITEM(code_object_desc, 2);
    int line_int = PyLong_AsLong(line);
    assert(!ERROR_OCCURRED());

    PyObject *argnames = PyTuple_GET_ITEM(code_object_desc, 3);
    PyObject *arg_count = PyTuple_GET_ITEM(code_object_desc, 4);
    int arg_count_int = PyLong_AsLong(arg_count);
    assert(!ERROR_OCCURRED());
    PyObject *flags = PyTuple_GET_ITEM(code_object_desc, 5);
    int flags_int = PyLong_AsLong(flags);
    assert(!ERROR_OCCURRED());

    PyCodeObject *code_object = MAKE_CODEOBJECT(
        filename,
        line_int,
        flags_int,
        function_name,
        argnames,
        NULL, // freevars
        arg_count_int,
        0, // TODO: Missing kw_only_count
        0 // TODO: Missing pos_only_count
    );

    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        functable_idna$uts46data[offset],
        code_object->co_name,
#if PYTHON_VERSION >= 0x300
        NULL, // TODO: Not transferring qualname yet
#endif
        code_object,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL, // kwdefaults are done on the outside currently
        NULL, // TODO: Not transferring annotations
#endif
        module_idna$uts46data,
        doc,
        NULL,
        0
    );

    return (PyObject *)result;
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS | METH_KEYWORDS, NULL
};


#endif

// Internal entry point for module code.
PyObject *modulecode_idna$uts46data(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    module_idna$uts46data = module;

#ifdef _NUITKA_MODULE
    // In case of a stand alone extension module, need to call initialization
    // the init here because that's the first and only time we are going to get
    // called here.

    // Initialize the constant values used.
    _initBuiltinModule();
    createGlobalConstants();

    /* Initialize the compiled types of Nuitka. */
    _initCompiledCellType();
    _initCompiledGeneratorType();
    _initCompiledFunctionType();
    _initCompiledMethodType();
    _initCompiledFrameType();

    _initSlotCompare();
#if PYTHON_VERSION >= 0x270
    _initSlotIternext();
#endif

    patchBuiltinModule();
    patchTypeComparison();

    // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
    PRINT_STRING("idna.uts46data: Calling setupMetaPathBasedLoader().\n");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("idna.uts46data: Calling createModuleConstants().\n");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("idna.uts46data: Calling createModuleCodeObjects().\n");
#endif
    createModuleCodeObjects();

    // PRINT_STRING("in initidna$uts46data\n");

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.

    moduledict_idna$uts46data = MODULE_DICT(module_idna$uts46data);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_idna$uts46data,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_idna$uts46data,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_idna$uts46data,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_idna$uts46data,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_idna$uts46data,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_idna$uts46data);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_idna$uts46data, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 0x300
    UPDATE_STRING_DICT0(moduledict_idna$uts46data, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_idna$uts46data, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_idna$uts46data);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_47b1429513e72d7c4d7611e800671b6c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    int tmp_res;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[81], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[82], tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_47b1429513e72d7c4d7611e800671b6c = MAKE_MODULE_FRAME(codeobj_47b1429513e72d7c4d7611e800671b6c, module_idna$uts46data);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_47b1429513e72d7c4d7611e800671b6c);
    assert(Py_REFCNT(frame_47b1429513e72d7c4d7611e800671b6c) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[83]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[83]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[84], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = Py_True;
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[83]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[83]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[85], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[86], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_arg_name_1;
        PyObject *tmp_locals_arg_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = mod_consts[87];
        tmp_globals_arg_name_1 = (PyObject *)moduledict_idna$uts46data;
        tmp_locals_arg_name_1 = Py_None;
        tmp_fromlist_name_1 = mod_consts[88];
        tmp_level_name_1 = mod_consts[89];
        frame_47b1429513e72d7c4d7611e800671b6c->m_frame.f_lineno = 4;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_arg_name_1, tmp_locals_arg_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_4;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_1 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_idna$uts46data,
                mod_consts[90],
                mod_consts[89]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[90]);
        }

        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_idna$uts46data,
                mod_consts[91],
                mod_consts[89]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[91]);
        }

        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_idna$uts46data,
                mod_consts[92],
                mod_consts[89]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[92]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[92], tmp_assign_source_7);
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = mod_consts[93];
        UPDATE_STRING_DICT0(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[94], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_annotations_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_subscript_name_3;
        tmp_dict_key_1 = mod_consts[95];
        tmp_expression_name_1 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_name_1 == NULL)) {
            tmp_expression_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_2 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_expression_name_2 == NULL)) {
            tmp_expression_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        if (tmp_expression_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_3 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_name_3 == NULL)) {
            tmp_expression_name_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_3 = mod_consts[96];
        tmp_tuple_element_1 = LOOKUP_SUBSCRIPT(tmp_expression_name_3, tmp_subscript_name_3);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_2 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_4;
            PyObject *tmp_subscript_name_4;
            PyTuple_SET_ITEM(tmp_subscript_name_2, 0, tmp_tuple_element_1);
            tmp_expression_name_4 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

            if (unlikely(tmp_expression_name_4 == NULL)) {
                tmp_expression_name_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
            }

            if (tmp_expression_name_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 11;

                goto tuple_build_exception_1;
            }
            tmp_subscript_name_4 = mod_consts[97];
            tmp_tuple_element_1 = LOOKUP_SUBSCRIPT(tmp_expression_name_4, tmp_subscript_name_4);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 11;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_subscript_name_2, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_subscript_name_2);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_subscript_name_1 = LOOKUP_SUBSCRIPT(tmp_expression_name_2, tmp_subscript_name_2);
        Py_DECREF(tmp_subscript_name_2);
        if (tmp_subscript_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_name_1, tmp_subscript_name_1);
        Py_DECREF(tmp_subscript_name_1);
        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        tmp_annotations_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));


        tmp_assign_source_9 = MAKE_FUNCTION_idna$uts46data$$$function__1__seg_0(tmp_annotations_1);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[98], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_annotations_2;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_subscript_name_5;
        PyObject *tmp_expression_name_6;
        PyObject *tmp_subscript_name_6;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_expression_name_7;
        PyObject *tmp_subscript_name_7;
        tmp_dict_key_2 = mod_consts[95];
        tmp_expression_name_5 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_name_5 == NULL)) {
            tmp_expression_name_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_6 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_expression_name_6 == NULL)) {
            tmp_expression_name_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        if (tmp_expression_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_7 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_name_7 == NULL)) {
            tmp_expression_name_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_7 = mod_consts[96];
        tmp_tuple_element_2 = LOOKUP_SUBSCRIPT(tmp_expression_name_7, tmp_subscript_name_7);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_6 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_8;
            PyObject *tmp_subscript_name_8;
            PyTuple_SET_ITEM(tmp_subscript_name_6, 0, tmp_tuple_element_2);
            tmp_expression_name_8 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

            if (unlikely(tmp_expression_name_8 == NULL)) {
                tmp_expression_name_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
            }

            if (tmp_expression_name_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 115;

                goto tuple_build_exception_2;
            }
            tmp_subscript_name_8 = mod_consts[97];
            tmp_tuple_element_2 = LOOKUP_SUBSCRIPT(tmp_expression_name_8, tmp_subscript_name_8);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 115;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_subscript_name_6, 1, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_subscript_name_6);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_subscript_name_5 = LOOKUP_SUBSCRIPT(tmp_expression_name_6, tmp_subscript_name_6);
        Py_DECREF(tmp_subscript_name_6);
        if (tmp_subscript_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_name_5, tmp_subscript_name_5);
        Py_DECREF(tmp_subscript_name_5);
        if (tmp_dict_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;

            goto frame_exception_exit_1;
        }
        tmp_annotations_2 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
        Py_DECREF(tmp_dict_value_2);
        assert(!(tmp_res != 0));


        tmp_assign_source_10 = MAKE_FUNCTION_idna$uts46data$$$function__2__seg_1(tmp_annotations_2);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[99], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_annotations_3;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_expression_name_9;
        PyObject *tmp_subscript_name_9;
        PyObject *tmp_expression_name_10;
        PyObject *tmp_subscript_name_10;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_expression_name_11;
        PyObject *tmp_subscript_name_11;
        tmp_dict_key_3 = mod_consts[95];
        tmp_expression_name_9 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_name_9 == NULL)) {
            tmp_expression_name_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_10 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_expression_name_10 == NULL)) {
            tmp_expression_name_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        if (tmp_expression_name_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_11 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_name_11 == NULL)) {
            tmp_expression_name_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_name_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_11 = mod_consts[96];
        tmp_tuple_element_3 = LOOKUP_SUBSCRIPT(tmp_expression_name_11, tmp_subscript_name_11);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_10 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_12;
            PyObject *tmp_subscript_name_12;
            PyTuple_SET_ITEM(tmp_subscript_name_10, 0, tmp_tuple_element_3);
            tmp_expression_name_12 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

            if (unlikely(tmp_expression_name_12 == NULL)) {
                tmp_expression_name_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
            }

            if (tmp_expression_name_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 219;

                goto tuple_build_exception_3;
            }
            tmp_subscript_name_12 = mod_consts[97];
            tmp_tuple_element_3 = LOOKUP_SUBSCRIPT(tmp_expression_name_12, tmp_subscript_name_12);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 219;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_subscript_name_10, 1, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_subscript_name_10);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        tmp_subscript_name_9 = LOOKUP_SUBSCRIPT(tmp_expression_name_10, tmp_subscript_name_10);
        Py_DECREF(tmp_subscript_name_10);
        if (tmp_subscript_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_3 = LOOKUP_SUBSCRIPT(tmp_expression_name_9, tmp_subscript_name_9);
        Py_DECREF(tmp_subscript_name_9);
        if (tmp_dict_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;

            goto frame_exception_exit_1;
        }
        tmp_annotations_3 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
        Py_DECREF(tmp_dict_value_3);
        assert(!(tmp_res != 0));


        tmp_assign_source_11 = MAKE_FUNCTION_idna$uts46data$$$function__3__seg_2(tmp_annotations_3);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[100], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_annotations_4;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        PyObject *tmp_expression_name_13;
        PyObject *tmp_subscript_name_13;
        PyObject *tmp_expression_name_14;
        PyObject *tmp_subscript_name_14;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_expression_name_15;
        PyObject *tmp_subscript_name_15;
        tmp_dict_key_4 = mod_consts[95];
        tmp_expression_name_13 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_name_13 == NULL)) {
            tmp_expression_name_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_name_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 323;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_14 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_expression_name_14 == NULL)) {
            tmp_expression_name_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        if (tmp_expression_name_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 323;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_15 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_name_15 == NULL)) {
            tmp_expression_name_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_name_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 323;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_15 = mod_consts[96];
        tmp_tuple_element_4 = LOOKUP_SUBSCRIPT(tmp_expression_name_15, tmp_subscript_name_15);
        if (tmp_tuple_element_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 323;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_14 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_16;
            PyObject *tmp_subscript_name_16;
            PyTuple_SET_ITEM(tmp_subscript_name_14, 0, tmp_tuple_element_4);
            tmp_expression_name_16 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

            if (unlikely(tmp_expression_name_16 == NULL)) {
                tmp_expression_name_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
            }

            if (tmp_expression_name_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 323;

                goto tuple_build_exception_4;
            }
            tmp_subscript_name_16 = mod_consts[97];
            tmp_tuple_element_4 = LOOKUP_SUBSCRIPT(tmp_expression_name_16, tmp_subscript_name_16);
            if (tmp_tuple_element_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 323;

                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_subscript_name_14, 1, tmp_tuple_element_4);
        }
        goto tuple_build_noexception_4;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_4:;
        Py_DECREF(tmp_subscript_name_14);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_4:;
        tmp_subscript_name_13 = LOOKUP_SUBSCRIPT(tmp_expression_name_14, tmp_subscript_name_14);
        Py_DECREF(tmp_subscript_name_14);
        if (tmp_subscript_name_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 323;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tmp_expression_name_13, tmp_subscript_name_13);
        Py_DECREF(tmp_subscript_name_13);
        if (tmp_dict_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 323;

            goto frame_exception_exit_1;
        }
        tmp_annotations_4 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
        Py_DECREF(tmp_dict_value_4);
        assert(!(tmp_res != 0));


        tmp_assign_source_12 = MAKE_FUNCTION_idna$uts46data$$$function__4__seg_3(tmp_annotations_4);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[101], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_annotations_5;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        PyObject *tmp_expression_name_17;
        PyObject *tmp_subscript_name_17;
        PyObject *tmp_expression_name_18;
        PyObject *tmp_subscript_name_18;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_expression_name_19;
        PyObject *tmp_subscript_name_19;
        tmp_dict_key_5 = mod_consts[95];
        tmp_expression_name_17 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_name_17 == NULL)) {
            tmp_expression_name_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_name_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 427;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_18 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_expression_name_18 == NULL)) {
            tmp_expression_name_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        if (tmp_expression_name_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 427;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_19 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_name_19 == NULL)) {
            tmp_expression_name_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_name_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 427;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_19 = mod_consts[96];
        tmp_tuple_element_5 = LOOKUP_SUBSCRIPT(tmp_expression_name_19, tmp_subscript_name_19);
        if (tmp_tuple_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 427;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_18 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_20;
            PyObject *tmp_subscript_name_20;
            PyTuple_SET_ITEM(tmp_subscript_name_18, 0, tmp_tuple_element_5);
            tmp_expression_name_20 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

            if (unlikely(tmp_expression_name_20 == NULL)) {
                tmp_expression_name_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
            }

            if (tmp_expression_name_20 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 427;

                goto tuple_build_exception_5;
            }
            tmp_subscript_name_20 = mod_consts[97];
            tmp_tuple_element_5 = LOOKUP_SUBSCRIPT(tmp_expression_name_20, tmp_subscript_name_20);
            if (tmp_tuple_element_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 427;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_subscript_name_18, 1, tmp_tuple_element_5);
        }
        goto tuple_build_noexception_5;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_5:;
        Py_DECREF(tmp_subscript_name_18);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_5:;
        tmp_subscript_name_17 = LOOKUP_SUBSCRIPT(tmp_expression_name_18, tmp_subscript_name_18);
        Py_DECREF(tmp_subscript_name_18);
        if (tmp_subscript_name_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 427;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_5 = LOOKUP_SUBSCRIPT(tmp_expression_name_17, tmp_subscript_name_17);
        Py_DECREF(tmp_subscript_name_17);
        if (tmp_dict_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 427;

            goto frame_exception_exit_1;
        }
        tmp_annotations_5 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
        Py_DECREF(tmp_dict_value_5);
        assert(!(tmp_res != 0));


        tmp_assign_source_13 = MAKE_FUNCTION_idna$uts46data$$$function__5__seg_4(tmp_annotations_5);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[102], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_annotations_6;
        PyObject *tmp_dict_key_6;
        PyObject *tmp_dict_value_6;
        PyObject *tmp_expression_name_21;
        PyObject *tmp_subscript_name_21;
        PyObject *tmp_expression_name_22;
        PyObject *tmp_subscript_name_22;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_expression_name_23;
        PyObject *tmp_subscript_name_23;
        tmp_dict_key_6 = mod_consts[95];
        tmp_expression_name_21 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_name_21 == NULL)) {
            tmp_expression_name_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_name_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 531;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_22 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_expression_name_22 == NULL)) {
            tmp_expression_name_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        if (tmp_expression_name_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 531;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_23 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_name_23 == NULL)) {
            tmp_expression_name_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_name_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 531;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_23 = mod_consts[96];
        tmp_tuple_element_6 = LOOKUP_SUBSCRIPT(tmp_expression_name_23, tmp_subscript_name_23);
        if (tmp_tuple_element_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 531;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_22 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_24;
            PyObject *tmp_subscript_name_24;
            PyTuple_SET_ITEM(tmp_subscript_name_22, 0, tmp_tuple_element_6);
            tmp_expression_name_24 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

            if (unlikely(tmp_expression_name_24 == NULL)) {
                tmp_expression_name_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
            }

            if (tmp_expression_name_24 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 531;

                goto tuple_build_exception_6;
            }
            tmp_subscript_name_24 = mod_consts[97];
            tmp_tuple_element_6 = LOOKUP_SUBSCRIPT(tmp_expression_name_24, tmp_subscript_name_24);
            if (tmp_tuple_element_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 531;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_subscript_name_22, 1, tmp_tuple_element_6);
        }
        goto tuple_build_noexception_6;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_6:;
        Py_DECREF(tmp_subscript_name_22);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_6:;
        tmp_subscript_name_21 = LOOKUP_SUBSCRIPT(tmp_expression_name_22, tmp_subscript_name_22);
        Py_DECREF(tmp_subscript_name_22);
        if (tmp_subscript_name_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 531;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_6 = LOOKUP_SUBSCRIPT(tmp_expression_name_21, tmp_subscript_name_21);
        Py_DECREF(tmp_subscript_name_21);
        if (tmp_dict_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 531;

            goto frame_exception_exit_1;
        }
        tmp_annotations_6 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_6, tmp_dict_value_6);
        Py_DECREF(tmp_dict_value_6);
        assert(!(tmp_res != 0));


        tmp_assign_source_14 = MAKE_FUNCTION_idna$uts46data$$$function__6__seg_5(tmp_annotations_6);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[103], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_annotations_7;
        PyObject *tmp_dict_key_7;
        PyObject *tmp_dict_value_7;
        PyObject *tmp_expression_name_25;
        PyObject *tmp_subscript_name_25;
        PyObject *tmp_expression_name_26;
        PyObject *tmp_subscript_name_26;
        PyObject *tmp_tuple_element_7;
        PyObject *tmp_expression_name_27;
        PyObject *tmp_subscript_name_27;
        tmp_dict_key_7 = mod_consts[95];
        tmp_expression_name_25 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_name_25 == NULL)) {
            tmp_expression_name_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_name_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 635;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_26 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_expression_name_26 == NULL)) {
            tmp_expression_name_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        if (tmp_expression_name_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 635;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_27 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_name_27 == NULL)) {
            tmp_expression_name_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_name_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 635;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_27 = mod_consts[96];
        tmp_tuple_element_7 = LOOKUP_SUBSCRIPT(tmp_expression_name_27, tmp_subscript_name_27);
        if (tmp_tuple_element_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 635;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_26 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_28;
            PyObject *tmp_subscript_name_28;
            PyTuple_SET_ITEM(tmp_subscript_name_26, 0, tmp_tuple_element_7);
            tmp_expression_name_28 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

            if (unlikely(tmp_expression_name_28 == NULL)) {
                tmp_expression_name_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
            }

            if (tmp_expression_name_28 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 635;

                goto tuple_build_exception_7;
            }
            tmp_subscript_name_28 = mod_consts[97];
            tmp_tuple_element_7 = LOOKUP_SUBSCRIPT(tmp_expression_name_28, tmp_subscript_name_28);
            if (tmp_tuple_element_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 635;

                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_subscript_name_26, 1, tmp_tuple_element_7);
        }
        goto tuple_build_noexception_7;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_7:;
        Py_DECREF(tmp_subscript_name_26);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_7:;
        tmp_subscript_name_25 = LOOKUP_SUBSCRIPT(tmp_expression_name_26, tmp_subscript_name_26);
        Py_DECREF(tmp_subscript_name_26);
        if (tmp_subscript_name_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 635;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_7 = LOOKUP_SUBSCRIPT(tmp_expression_name_25, tmp_subscript_name_25);
        Py_DECREF(tmp_subscript_name_25);
        if (tmp_dict_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 635;

            goto frame_exception_exit_1;
        }
        tmp_annotations_7 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_7, tmp_dict_value_7);
        Py_DECREF(tmp_dict_value_7);
        assert(!(tmp_res != 0));


        tmp_assign_source_15 = MAKE_FUNCTION_idna$uts46data$$$function__7__seg_6(tmp_annotations_7);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[104], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_annotations_8;
        PyObject *tmp_dict_key_8;
        PyObject *tmp_dict_value_8;
        PyObject *tmp_expression_name_29;
        PyObject *tmp_subscript_name_29;
        PyObject *tmp_expression_name_30;
        PyObject *tmp_subscript_name_30;
        PyObject *tmp_tuple_element_8;
        PyObject *tmp_expression_name_31;
        PyObject *tmp_subscript_name_31;
        tmp_dict_key_8 = mod_consts[95];
        tmp_expression_name_29 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_name_29 == NULL)) {
            tmp_expression_name_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_name_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 739;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_30 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_expression_name_30 == NULL)) {
            tmp_expression_name_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        if (tmp_expression_name_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 739;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_31 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_name_31 == NULL)) {
            tmp_expression_name_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_name_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 739;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_31 = mod_consts[96];
        tmp_tuple_element_8 = LOOKUP_SUBSCRIPT(tmp_expression_name_31, tmp_subscript_name_31);
        if (tmp_tuple_element_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 739;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_30 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_32;
            PyObject *tmp_subscript_name_32;
            PyTuple_SET_ITEM(tmp_subscript_name_30, 0, tmp_tuple_element_8);
            tmp_expression_name_32 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

            if (unlikely(tmp_expression_name_32 == NULL)) {
                tmp_expression_name_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
            }

            if (tmp_expression_name_32 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 739;

                goto tuple_build_exception_8;
            }
            tmp_subscript_name_32 = mod_consts[97];
            tmp_tuple_element_8 = LOOKUP_SUBSCRIPT(tmp_expression_name_32, tmp_subscript_name_32);
            if (tmp_tuple_element_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 739;

                goto tuple_build_exception_8;
            }
            PyTuple_SET_ITEM(tmp_subscript_name_30, 1, tmp_tuple_element_8);
        }
        goto tuple_build_noexception_8;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_8:;
        Py_DECREF(tmp_subscript_name_30);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_8:;
        tmp_subscript_name_29 = LOOKUP_SUBSCRIPT(tmp_expression_name_30, tmp_subscript_name_30);
        Py_DECREF(tmp_subscript_name_30);
        if (tmp_subscript_name_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 739;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_8 = LOOKUP_SUBSCRIPT(tmp_expression_name_29, tmp_subscript_name_29);
        Py_DECREF(tmp_subscript_name_29);
        if (tmp_dict_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 739;

            goto frame_exception_exit_1;
        }
        tmp_annotations_8 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_8, tmp_dict_value_8);
        Py_DECREF(tmp_dict_value_8);
        assert(!(tmp_res != 0));


        tmp_assign_source_16 = MAKE_FUNCTION_idna$uts46data$$$function__8__seg_7(tmp_annotations_8);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[105], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_annotations_9;
        PyObject *tmp_dict_key_9;
        PyObject *tmp_dict_value_9;
        PyObject *tmp_expression_name_33;
        PyObject *tmp_subscript_name_33;
        PyObject *tmp_expression_name_34;
        PyObject *tmp_subscript_name_34;
        PyObject *tmp_tuple_element_9;
        PyObject *tmp_expression_name_35;
        PyObject *tmp_subscript_name_35;
        tmp_dict_key_9 = mod_consts[95];
        tmp_expression_name_33 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_name_33 == NULL)) {
            tmp_expression_name_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_name_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 843;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_34 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_expression_name_34 == NULL)) {
            tmp_expression_name_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        if (tmp_expression_name_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 843;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_35 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_name_35 == NULL)) {
            tmp_expression_name_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_name_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 843;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_35 = mod_consts[96];
        tmp_tuple_element_9 = LOOKUP_SUBSCRIPT(tmp_expression_name_35, tmp_subscript_name_35);
        if (tmp_tuple_element_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 843;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_34 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_36;
            PyObject *tmp_subscript_name_36;
            PyTuple_SET_ITEM(tmp_subscript_name_34, 0, tmp_tuple_element_9);
            tmp_expression_name_36 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

            if (unlikely(tmp_expression_name_36 == NULL)) {
                tmp_expression_name_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
            }

            if (tmp_expression_name_36 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 843;

                goto tuple_build_exception_9;
            }
            tmp_subscript_name_36 = mod_consts[97];
            tmp_tuple_element_9 = LOOKUP_SUBSCRIPT(tmp_expression_name_36, tmp_subscript_name_36);
            if (tmp_tuple_element_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 843;

                goto tuple_build_exception_9;
            }
            PyTuple_SET_ITEM(tmp_subscript_name_34, 1, tmp_tuple_element_9);
        }
        goto tuple_build_noexception_9;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_9:;
        Py_DECREF(tmp_subscript_name_34);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_9:;
        tmp_subscript_name_33 = LOOKUP_SUBSCRIPT(tmp_expression_name_34, tmp_subscript_name_34);
        Py_DECREF(tmp_subscript_name_34);
        if (tmp_subscript_name_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 843;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_9 = LOOKUP_SUBSCRIPT(tmp_expression_name_33, tmp_subscript_name_33);
        Py_DECREF(tmp_subscript_name_33);
        if (tmp_dict_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 843;

            goto frame_exception_exit_1;
        }
        tmp_annotations_9 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_9, tmp_dict_value_9);
        Py_DECREF(tmp_dict_value_9);
        assert(!(tmp_res != 0));


        tmp_assign_source_17 = MAKE_FUNCTION_idna$uts46data$$$function__9__seg_8(tmp_annotations_9);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[106], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_annotations_10;
        PyObject *tmp_dict_key_10;
        PyObject *tmp_dict_value_10;
        PyObject *tmp_expression_name_37;
        PyObject *tmp_subscript_name_37;
        PyObject *tmp_expression_name_38;
        PyObject *tmp_subscript_name_38;
        PyObject *tmp_tuple_element_10;
        PyObject *tmp_expression_name_39;
        PyObject *tmp_subscript_name_39;
        tmp_dict_key_10 = mod_consts[95];
        tmp_expression_name_37 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_name_37 == NULL)) {
            tmp_expression_name_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_name_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 947;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_38 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_expression_name_38 == NULL)) {
            tmp_expression_name_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        if (tmp_expression_name_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 947;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_39 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_name_39 == NULL)) {
            tmp_expression_name_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_name_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 947;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_39 = mod_consts[96];
        tmp_tuple_element_10 = LOOKUP_SUBSCRIPT(tmp_expression_name_39, tmp_subscript_name_39);
        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 947;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_38 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_40;
            PyObject *tmp_subscript_name_40;
            PyTuple_SET_ITEM(tmp_subscript_name_38, 0, tmp_tuple_element_10);
            tmp_expression_name_40 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

            if (unlikely(tmp_expression_name_40 == NULL)) {
                tmp_expression_name_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
            }

            if (tmp_expression_name_40 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 947;

                goto tuple_build_exception_10;
            }
            tmp_subscript_name_40 = mod_consts[97];
            tmp_tuple_element_10 = LOOKUP_SUBSCRIPT(tmp_expression_name_40, tmp_subscript_name_40);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 947;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_subscript_name_38, 1, tmp_tuple_element_10);
        }
        goto tuple_build_noexception_10;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_10:;
        Py_DECREF(tmp_subscript_name_38);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_10:;
        tmp_subscript_name_37 = LOOKUP_SUBSCRIPT(tmp_expression_name_38, tmp_subscript_name_38);
        Py_DECREF(tmp_subscript_name_38);
        if (tmp_subscript_name_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 947;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_10 = LOOKUP_SUBSCRIPT(tmp_expression_name_37, tmp_subscript_name_37);
        Py_DECREF(tmp_subscript_name_37);
        if (tmp_dict_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 947;

            goto frame_exception_exit_1;
        }
        tmp_annotations_10 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_10, tmp_dict_value_10);
        Py_DECREF(tmp_dict_value_10);
        assert(!(tmp_res != 0));


        tmp_assign_source_18 = MAKE_FUNCTION_idna$uts46data$$$function__10__seg_9(tmp_annotations_10);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[107], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_annotations_11;
        PyObject *tmp_dict_key_11;
        PyObject *tmp_dict_value_11;
        PyObject *tmp_expression_name_41;
        PyObject *tmp_subscript_name_41;
        PyObject *tmp_expression_name_42;
        PyObject *tmp_subscript_name_42;
        PyObject *tmp_tuple_element_11;
        PyObject *tmp_expression_name_43;
        PyObject *tmp_subscript_name_43;
        tmp_dict_key_11 = mod_consts[95];
        tmp_expression_name_41 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_name_41 == NULL)) {
            tmp_expression_name_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_name_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1051;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_42 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_expression_name_42 == NULL)) {
            tmp_expression_name_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        if (tmp_expression_name_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1051;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_43 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_name_43 == NULL)) {
            tmp_expression_name_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_name_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1051;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_43 = mod_consts[96];
        tmp_tuple_element_11 = LOOKUP_SUBSCRIPT(tmp_expression_name_43, tmp_subscript_name_43);
        if (tmp_tuple_element_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1051;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_42 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_44;
            PyObject *tmp_subscript_name_44;
            PyTuple_SET_ITEM(tmp_subscript_name_42, 0, tmp_tuple_element_11);
            tmp_expression_name_44 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

            if (unlikely(tmp_expression_name_44 == NULL)) {
                tmp_expression_name_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
            }

            if (tmp_expression_name_44 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1051;

                goto tuple_build_exception_11;
            }
            tmp_subscript_name_44 = mod_consts[97];
            tmp_tuple_element_11 = LOOKUP_SUBSCRIPT(tmp_expression_name_44, tmp_subscript_name_44);
            if (tmp_tuple_element_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1051;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_subscript_name_42, 1, tmp_tuple_element_11);
        }
        goto tuple_build_noexception_11;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_11:;
        Py_DECREF(tmp_subscript_name_42);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_11:;
        tmp_subscript_name_41 = LOOKUP_SUBSCRIPT(tmp_expression_name_42, tmp_subscript_name_42);
        Py_DECREF(tmp_subscript_name_42);
        if (tmp_subscript_name_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1051;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_11 = LOOKUP_SUBSCRIPT(tmp_expression_name_41, tmp_subscript_name_41);
        Py_DECREF(tmp_subscript_name_41);
        if (tmp_dict_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1051;

            goto frame_exception_exit_1;
        }
        tmp_annotations_11 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_11, tmp_dict_value_11);
        Py_DECREF(tmp_dict_value_11);
        assert(!(tmp_res != 0));


        tmp_assign_source_19 = MAKE_FUNCTION_idna$uts46data$$$function__11__seg_10(tmp_annotations_11);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[108], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_annotations_12;
        PyObject *tmp_dict_key_12;
        PyObject *tmp_dict_value_12;
        PyObject *tmp_expression_name_45;
        PyObject *tmp_subscript_name_45;
        PyObject *tmp_expression_name_46;
        PyObject *tmp_subscript_name_46;
        PyObject *tmp_tuple_element_12;
        PyObject *tmp_expression_name_47;
        PyObject *tmp_subscript_name_47;
        tmp_dict_key_12 = mod_consts[95];
        tmp_expression_name_45 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_name_45 == NULL)) {
            tmp_expression_name_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_name_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1155;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_46 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_expression_name_46 == NULL)) {
            tmp_expression_name_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        if (tmp_expression_name_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1155;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_47 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_name_47 == NULL)) {
            tmp_expression_name_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_name_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1155;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_47 = mod_consts[96];
        tmp_tuple_element_12 = LOOKUP_SUBSCRIPT(tmp_expression_name_47, tmp_subscript_name_47);
        if (tmp_tuple_element_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1155;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_46 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_48;
            PyObject *tmp_subscript_name_48;
            PyTuple_SET_ITEM(tmp_subscript_name_46, 0, tmp_tuple_element_12);
            tmp_expression_name_48 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

            if (unlikely(tmp_expression_name_48 == NULL)) {
                tmp_expression_name_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
            }

            if (tmp_expression_name_48 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1155;

                goto tuple_build_exception_12;
            }
            tmp_subscript_name_48 = mod_consts[97];
            tmp_tuple_element_12 = LOOKUP_SUBSCRIPT(tmp_expression_name_48, tmp_subscript_name_48);
            if (tmp_tuple_element_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1155;

                goto tuple_build_exception_12;
            }
            PyTuple_SET_ITEM(tmp_subscript_name_46, 1, tmp_tuple_element_12);
        }
        goto tuple_build_noexception_12;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_12:;
        Py_DECREF(tmp_subscript_name_46);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_12:;
        tmp_subscript_name_45 = LOOKUP_SUBSCRIPT(tmp_expression_name_46, tmp_subscript_name_46);
        Py_DECREF(tmp_subscript_name_46);
        if (tmp_subscript_name_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1155;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_12 = LOOKUP_SUBSCRIPT(tmp_expression_name_45, tmp_subscript_name_45);
        Py_DECREF(tmp_subscript_name_45);
        if (tmp_dict_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1155;

            goto frame_exception_exit_1;
        }
        tmp_annotations_12 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_12, tmp_dict_value_12);
        Py_DECREF(tmp_dict_value_12);
        assert(!(tmp_res != 0));


        tmp_assign_source_20 = MAKE_FUNCTION_idna$uts46data$$$function__12__seg_11(tmp_annotations_12);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[109], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_annotations_13;
        PyObject *tmp_dict_key_13;
        PyObject *tmp_dict_value_13;
        PyObject *tmp_expression_name_49;
        PyObject *tmp_subscript_name_49;
        PyObject *tmp_expression_name_50;
        PyObject *tmp_subscript_name_50;
        PyObject *tmp_tuple_element_13;
        PyObject *tmp_expression_name_51;
        PyObject *tmp_subscript_name_51;
        tmp_dict_key_13 = mod_consts[95];
        tmp_expression_name_49 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_name_49 == NULL)) {
            tmp_expression_name_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_name_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1259;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_50 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_expression_name_50 == NULL)) {
            tmp_expression_name_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        if (tmp_expression_name_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1259;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_51 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_name_51 == NULL)) {
            tmp_expression_name_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_name_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1259;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_51 = mod_consts[96];
        tmp_tuple_element_13 = LOOKUP_SUBSCRIPT(tmp_expression_name_51, tmp_subscript_name_51);
        if (tmp_tuple_element_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1259;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_50 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_52;
            PyObject *tmp_subscript_name_52;
            PyTuple_SET_ITEM(tmp_subscript_name_50, 0, tmp_tuple_element_13);
            tmp_expression_name_52 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

            if (unlikely(tmp_expression_name_52 == NULL)) {
                tmp_expression_name_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
            }

            if (tmp_expression_name_52 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1259;

                goto tuple_build_exception_13;
            }
            tmp_subscript_name_52 = mod_consts[97];
            tmp_tuple_element_13 = LOOKUP_SUBSCRIPT(tmp_expression_name_52, tmp_subscript_name_52);
            if (tmp_tuple_element_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1259;

                goto tuple_build_exception_13;
            }
            PyTuple_SET_ITEM(tmp_subscript_name_50, 1, tmp_tuple_element_13);
        }
        goto tuple_build_noexception_13;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_13:;
        Py_DECREF(tmp_subscript_name_50);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_13:;
        tmp_subscript_name_49 = LOOKUP_SUBSCRIPT(tmp_expression_name_50, tmp_subscript_name_50);
        Py_DECREF(tmp_subscript_name_50);
        if (tmp_subscript_name_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1259;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_13 = LOOKUP_SUBSCRIPT(tmp_expression_name_49, tmp_subscript_name_49);
        Py_DECREF(tmp_subscript_name_49);
        if (tmp_dict_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1259;

            goto frame_exception_exit_1;
        }
        tmp_annotations_13 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_13, tmp_dict_key_13, tmp_dict_value_13);
        Py_DECREF(tmp_dict_value_13);
        assert(!(tmp_res != 0));


        tmp_assign_source_21 = MAKE_FUNCTION_idna$uts46data$$$function__13__seg_12(tmp_annotations_13);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[110], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_annotations_14;
        PyObject *tmp_dict_key_14;
        PyObject *tmp_dict_value_14;
        PyObject *tmp_expression_name_53;
        PyObject *tmp_subscript_name_53;
        PyObject *tmp_expression_name_54;
        PyObject *tmp_subscript_name_54;
        PyObject *tmp_tuple_element_14;
        PyObject *tmp_expression_name_55;
        PyObject *tmp_subscript_name_55;
        tmp_dict_key_14 = mod_consts[95];
        tmp_expression_name_53 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_name_53 == NULL)) {
            tmp_expression_name_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_name_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1363;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_54 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_expression_name_54 == NULL)) {
            tmp_expression_name_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        if (tmp_expression_name_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1363;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_55 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_name_55 == NULL)) {
            tmp_expression_name_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_name_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1363;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_55 = mod_consts[96];
        tmp_tuple_element_14 = LOOKUP_SUBSCRIPT(tmp_expression_name_55, tmp_subscript_name_55);
        if (tmp_tuple_element_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1363;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_54 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_56;
            PyObject *tmp_subscript_name_56;
            PyTuple_SET_ITEM(tmp_subscript_name_54, 0, tmp_tuple_element_14);
            tmp_expression_name_56 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

            if (unlikely(tmp_expression_name_56 == NULL)) {
                tmp_expression_name_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
            }

            if (tmp_expression_name_56 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1363;

                goto tuple_build_exception_14;
            }
            tmp_subscript_name_56 = mod_consts[97];
            tmp_tuple_element_14 = LOOKUP_SUBSCRIPT(tmp_expression_name_56, tmp_subscript_name_56);
            if (tmp_tuple_element_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1363;

                goto tuple_build_exception_14;
            }
            PyTuple_SET_ITEM(tmp_subscript_name_54, 1, tmp_tuple_element_14);
        }
        goto tuple_build_noexception_14;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_14:;
        Py_DECREF(tmp_subscript_name_54);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_14:;
        tmp_subscript_name_53 = LOOKUP_SUBSCRIPT(tmp_expression_name_54, tmp_subscript_name_54);
        Py_DECREF(tmp_subscript_name_54);
        if (tmp_subscript_name_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1363;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_14 = LOOKUP_SUBSCRIPT(tmp_expression_name_53, tmp_subscript_name_53);
        Py_DECREF(tmp_subscript_name_53);
        if (tmp_dict_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1363;

            goto frame_exception_exit_1;
        }
        tmp_annotations_14 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_14, tmp_dict_value_14);
        Py_DECREF(tmp_dict_value_14);
        assert(!(tmp_res != 0));


        tmp_assign_source_22 = MAKE_FUNCTION_idna$uts46data$$$function__14__seg_13(tmp_annotations_14);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[111], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_annotations_15;
        PyObject *tmp_dict_key_15;
        PyObject *tmp_dict_value_15;
        PyObject *tmp_expression_name_57;
        PyObject *tmp_subscript_name_57;
        PyObject *tmp_expression_name_58;
        PyObject *tmp_subscript_name_58;
        PyObject *tmp_tuple_element_15;
        PyObject *tmp_expression_name_59;
        PyObject *tmp_subscript_name_59;
        tmp_dict_key_15 = mod_consts[95];
        tmp_expression_name_57 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_name_57 == NULL)) {
            tmp_expression_name_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_name_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1467;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_58 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_expression_name_58 == NULL)) {
            tmp_expression_name_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        if (tmp_expression_name_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1467;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_59 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_name_59 == NULL)) {
            tmp_expression_name_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_name_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1467;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_59 = mod_consts[96];
        tmp_tuple_element_15 = LOOKUP_SUBSCRIPT(tmp_expression_name_59, tmp_subscript_name_59);
        if (tmp_tuple_element_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1467;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_58 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_60;
            PyObject *tmp_subscript_name_60;
            PyTuple_SET_ITEM(tmp_subscript_name_58, 0, tmp_tuple_element_15);
            tmp_expression_name_60 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

            if (unlikely(tmp_expression_name_60 == NULL)) {
                tmp_expression_name_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
            }

            if (tmp_expression_name_60 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1467;

                goto tuple_build_exception_15;
            }
            tmp_subscript_name_60 = mod_consts[97];
            tmp_tuple_element_15 = LOOKUP_SUBSCRIPT(tmp_expression_name_60, tmp_subscript_name_60);
            if (tmp_tuple_element_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1467;

                goto tuple_build_exception_15;
            }
            PyTuple_SET_ITEM(tmp_subscript_name_58, 1, tmp_tuple_element_15);
        }
        goto tuple_build_noexception_15;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_15:;
        Py_DECREF(tmp_subscript_name_58);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_15:;
        tmp_subscript_name_57 = LOOKUP_SUBSCRIPT(tmp_expression_name_58, tmp_subscript_name_58);
        Py_DECREF(tmp_subscript_name_58);
        if (tmp_subscript_name_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1467;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_15 = LOOKUP_SUBSCRIPT(tmp_expression_name_57, tmp_subscript_name_57);
        Py_DECREF(tmp_subscript_name_57);
        if (tmp_dict_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1467;

            goto frame_exception_exit_1;
        }
        tmp_annotations_15 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_15, tmp_dict_key_15, tmp_dict_value_15);
        Py_DECREF(tmp_dict_value_15);
        assert(!(tmp_res != 0));


        tmp_assign_source_23 = MAKE_FUNCTION_idna$uts46data$$$function__15__seg_14(tmp_annotations_15);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[112], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_annotations_16;
        PyObject *tmp_dict_key_16;
        PyObject *tmp_dict_value_16;
        PyObject *tmp_expression_name_61;
        PyObject *tmp_subscript_name_61;
        PyObject *tmp_expression_name_62;
        PyObject *tmp_subscript_name_62;
        PyObject *tmp_tuple_element_16;
        PyObject *tmp_expression_name_63;
        PyObject *tmp_subscript_name_63;
        tmp_dict_key_16 = mod_consts[95];
        tmp_expression_name_61 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_name_61 == NULL)) {
            tmp_expression_name_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_name_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1571;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_62 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_expression_name_62 == NULL)) {
            tmp_expression_name_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        if (tmp_expression_name_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1571;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_63 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_name_63 == NULL)) {
            tmp_expression_name_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_name_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1571;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_63 = mod_consts[96];
        tmp_tuple_element_16 = LOOKUP_SUBSCRIPT(tmp_expression_name_63, tmp_subscript_name_63);
        if (tmp_tuple_element_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1571;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_62 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_64;
            PyObject *tmp_subscript_name_64;
            PyTuple_SET_ITEM(tmp_subscript_name_62, 0, tmp_tuple_element_16);
            tmp_expression_name_64 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

            if (unlikely(tmp_expression_name_64 == NULL)) {
                tmp_expression_name_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
            }

            if (tmp_expression_name_64 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1571;

                goto tuple_build_exception_16;
            }
            tmp_subscript_name_64 = mod_consts[97];
            tmp_tuple_element_16 = LOOKUP_SUBSCRIPT(tmp_expression_name_64, tmp_subscript_name_64);
            if (tmp_tuple_element_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1571;

                goto tuple_build_exception_16;
            }
            PyTuple_SET_ITEM(tmp_subscript_name_62, 1, tmp_tuple_element_16);
        }
        goto tuple_build_noexception_16;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_16:;
        Py_DECREF(tmp_subscript_name_62);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_16:;
        tmp_subscript_name_61 = LOOKUP_SUBSCRIPT(tmp_expression_name_62, tmp_subscript_name_62);
        Py_DECREF(tmp_subscript_name_62);
        if (tmp_subscript_name_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1571;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_16 = LOOKUP_SUBSCRIPT(tmp_expression_name_61, tmp_subscript_name_61);
        Py_DECREF(tmp_subscript_name_61);
        if (tmp_dict_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1571;

            goto frame_exception_exit_1;
        }
        tmp_annotations_16 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_16, tmp_dict_key_16, tmp_dict_value_16);
        Py_DECREF(tmp_dict_value_16);
        assert(!(tmp_res != 0));


        tmp_assign_source_24 = MAKE_FUNCTION_idna$uts46data$$$function__16__seg_15(tmp_annotations_16);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[113], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_annotations_17;
        PyObject *tmp_dict_key_17;
        PyObject *tmp_dict_value_17;
        PyObject *tmp_expression_name_65;
        PyObject *tmp_subscript_name_65;
        PyObject *tmp_expression_name_66;
        PyObject *tmp_subscript_name_66;
        PyObject *tmp_tuple_element_17;
        PyObject *tmp_expression_name_67;
        PyObject *tmp_subscript_name_67;
        tmp_dict_key_17 = mod_consts[95];
        tmp_expression_name_65 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_name_65 == NULL)) {
            tmp_expression_name_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_name_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1675;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_66 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_expression_name_66 == NULL)) {
            tmp_expression_name_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        if (tmp_expression_name_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1675;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_67 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_name_67 == NULL)) {
            tmp_expression_name_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_name_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1675;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_67 = mod_consts[96];
        tmp_tuple_element_17 = LOOKUP_SUBSCRIPT(tmp_expression_name_67, tmp_subscript_name_67);
        if (tmp_tuple_element_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1675;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_66 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_68;
            PyObject *tmp_subscript_name_68;
            PyTuple_SET_ITEM(tmp_subscript_name_66, 0, tmp_tuple_element_17);
            tmp_expression_name_68 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

            if (unlikely(tmp_expression_name_68 == NULL)) {
                tmp_expression_name_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
            }

            if (tmp_expression_name_68 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1675;

                goto tuple_build_exception_17;
            }
            tmp_subscript_name_68 = mod_consts[97];
            tmp_tuple_element_17 = LOOKUP_SUBSCRIPT(tmp_expression_name_68, tmp_subscript_name_68);
            if (tmp_tuple_element_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1675;

                goto tuple_build_exception_17;
            }
            PyTuple_SET_ITEM(tmp_subscript_name_66, 1, tmp_tuple_element_17);
        }
        goto tuple_build_noexception_17;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_17:;
        Py_DECREF(tmp_subscript_name_66);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_17:;
        tmp_subscript_name_65 = LOOKUP_SUBSCRIPT(tmp_expression_name_66, tmp_subscript_name_66);
        Py_DECREF(tmp_subscript_name_66);
        if (tmp_subscript_name_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1675;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_17 = LOOKUP_SUBSCRIPT(tmp_expression_name_65, tmp_subscript_name_65);
        Py_DECREF(tmp_subscript_name_65);
        if (tmp_dict_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1675;

            goto frame_exception_exit_1;
        }
        tmp_annotations_17 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_17, tmp_dict_key_17, tmp_dict_value_17);
        Py_DECREF(tmp_dict_value_17);
        assert(!(tmp_res != 0));


        tmp_assign_source_25 = MAKE_FUNCTION_idna$uts46data$$$function__17__seg_16(tmp_annotations_17);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[114], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_annotations_18;
        PyObject *tmp_dict_key_18;
        PyObject *tmp_dict_value_18;
        PyObject *tmp_expression_name_69;
        PyObject *tmp_subscript_name_69;
        PyObject *tmp_expression_name_70;
        PyObject *tmp_subscript_name_70;
        PyObject *tmp_tuple_element_18;
        PyObject *tmp_expression_name_71;
        PyObject *tmp_subscript_name_71;
        tmp_dict_key_18 = mod_consts[95];
        tmp_expression_name_69 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_name_69 == NULL)) {
            tmp_expression_name_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_name_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1779;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_70 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_expression_name_70 == NULL)) {
            tmp_expression_name_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        if (tmp_expression_name_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1779;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_71 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_name_71 == NULL)) {
            tmp_expression_name_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_name_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1779;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_71 = mod_consts[96];
        tmp_tuple_element_18 = LOOKUP_SUBSCRIPT(tmp_expression_name_71, tmp_subscript_name_71);
        if (tmp_tuple_element_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1779;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_70 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_72;
            PyObject *tmp_subscript_name_72;
            PyTuple_SET_ITEM(tmp_subscript_name_70, 0, tmp_tuple_element_18);
            tmp_expression_name_72 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

            if (unlikely(tmp_expression_name_72 == NULL)) {
                tmp_expression_name_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
            }

            if (tmp_expression_name_72 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1779;

                goto tuple_build_exception_18;
            }
            tmp_subscript_name_72 = mod_consts[97];
            tmp_tuple_element_18 = LOOKUP_SUBSCRIPT(tmp_expression_name_72, tmp_subscript_name_72);
            if (tmp_tuple_element_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1779;

                goto tuple_build_exception_18;
            }
            PyTuple_SET_ITEM(tmp_subscript_name_70, 1, tmp_tuple_element_18);
        }
        goto tuple_build_noexception_18;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_18:;
        Py_DECREF(tmp_subscript_name_70);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_18:;
        tmp_subscript_name_69 = LOOKUP_SUBSCRIPT(tmp_expression_name_70, tmp_subscript_name_70);
        Py_DECREF(tmp_subscript_name_70);
        if (tmp_subscript_name_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1779;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_18 = LOOKUP_SUBSCRIPT(tmp_expression_name_69, tmp_subscript_name_69);
        Py_DECREF(tmp_subscript_name_69);
        if (tmp_dict_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1779;

            goto frame_exception_exit_1;
        }
        tmp_annotations_18 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_18, tmp_dict_key_18, tmp_dict_value_18);
        Py_DECREF(tmp_dict_value_18);
        assert(!(tmp_res != 0));


        tmp_assign_source_26 = MAKE_FUNCTION_idna$uts46data$$$function__18__seg_17(tmp_annotations_18);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[115], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_annotations_19;
        PyObject *tmp_dict_key_19;
        PyObject *tmp_dict_value_19;
        PyObject *tmp_expression_name_73;
        PyObject *tmp_subscript_name_73;
        PyObject *tmp_expression_name_74;
        PyObject *tmp_subscript_name_74;
        PyObject *tmp_tuple_element_19;
        PyObject *tmp_expression_name_75;
        PyObject *tmp_subscript_name_75;
        tmp_dict_key_19 = mod_consts[95];
        tmp_expression_name_73 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_name_73 == NULL)) {
            tmp_expression_name_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_name_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1883;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_74 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_expression_name_74 == NULL)) {
            tmp_expression_name_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        if (tmp_expression_name_74 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1883;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_75 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_name_75 == NULL)) {
            tmp_expression_name_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_name_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1883;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_75 = mod_consts[96];
        tmp_tuple_element_19 = LOOKUP_SUBSCRIPT(tmp_expression_name_75, tmp_subscript_name_75);
        if (tmp_tuple_element_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1883;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_74 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_76;
            PyObject *tmp_subscript_name_76;
            PyTuple_SET_ITEM(tmp_subscript_name_74, 0, tmp_tuple_element_19);
            tmp_expression_name_76 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

            if (unlikely(tmp_expression_name_76 == NULL)) {
                tmp_expression_name_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
            }

            if (tmp_expression_name_76 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1883;

                goto tuple_build_exception_19;
            }
            tmp_subscript_name_76 = mod_consts[97];
            tmp_tuple_element_19 = LOOKUP_SUBSCRIPT(tmp_expression_name_76, tmp_subscript_name_76);
            if (tmp_tuple_element_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1883;

                goto tuple_build_exception_19;
            }
            PyTuple_SET_ITEM(tmp_subscript_name_74, 1, tmp_tuple_element_19);
        }
        goto tuple_build_noexception_19;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_19:;
        Py_DECREF(tmp_subscript_name_74);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_19:;
        tmp_subscript_name_73 = LOOKUP_SUBSCRIPT(tmp_expression_name_74, tmp_subscript_name_74);
        Py_DECREF(tmp_subscript_name_74);
        if (tmp_subscript_name_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1883;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_19 = LOOKUP_SUBSCRIPT(tmp_expression_name_73, tmp_subscript_name_73);
        Py_DECREF(tmp_subscript_name_73);
        if (tmp_dict_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1883;

            goto frame_exception_exit_1;
        }
        tmp_annotations_19 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_19, tmp_dict_key_19, tmp_dict_value_19);
        Py_DECREF(tmp_dict_value_19);
        assert(!(tmp_res != 0));


        tmp_assign_source_27 = MAKE_FUNCTION_idna$uts46data$$$function__19__seg_18(tmp_annotations_19);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[116], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_annotations_20;
        PyObject *tmp_dict_key_20;
        PyObject *tmp_dict_value_20;
        PyObject *tmp_expression_name_77;
        PyObject *tmp_subscript_name_77;
        PyObject *tmp_expression_name_78;
        PyObject *tmp_subscript_name_78;
        PyObject *tmp_tuple_element_20;
        PyObject *tmp_expression_name_79;
        PyObject *tmp_subscript_name_79;
        tmp_dict_key_20 = mod_consts[95];
        tmp_expression_name_77 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_name_77 == NULL)) {
            tmp_expression_name_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_name_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1987;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_78 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_expression_name_78 == NULL)) {
            tmp_expression_name_78 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        if (tmp_expression_name_78 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1987;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_79 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_name_79 == NULL)) {
            tmp_expression_name_79 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_name_79 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1987;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_79 = mod_consts[96];
        tmp_tuple_element_20 = LOOKUP_SUBSCRIPT(tmp_expression_name_79, tmp_subscript_name_79);
        if (tmp_tuple_element_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1987;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_78 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_80;
            PyObject *tmp_subscript_name_80;
            PyTuple_SET_ITEM(tmp_subscript_name_78, 0, tmp_tuple_element_20);
            tmp_expression_name_80 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

            if (unlikely(tmp_expression_name_80 == NULL)) {
                tmp_expression_name_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
            }

            if (tmp_expression_name_80 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1987;

                goto tuple_build_exception_20;
            }
            tmp_subscript_name_80 = mod_consts[97];
            tmp_tuple_element_20 = LOOKUP_SUBSCRIPT(tmp_expression_name_80, tmp_subscript_name_80);
            if (tmp_tuple_element_20 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1987;

                goto tuple_build_exception_20;
            }
            PyTuple_SET_ITEM(tmp_subscript_name_78, 1, tmp_tuple_element_20);
        }
        goto tuple_build_noexception_20;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_20:;
        Py_DECREF(tmp_subscript_name_78);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_20:;
        tmp_subscript_name_77 = LOOKUP_SUBSCRIPT(tmp_expression_name_78, tmp_subscript_name_78);
        Py_DECREF(tmp_subscript_name_78);
        if (tmp_subscript_name_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1987;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_20 = LOOKUP_SUBSCRIPT(tmp_expression_name_77, tmp_subscript_name_77);
        Py_DECREF(tmp_subscript_name_77);
        if (tmp_dict_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1987;

            goto frame_exception_exit_1;
        }
        tmp_annotations_20 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_20, tmp_dict_key_20, tmp_dict_value_20);
        Py_DECREF(tmp_dict_value_20);
        assert(!(tmp_res != 0));


        tmp_assign_source_28 = MAKE_FUNCTION_idna$uts46data$$$function__20__seg_19(tmp_annotations_20);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[117], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_annotations_21;
        PyObject *tmp_dict_key_21;
        PyObject *tmp_dict_value_21;
        PyObject *tmp_expression_name_81;
        PyObject *tmp_subscript_name_81;
        PyObject *tmp_expression_name_82;
        PyObject *tmp_subscript_name_82;
        PyObject *tmp_tuple_element_21;
        PyObject *tmp_expression_name_83;
        PyObject *tmp_subscript_name_83;
        tmp_dict_key_21 = mod_consts[95];
        tmp_expression_name_81 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_name_81 == NULL)) {
            tmp_expression_name_81 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_name_81 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2091;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_82 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_expression_name_82 == NULL)) {
            tmp_expression_name_82 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        if (tmp_expression_name_82 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2091;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_83 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_name_83 == NULL)) {
            tmp_expression_name_83 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_name_83 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2091;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_83 = mod_consts[96];
        tmp_tuple_element_21 = LOOKUP_SUBSCRIPT(tmp_expression_name_83, tmp_subscript_name_83);
        if (tmp_tuple_element_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2091;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_82 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_84;
            PyObject *tmp_subscript_name_84;
            PyTuple_SET_ITEM(tmp_subscript_name_82, 0, tmp_tuple_element_21);
            tmp_expression_name_84 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

            if (unlikely(tmp_expression_name_84 == NULL)) {
                tmp_expression_name_84 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
            }

            if (tmp_expression_name_84 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 2091;

                goto tuple_build_exception_21;
            }
            tmp_subscript_name_84 = mod_consts[97];
            tmp_tuple_element_21 = LOOKUP_SUBSCRIPT(tmp_expression_name_84, tmp_subscript_name_84);
            if (tmp_tuple_element_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 2091;

                goto tuple_build_exception_21;
            }
            PyTuple_SET_ITEM(tmp_subscript_name_82, 1, tmp_tuple_element_21);
        }
        goto tuple_build_noexception_21;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_21:;
        Py_DECREF(tmp_subscript_name_82);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_21:;
        tmp_subscript_name_81 = LOOKUP_SUBSCRIPT(tmp_expression_name_82, tmp_subscript_name_82);
        Py_DECREF(tmp_subscript_name_82);
        if (tmp_subscript_name_81 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2091;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_21 = LOOKUP_SUBSCRIPT(tmp_expression_name_81, tmp_subscript_name_81);
        Py_DECREF(tmp_subscript_name_81);
        if (tmp_dict_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2091;

            goto frame_exception_exit_1;
        }
        tmp_annotations_21 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_21, tmp_dict_key_21, tmp_dict_value_21);
        Py_DECREF(tmp_dict_value_21);
        assert(!(tmp_res != 0));


        tmp_assign_source_29 = MAKE_FUNCTION_idna$uts46data$$$function__21__seg_20(tmp_annotations_21);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[118], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_annotations_22;
        PyObject *tmp_dict_key_22;
        PyObject *tmp_dict_value_22;
        PyObject *tmp_expression_name_85;
        PyObject *tmp_subscript_name_85;
        PyObject *tmp_expression_name_86;
        PyObject *tmp_subscript_name_86;
        PyObject *tmp_tuple_element_22;
        PyObject *tmp_expression_name_87;
        PyObject *tmp_subscript_name_87;
        tmp_dict_key_22 = mod_consts[95];
        tmp_expression_name_85 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_name_85 == NULL)) {
            tmp_expression_name_85 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_name_85 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2195;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_86 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_expression_name_86 == NULL)) {
            tmp_expression_name_86 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        if (tmp_expression_name_86 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2195;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_87 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_name_87 == NULL)) {
            tmp_expression_name_87 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_name_87 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2195;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_87 = mod_consts[96];
        tmp_tuple_element_22 = LOOKUP_SUBSCRIPT(tmp_expression_name_87, tmp_subscript_name_87);
        if (tmp_tuple_element_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2195;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_86 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_88;
            PyObject *tmp_subscript_name_88;
            PyTuple_SET_ITEM(tmp_subscript_name_86, 0, tmp_tuple_element_22);
            tmp_expression_name_88 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

            if (unlikely(tmp_expression_name_88 == NULL)) {
                tmp_expression_name_88 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
            }

            if (tmp_expression_name_88 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 2195;

                goto tuple_build_exception_22;
            }
            tmp_subscript_name_88 = mod_consts[97];
            tmp_tuple_element_22 = LOOKUP_SUBSCRIPT(tmp_expression_name_88, tmp_subscript_name_88);
            if (tmp_tuple_element_22 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 2195;

                goto tuple_build_exception_22;
            }
            PyTuple_SET_ITEM(tmp_subscript_name_86, 1, tmp_tuple_element_22);
        }
        goto tuple_build_noexception_22;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_22:;
        Py_DECREF(tmp_subscript_name_86);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_22:;
        tmp_subscript_name_85 = LOOKUP_SUBSCRIPT(tmp_expression_name_86, tmp_subscript_name_86);
        Py_DECREF(tmp_subscript_name_86);
        if (tmp_subscript_name_85 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2195;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_22 = LOOKUP_SUBSCRIPT(tmp_expression_name_85, tmp_subscript_name_85);
        Py_DECREF(tmp_subscript_name_85);
        if (tmp_dict_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2195;

            goto frame_exception_exit_1;
        }
        tmp_annotations_22 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_22, tmp_dict_key_22, tmp_dict_value_22);
        Py_DECREF(tmp_dict_value_22);
        assert(!(tmp_res != 0));


        tmp_assign_source_30 = MAKE_FUNCTION_idna$uts46data$$$function__22__seg_21(tmp_annotations_22);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[119], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_annotations_23;
        PyObject *tmp_dict_key_23;
        PyObject *tmp_dict_value_23;
        PyObject *tmp_expression_name_89;
        PyObject *tmp_subscript_name_89;
        PyObject *tmp_expression_name_90;
        PyObject *tmp_subscript_name_90;
        PyObject *tmp_tuple_element_23;
        PyObject *tmp_expression_name_91;
        PyObject *tmp_subscript_name_91;
        tmp_dict_key_23 = mod_consts[95];
        tmp_expression_name_89 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_name_89 == NULL)) {
            tmp_expression_name_89 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_name_89 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2299;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_90 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_expression_name_90 == NULL)) {
            tmp_expression_name_90 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        if (tmp_expression_name_90 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2299;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_91 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_name_91 == NULL)) {
            tmp_expression_name_91 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_name_91 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2299;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_91 = mod_consts[96];
        tmp_tuple_element_23 = LOOKUP_SUBSCRIPT(tmp_expression_name_91, tmp_subscript_name_91);
        if (tmp_tuple_element_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2299;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_90 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_92;
            PyObject *tmp_subscript_name_92;
            PyTuple_SET_ITEM(tmp_subscript_name_90, 0, tmp_tuple_element_23);
            tmp_expression_name_92 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

            if (unlikely(tmp_expression_name_92 == NULL)) {
                tmp_expression_name_92 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
            }

            if (tmp_expression_name_92 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 2299;

                goto tuple_build_exception_23;
            }
            tmp_subscript_name_92 = mod_consts[97];
            tmp_tuple_element_23 = LOOKUP_SUBSCRIPT(tmp_expression_name_92, tmp_subscript_name_92);
            if (tmp_tuple_element_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 2299;

                goto tuple_build_exception_23;
            }
            PyTuple_SET_ITEM(tmp_subscript_name_90, 1, tmp_tuple_element_23);
        }
        goto tuple_build_noexception_23;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_23:;
        Py_DECREF(tmp_subscript_name_90);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_23:;
        tmp_subscript_name_89 = LOOKUP_SUBSCRIPT(tmp_expression_name_90, tmp_subscript_name_90);
        Py_DECREF(tmp_subscript_name_90);
        if (tmp_subscript_name_89 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2299;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_23 = LOOKUP_SUBSCRIPT(tmp_expression_name_89, tmp_subscript_name_89);
        Py_DECREF(tmp_subscript_name_89);
        if (tmp_dict_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2299;

            goto frame_exception_exit_1;
        }
        tmp_annotations_23 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_23, tmp_dict_key_23, tmp_dict_value_23);
        Py_DECREF(tmp_dict_value_23);
        assert(!(tmp_res != 0));


        tmp_assign_source_31 = MAKE_FUNCTION_idna$uts46data$$$function__23__seg_22(tmp_annotations_23);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[120], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_annotations_24;
        PyObject *tmp_dict_key_24;
        PyObject *tmp_dict_value_24;
        PyObject *tmp_expression_name_93;
        PyObject *tmp_subscript_name_93;
        PyObject *tmp_expression_name_94;
        PyObject *tmp_subscript_name_94;
        PyObject *tmp_tuple_element_24;
        PyObject *tmp_expression_name_95;
        PyObject *tmp_subscript_name_95;
        tmp_dict_key_24 = mod_consts[95];
        tmp_expression_name_93 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_name_93 == NULL)) {
            tmp_expression_name_93 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_name_93 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2403;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_94 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_expression_name_94 == NULL)) {
            tmp_expression_name_94 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        if (tmp_expression_name_94 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2403;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_95 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_name_95 == NULL)) {
            tmp_expression_name_95 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_name_95 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2403;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_95 = mod_consts[96];
        tmp_tuple_element_24 = LOOKUP_SUBSCRIPT(tmp_expression_name_95, tmp_subscript_name_95);
        if (tmp_tuple_element_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2403;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_94 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_96;
            PyObject *tmp_subscript_name_96;
            PyTuple_SET_ITEM(tmp_subscript_name_94, 0, tmp_tuple_element_24);
            tmp_expression_name_96 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

            if (unlikely(tmp_expression_name_96 == NULL)) {
                tmp_expression_name_96 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
            }

            if (tmp_expression_name_96 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 2403;

                goto tuple_build_exception_24;
            }
            tmp_subscript_name_96 = mod_consts[97];
            tmp_tuple_element_24 = LOOKUP_SUBSCRIPT(tmp_expression_name_96, tmp_subscript_name_96);
            if (tmp_tuple_element_24 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 2403;

                goto tuple_build_exception_24;
            }
            PyTuple_SET_ITEM(tmp_subscript_name_94, 1, tmp_tuple_element_24);
        }
        goto tuple_build_noexception_24;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_24:;
        Py_DECREF(tmp_subscript_name_94);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_24:;
        tmp_subscript_name_93 = LOOKUP_SUBSCRIPT(tmp_expression_name_94, tmp_subscript_name_94);
        Py_DECREF(tmp_subscript_name_94);
        if (tmp_subscript_name_93 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2403;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_24 = LOOKUP_SUBSCRIPT(tmp_expression_name_93, tmp_subscript_name_93);
        Py_DECREF(tmp_subscript_name_93);
        if (tmp_dict_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2403;

            goto frame_exception_exit_1;
        }
        tmp_annotations_24 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_24, tmp_dict_key_24, tmp_dict_value_24);
        Py_DECREF(tmp_dict_value_24);
        assert(!(tmp_res != 0));


        tmp_assign_source_32 = MAKE_FUNCTION_idna$uts46data$$$function__24__seg_23(tmp_annotations_24);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[121], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_annotations_25;
        PyObject *tmp_dict_key_25;
        PyObject *tmp_dict_value_25;
        PyObject *tmp_expression_name_97;
        PyObject *tmp_subscript_name_97;
        PyObject *tmp_expression_name_98;
        PyObject *tmp_subscript_name_98;
        PyObject *tmp_tuple_element_25;
        PyObject *tmp_expression_name_99;
        PyObject *tmp_subscript_name_99;
        tmp_dict_key_25 = mod_consts[95];
        tmp_expression_name_97 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_name_97 == NULL)) {
            tmp_expression_name_97 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_name_97 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2507;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_98 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_expression_name_98 == NULL)) {
            tmp_expression_name_98 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        if (tmp_expression_name_98 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2507;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_99 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_name_99 == NULL)) {
            tmp_expression_name_99 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_name_99 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2507;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_99 = mod_consts[96];
        tmp_tuple_element_25 = LOOKUP_SUBSCRIPT(tmp_expression_name_99, tmp_subscript_name_99);
        if (tmp_tuple_element_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2507;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_98 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_100;
            PyObject *tmp_subscript_name_100;
            PyTuple_SET_ITEM(tmp_subscript_name_98, 0, tmp_tuple_element_25);
            tmp_expression_name_100 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

            if (unlikely(tmp_expression_name_100 == NULL)) {
                tmp_expression_name_100 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
            }

            if (tmp_expression_name_100 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 2507;

                goto tuple_build_exception_25;
            }
            tmp_subscript_name_100 = mod_consts[97];
            tmp_tuple_element_25 = LOOKUP_SUBSCRIPT(tmp_expression_name_100, tmp_subscript_name_100);
            if (tmp_tuple_element_25 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 2507;

                goto tuple_build_exception_25;
            }
            PyTuple_SET_ITEM(tmp_subscript_name_98, 1, tmp_tuple_element_25);
        }
        goto tuple_build_noexception_25;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_25:;
        Py_DECREF(tmp_subscript_name_98);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_25:;
        tmp_subscript_name_97 = LOOKUP_SUBSCRIPT(tmp_expression_name_98, tmp_subscript_name_98);
        Py_DECREF(tmp_subscript_name_98);
        if (tmp_subscript_name_97 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2507;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_25 = LOOKUP_SUBSCRIPT(tmp_expression_name_97, tmp_subscript_name_97);
        Py_DECREF(tmp_subscript_name_97);
        if (tmp_dict_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2507;

            goto frame_exception_exit_1;
        }
        tmp_annotations_25 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_25, tmp_dict_key_25, tmp_dict_value_25);
        Py_DECREF(tmp_dict_value_25);
        assert(!(tmp_res != 0));


        tmp_assign_source_33 = MAKE_FUNCTION_idna$uts46data$$$function__25__seg_24(tmp_annotations_25);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[122], tmp_assign_source_33);
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_annotations_26;
        PyObject *tmp_dict_key_26;
        PyObject *tmp_dict_value_26;
        PyObject *tmp_expression_name_101;
        PyObject *tmp_subscript_name_101;
        PyObject *tmp_expression_name_102;
        PyObject *tmp_subscript_name_102;
        PyObject *tmp_tuple_element_26;
        PyObject *tmp_expression_name_103;
        PyObject *tmp_subscript_name_103;
        tmp_dict_key_26 = mod_consts[95];
        tmp_expression_name_101 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_name_101 == NULL)) {
            tmp_expression_name_101 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_name_101 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2611;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_102 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_expression_name_102 == NULL)) {
            tmp_expression_name_102 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        if (tmp_expression_name_102 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2611;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_103 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_name_103 == NULL)) {
            tmp_expression_name_103 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_name_103 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2611;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_103 = mod_consts[96];
        tmp_tuple_element_26 = LOOKUP_SUBSCRIPT(tmp_expression_name_103, tmp_subscript_name_103);
        if (tmp_tuple_element_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2611;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_102 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_104;
            PyObject *tmp_subscript_name_104;
            PyTuple_SET_ITEM(tmp_subscript_name_102, 0, tmp_tuple_element_26);
            tmp_expression_name_104 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

            if (unlikely(tmp_expression_name_104 == NULL)) {
                tmp_expression_name_104 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
            }

            if (tmp_expression_name_104 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 2611;

                goto tuple_build_exception_26;
            }
            tmp_subscript_name_104 = mod_consts[97];
            tmp_tuple_element_26 = LOOKUP_SUBSCRIPT(tmp_expression_name_104, tmp_subscript_name_104);
            if (tmp_tuple_element_26 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 2611;

                goto tuple_build_exception_26;
            }
            PyTuple_SET_ITEM(tmp_subscript_name_102, 1, tmp_tuple_element_26);
        }
        goto tuple_build_noexception_26;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_26:;
        Py_DECREF(tmp_subscript_name_102);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_26:;
        tmp_subscript_name_101 = LOOKUP_SUBSCRIPT(tmp_expression_name_102, tmp_subscript_name_102);
        Py_DECREF(tmp_subscript_name_102);
        if (tmp_subscript_name_101 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2611;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_26 = LOOKUP_SUBSCRIPT(tmp_expression_name_101, tmp_subscript_name_101);
        Py_DECREF(tmp_subscript_name_101);
        if (tmp_dict_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2611;

            goto frame_exception_exit_1;
        }
        tmp_annotations_26 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_26, tmp_dict_key_26, tmp_dict_value_26);
        Py_DECREF(tmp_dict_value_26);
        assert(!(tmp_res != 0));


        tmp_assign_source_34 = MAKE_FUNCTION_idna$uts46data$$$function__26__seg_25(tmp_annotations_26);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[123], tmp_assign_source_34);
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_annotations_27;
        PyObject *tmp_dict_key_27;
        PyObject *tmp_dict_value_27;
        PyObject *tmp_expression_name_105;
        PyObject *tmp_subscript_name_105;
        PyObject *tmp_expression_name_106;
        PyObject *tmp_subscript_name_106;
        PyObject *tmp_tuple_element_27;
        PyObject *tmp_expression_name_107;
        PyObject *tmp_subscript_name_107;
        tmp_dict_key_27 = mod_consts[95];
        tmp_expression_name_105 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_name_105 == NULL)) {
            tmp_expression_name_105 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_name_105 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2715;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_106 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_expression_name_106 == NULL)) {
            tmp_expression_name_106 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        if (tmp_expression_name_106 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2715;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_107 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_name_107 == NULL)) {
            tmp_expression_name_107 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_name_107 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2715;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_107 = mod_consts[96];
        tmp_tuple_element_27 = LOOKUP_SUBSCRIPT(tmp_expression_name_107, tmp_subscript_name_107);
        if (tmp_tuple_element_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2715;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_106 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_108;
            PyObject *tmp_subscript_name_108;
            PyTuple_SET_ITEM(tmp_subscript_name_106, 0, tmp_tuple_element_27);
            tmp_expression_name_108 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

            if (unlikely(tmp_expression_name_108 == NULL)) {
                tmp_expression_name_108 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
            }

            if (tmp_expression_name_108 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 2715;

                goto tuple_build_exception_27;
            }
            tmp_subscript_name_108 = mod_consts[97];
            tmp_tuple_element_27 = LOOKUP_SUBSCRIPT(tmp_expression_name_108, tmp_subscript_name_108);
            if (tmp_tuple_element_27 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 2715;

                goto tuple_build_exception_27;
            }
            PyTuple_SET_ITEM(tmp_subscript_name_106, 1, tmp_tuple_element_27);
        }
        goto tuple_build_noexception_27;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_27:;
        Py_DECREF(tmp_subscript_name_106);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_27:;
        tmp_subscript_name_105 = LOOKUP_SUBSCRIPT(tmp_expression_name_106, tmp_subscript_name_106);
        Py_DECREF(tmp_subscript_name_106);
        if (tmp_subscript_name_105 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2715;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_27 = LOOKUP_SUBSCRIPT(tmp_expression_name_105, tmp_subscript_name_105);
        Py_DECREF(tmp_subscript_name_105);
        if (tmp_dict_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2715;

            goto frame_exception_exit_1;
        }
        tmp_annotations_27 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_27, tmp_dict_key_27, tmp_dict_value_27);
        Py_DECREF(tmp_dict_value_27);
        assert(!(tmp_res != 0));


        tmp_assign_source_35 = MAKE_FUNCTION_idna$uts46data$$$function__27__seg_26(tmp_annotations_27);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[124], tmp_assign_source_35);
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_annotations_28;
        PyObject *tmp_dict_key_28;
        PyObject *tmp_dict_value_28;
        PyObject *tmp_expression_name_109;
        PyObject *tmp_subscript_name_109;
        PyObject *tmp_expression_name_110;
        PyObject *tmp_subscript_name_110;
        PyObject *tmp_tuple_element_28;
        PyObject *tmp_expression_name_111;
        PyObject *tmp_subscript_name_111;
        tmp_dict_key_28 = mod_consts[95];
        tmp_expression_name_109 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_name_109 == NULL)) {
            tmp_expression_name_109 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_name_109 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2819;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_110 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_expression_name_110 == NULL)) {
            tmp_expression_name_110 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        if (tmp_expression_name_110 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2819;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_111 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_name_111 == NULL)) {
            tmp_expression_name_111 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_name_111 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2819;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_111 = mod_consts[96];
        tmp_tuple_element_28 = LOOKUP_SUBSCRIPT(tmp_expression_name_111, tmp_subscript_name_111);
        if (tmp_tuple_element_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2819;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_110 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_112;
            PyObject *tmp_subscript_name_112;
            PyTuple_SET_ITEM(tmp_subscript_name_110, 0, tmp_tuple_element_28);
            tmp_expression_name_112 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

            if (unlikely(tmp_expression_name_112 == NULL)) {
                tmp_expression_name_112 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
            }

            if (tmp_expression_name_112 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 2819;

                goto tuple_build_exception_28;
            }
            tmp_subscript_name_112 = mod_consts[97];
            tmp_tuple_element_28 = LOOKUP_SUBSCRIPT(tmp_expression_name_112, tmp_subscript_name_112);
            if (tmp_tuple_element_28 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 2819;

                goto tuple_build_exception_28;
            }
            PyTuple_SET_ITEM(tmp_subscript_name_110, 1, tmp_tuple_element_28);
        }
        goto tuple_build_noexception_28;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_28:;
        Py_DECREF(tmp_subscript_name_110);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_28:;
        tmp_subscript_name_109 = LOOKUP_SUBSCRIPT(tmp_expression_name_110, tmp_subscript_name_110);
        Py_DECREF(tmp_subscript_name_110);
        if (tmp_subscript_name_109 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2819;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_28 = LOOKUP_SUBSCRIPT(tmp_expression_name_109, tmp_subscript_name_109);
        Py_DECREF(tmp_subscript_name_109);
        if (tmp_dict_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2819;

            goto frame_exception_exit_1;
        }
        tmp_annotations_28 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_28, tmp_dict_key_28, tmp_dict_value_28);
        Py_DECREF(tmp_dict_value_28);
        assert(!(tmp_res != 0));


        tmp_assign_source_36 = MAKE_FUNCTION_idna$uts46data$$$function__28__seg_27(tmp_annotations_28);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[125], tmp_assign_source_36);
    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_annotations_29;
        PyObject *tmp_dict_key_29;
        PyObject *tmp_dict_value_29;
        PyObject *tmp_expression_name_113;
        PyObject *tmp_subscript_name_113;
        PyObject *tmp_expression_name_114;
        PyObject *tmp_subscript_name_114;
        PyObject *tmp_tuple_element_29;
        PyObject *tmp_expression_name_115;
        PyObject *tmp_subscript_name_115;
        tmp_dict_key_29 = mod_consts[95];
        tmp_expression_name_113 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_name_113 == NULL)) {
            tmp_expression_name_113 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_name_113 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2923;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_114 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_expression_name_114 == NULL)) {
            tmp_expression_name_114 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        if (tmp_expression_name_114 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2923;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_115 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_name_115 == NULL)) {
            tmp_expression_name_115 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_name_115 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2923;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_115 = mod_consts[96];
        tmp_tuple_element_29 = LOOKUP_SUBSCRIPT(tmp_expression_name_115, tmp_subscript_name_115);
        if (tmp_tuple_element_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2923;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_114 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_116;
            PyObject *tmp_subscript_name_116;
            PyTuple_SET_ITEM(tmp_subscript_name_114, 0, tmp_tuple_element_29);
            tmp_expression_name_116 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

            if (unlikely(tmp_expression_name_116 == NULL)) {
                tmp_expression_name_116 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
            }

            if (tmp_expression_name_116 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 2923;

                goto tuple_build_exception_29;
            }
            tmp_subscript_name_116 = mod_consts[97];
            tmp_tuple_element_29 = LOOKUP_SUBSCRIPT(tmp_expression_name_116, tmp_subscript_name_116);
            if (tmp_tuple_element_29 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 2923;

                goto tuple_build_exception_29;
            }
            PyTuple_SET_ITEM(tmp_subscript_name_114, 1, tmp_tuple_element_29);
        }
        goto tuple_build_noexception_29;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_29:;
        Py_DECREF(tmp_subscript_name_114);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_29:;
        tmp_subscript_name_113 = LOOKUP_SUBSCRIPT(tmp_expression_name_114, tmp_subscript_name_114);
        Py_DECREF(tmp_subscript_name_114);
        if (tmp_subscript_name_113 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2923;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_29 = LOOKUP_SUBSCRIPT(tmp_expression_name_113, tmp_subscript_name_113);
        Py_DECREF(tmp_subscript_name_113);
        if (tmp_dict_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2923;

            goto frame_exception_exit_1;
        }
        tmp_annotations_29 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_29, tmp_dict_key_29, tmp_dict_value_29);
        Py_DECREF(tmp_dict_value_29);
        assert(!(tmp_res != 0));


        tmp_assign_source_37 = MAKE_FUNCTION_idna$uts46data$$$function__29__seg_28(tmp_annotations_29);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[126], tmp_assign_source_37);
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_annotations_30;
        PyObject *tmp_dict_key_30;
        PyObject *tmp_dict_value_30;
        PyObject *tmp_expression_name_117;
        PyObject *tmp_subscript_name_117;
        PyObject *tmp_expression_name_118;
        PyObject *tmp_subscript_name_118;
        PyObject *tmp_tuple_element_30;
        PyObject *tmp_expression_name_119;
        PyObject *tmp_subscript_name_119;
        tmp_dict_key_30 = mod_consts[95];
        tmp_expression_name_117 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_name_117 == NULL)) {
            tmp_expression_name_117 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_name_117 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3027;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_118 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_expression_name_118 == NULL)) {
            tmp_expression_name_118 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        if (tmp_expression_name_118 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3027;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_119 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_name_119 == NULL)) {
            tmp_expression_name_119 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_name_119 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3027;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_119 = mod_consts[96];
        tmp_tuple_element_30 = LOOKUP_SUBSCRIPT(tmp_expression_name_119, tmp_subscript_name_119);
        if (tmp_tuple_element_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3027;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_118 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_120;
            PyObject *tmp_subscript_name_120;
            PyTuple_SET_ITEM(tmp_subscript_name_118, 0, tmp_tuple_element_30);
            tmp_expression_name_120 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

            if (unlikely(tmp_expression_name_120 == NULL)) {
                tmp_expression_name_120 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
            }

            if (tmp_expression_name_120 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 3027;

                goto tuple_build_exception_30;
            }
            tmp_subscript_name_120 = mod_consts[97];
            tmp_tuple_element_30 = LOOKUP_SUBSCRIPT(tmp_expression_name_120, tmp_subscript_name_120);
            if (tmp_tuple_element_30 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 3027;

                goto tuple_build_exception_30;
            }
            PyTuple_SET_ITEM(tmp_subscript_name_118, 1, tmp_tuple_element_30);
        }
        goto tuple_build_noexception_30;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_30:;
        Py_DECREF(tmp_subscript_name_118);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_30:;
        tmp_subscript_name_117 = LOOKUP_SUBSCRIPT(tmp_expression_name_118, tmp_subscript_name_118);
        Py_DECREF(tmp_subscript_name_118);
        if (tmp_subscript_name_117 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3027;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_30 = LOOKUP_SUBSCRIPT(tmp_expression_name_117, tmp_subscript_name_117);
        Py_DECREF(tmp_subscript_name_117);
        if (tmp_dict_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3027;

            goto frame_exception_exit_1;
        }
        tmp_annotations_30 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_30, tmp_dict_key_30, tmp_dict_value_30);
        Py_DECREF(tmp_dict_value_30);
        assert(!(tmp_res != 0));


        tmp_assign_source_38 = MAKE_FUNCTION_idna$uts46data$$$function__30__seg_29(tmp_annotations_30);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[127], tmp_assign_source_38);
    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_annotations_31;
        PyObject *tmp_dict_key_31;
        PyObject *tmp_dict_value_31;
        PyObject *tmp_expression_name_121;
        PyObject *tmp_subscript_name_121;
        PyObject *tmp_expression_name_122;
        PyObject *tmp_subscript_name_122;
        PyObject *tmp_tuple_element_31;
        PyObject *tmp_expression_name_123;
        PyObject *tmp_subscript_name_123;
        tmp_dict_key_31 = mod_consts[95];
        tmp_expression_name_121 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_name_121 == NULL)) {
            tmp_expression_name_121 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_name_121 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3131;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_122 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_expression_name_122 == NULL)) {
            tmp_expression_name_122 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        if (tmp_expression_name_122 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3131;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_123 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_name_123 == NULL)) {
            tmp_expression_name_123 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_name_123 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3131;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_123 = mod_consts[96];
        tmp_tuple_element_31 = LOOKUP_SUBSCRIPT(tmp_expression_name_123, tmp_subscript_name_123);
        if (tmp_tuple_element_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3131;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_122 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_124;
            PyObject *tmp_subscript_name_124;
            PyTuple_SET_ITEM(tmp_subscript_name_122, 0, tmp_tuple_element_31);
            tmp_expression_name_124 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

            if (unlikely(tmp_expression_name_124 == NULL)) {
                tmp_expression_name_124 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
            }

            if (tmp_expression_name_124 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 3131;

                goto tuple_build_exception_31;
            }
            tmp_subscript_name_124 = mod_consts[97];
            tmp_tuple_element_31 = LOOKUP_SUBSCRIPT(tmp_expression_name_124, tmp_subscript_name_124);
            if (tmp_tuple_element_31 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 3131;

                goto tuple_build_exception_31;
            }
            PyTuple_SET_ITEM(tmp_subscript_name_122, 1, tmp_tuple_element_31);
        }
        goto tuple_build_noexception_31;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_31:;
        Py_DECREF(tmp_subscript_name_122);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_31:;
        tmp_subscript_name_121 = LOOKUP_SUBSCRIPT(tmp_expression_name_122, tmp_subscript_name_122);
        Py_DECREF(tmp_subscript_name_122);
        if (tmp_subscript_name_121 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3131;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_31 = LOOKUP_SUBSCRIPT(tmp_expression_name_121, tmp_subscript_name_121);
        Py_DECREF(tmp_subscript_name_121);
        if (tmp_dict_value_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3131;

            goto frame_exception_exit_1;
        }
        tmp_annotations_31 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_31, tmp_dict_key_31, tmp_dict_value_31);
        Py_DECREF(tmp_dict_value_31);
        assert(!(tmp_res != 0));


        tmp_assign_source_39 = MAKE_FUNCTION_idna$uts46data$$$function__31__seg_30(tmp_annotations_31);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[128], tmp_assign_source_39);
    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_annotations_32;
        PyObject *tmp_dict_key_32;
        PyObject *tmp_dict_value_32;
        PyObject *tmp_expression_name_125;
        PyObject *tmp_subscript_name_125;
        PyObject *tmp_expression_name_126;
        PyObject *tmp_subscript_name_126;
        PyObject *tmp_tuple_element_32;
        PyObject *tmp_expression_name_127;
        PyObject *tmp_subscript_name_127;
        tmp_dict_key_32 = mod_consts[95];
        tmp_expression_name_125 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_name_125 == NULL)) {
            tmp_expression_name_125 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_name_125 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3235;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_126 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_expression_name_126 == NULL)) {
            tmp_expression_name_126 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        if (tmp_expression_name_126 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3235;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_127 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_name_127 == NULL)) {
            tmp_expression_name_127 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_name_127 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3235;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_127 = mod_consts[96];
        tmp_tuple_element_32 = LOOKUP_SUBSCRIPT(tmp_expression_name_127, tmp_subscript_name_127);
        if (tmp_tuple_element_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3235;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_126 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_128;
            PyObject *tmp_subscript_name_128;
            PyTuple_SET_ITEM(tmp_subscript_name_126, 0, tmp_tuple_element_32);
            tmp_expression_name_128 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

            if (unlikely(tmp_expression_name_128 == NULL)) {
                tmp_expression_name_128 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
            }

            if (tmp_expression_name_128 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 3235;

                goto tuple_build_exception_32;
            }
            tmp_subscript_name_128 = mod_consts[97];
            tmp_tuple_element_32 = LOOKUP_SUBSCRIPT(tmp_expression_name_128, tmp_subscript_name_128);
            if (tmp_tuple_element_32 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 3235;

                goto tuple_build_exception_32;
            }
            PyTuple_SET_ITEM(tmp_subscript_name_126, 1, tmp_tuple_element_32);
        }
        goto tuple_build_noexception_32;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_32:;
        Py_DECREF(tmp_subscript_name_126);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_32:;
        tmp_subscript_name_125 = LOOKUP_SUBSCRIPT(tmp_expression_name_126, tmp_subscript_name_126);
        Py_DECREF(tmp_subscript_name_126);
        if (tmp_subscript_name_125 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3235;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_32 = LOOKUP_SUBSCRIPT(tmp_expression_name_125, tmp_subscript_name_125);
        Py_DECREF(tmp_subscript_name_125);
        if (tmp_dict_value_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3235;

            goto frame_exception_exit_1;
        }
        tmp_annotations_32 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_32, tmp_dict_key_32, tmp_dict_value_32);
        Py_DECREF(tmp_dict_value_32);
        assert(!(tmp_res != 0));


        tmp_assign_source_40 = MAKE_FUNCTION_idna$uts46data$$$function__32__seg_31(tmp_annotations_32);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[129], tmp_assign_source_40);
    }
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_annotations_33;
        PyObject *tmp_dict_key_33;
        PyObject *tmp_dict_value_33;
        PyObject *tmp_expression_name_129;
        PyObject *tmp_subscript_name_129;
        PyObject *tmp_expression_name_130;
        PyObject *tmp_subscript_name_130;
        PyObject *tmp_tuple_element_33;
        PyObject *tmp_expression_name_131;
        PyObject *tmp_subscript_name_131;
        tmp_dict_key_33 = mod_consts[95];
        tmp_expression_name_129 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_name_129 == NULL)) {
            tmp_expression_name_129 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_name_129 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3339;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_130 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_expression_name_130 == NULL)) {
            tmp_expression_name_130 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        if (tmp_expression_name_130 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3339;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_131 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_name_131 == NULL)) {
            tmp_expression_name_131 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_name_131 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3339;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_131 = mod_consts[96];
        tmp_tuple_element_33 = LOOKUP_SUBSCRIPT(tmp_expression_name_131, tmp_subscript_name_131);
        if (tmp_tuple_element_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3339;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_130 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_132;
            PyObject *tmp_subscript_name_132;
            PyTuple_SET_ITEM(tmp_subscript_name_130, 0, tmp_tuple_element_33);
            tmp_expression_name_132 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

            if (unlikely(tmp_expression_name_132 == NULL)) {
                tmp_expression_name_132 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
            }

            if (tmp_expression_name_132 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 3339;

                goto tuple_build_exception_33;
            }
            tmp_subscript_name_132 = mod_consts[97];
            tmp_tuple_element_33 = LOOKUP_SUBSCRIPT(tmp_expression_name_132, tmp_subscript_name_132);
            if (tmp_tuple_element_33 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 3339;

                goto tuple_build_exception_33;
            }
            PyTuple_SET_ITEM(tmp_subscript_name_130, 1, tmp_tuple_element_33);
        }
        goto tuple_build_noexception_33;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_33:;
        Py_DECREF(tmp_subscript_name_130);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_33:;
        tmp_subscript_name_129 = LOOKUP_SUBSCRIPT(tmp_expression_name_130, tmp_subscript_name_130);
        Py_DECREF(tmp_subscript_name_130);
        if (tmp_subscript_name_129 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3339;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_33 = LOOKUP_SUBSCRIPT(tmp_expression_name_129, tmp_subscript_name_129);
        Py_DECREF(tmp_subscript_name_129);
        if (tmp_dict_value_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3339;

            goto frame_exception_exit_1;
        }
        tmp_annotations_33 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_33, tmp_dict_key_33, tmp_dict_value_33);
        Py_DECREF(tmp_dict_value_33);
        assert(!(tmp_res != 0));


        tmp_assign_source_41 = MAKE_FUNCTION_idna$uts46data$$$function__33__seg_32(tmp_annotations_33);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[130], tmp_assign_source_41);
    }
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_annotations_34;
        PyObject *tmp_dict_key_34;
        PyObject *tmp_dict_value_34;
        PyObject *tmp_expression_name_133;
        PyObject *tmp_subscript_name_133;
        PyObject *tmp_expression_name_134;
        PyObject *tmp_subscript_name_134;
        PyObject *tmp_tuple_element_34;
        PyObject *tmp_expression_name_135;
        PyObject *tmp_subscript_name_135;
        tmp_dict_key_34 = mod_consts[95];
        tmp_expression_name_133 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_name_133 == NULL)) {
            tmp_expression_name_133 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_name_133 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3443;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_134 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_expression_name_134 == NULL)) {
            tmp_expression_name_134 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        if (tmp_expression_name_134 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3443;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_135 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_name_135 == NULL)) {
            tmp_expression_name_135 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_name_135 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3443;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_135 = mod_consts[96];
        tmp_tuple_element_34 = LOOKUP_SUBSCRIPT(tmp_expression_name_135, tmp_subscript_name_135);
        if (tmp_tuple_element_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3443;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_134 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_136;
            PyObject *tmp_subscript_name_136;
            PyTuple_SET_ITEM(tmp_subscript_name_134, 0, tmp_tuple_element_34);
            tmp_expression_name_136 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

            if (unlikely(tmp_expression_name_136 == NULL)) {
                tmp_expression_name_136 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
            }

            if (tmp_expression_name_136 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 3443;

                goto tuple_build_exception_34;
            }
            tmp_subscript_name_136 = mod_consts[97];
            tmp_tuple_element_34 = LOOKUP_SUBSCRIPT(tmp_expression_name_136, tmp_subscript_name_136);
            if (tmp_tuple_element_34 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 3443;

                goto tuple_build_exception_34;
            }
            PyTuple_SET_ITEM(tmp_subscript_name_134, 1, tmp_tuple_element_34);
        }
        goto tuple_build_noexception_34;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_34:;
        Py_DECREF(tmp_subscript_name_134);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_34:;
        tmp_subscript_name_133 = LOOKUP_SUBSCRIPT(tmp_expression_name_134, tmp_subscript_name_134);
        Py_DECREF(tmp_subscript_name_134);
        if (tmp_subscript_name_133 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3443;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_34 = LOOKUP_SUBSCRIPT(tmp_expression_name_133, tmp_subscript_name_133);
        Py_DECREF(tmp_subscript_name_133);
        if (tmp_dict_value_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3443;

            goto frame_exception_exit_1;
        }
        tmp_annotations_34 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_34, tmp_dict_key_34, tmp_dict_value_34);
        Py_DECREF(tmp_dict_value_34);
        assert(!(tmp_res != 0));


        tmp_assign_source_42 = MAKE_FUNCTION_idna$uts46data$$$function__34__seg_33(tmp_annotations_34);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[131], tmp_assign_source_42);
    }
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_annotations_35;
        PyObject *tmp_dict_key_35;
        PyObject *tmp_dict_value_35;
        PyObject *tmp_expression_name_137;
        PyObject *tmp_subscript_name_137;
        PyObject *tmp_expression_name_138;
        PyObject *tmp_subscript_name_138;
        PyObject *tmp_tuple_element_35;
        PyObject *tmp_expression_name_139;
        PyObject *tmp_subscript_name_139;
        tmp_dict_key_35 = mod_consts[95];
        tmp_expression_name_137 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_name_137 == NULL)) {
            tmp_expression_name_137 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_name_137 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3547;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_138 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_expression_name_138 == NULL)) {
            tmp_expression_name_138 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        if (tmp_expression_name_138 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3547;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_139 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_name_139 == NULL)) {
            tmp_expression_name_139 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_name_139 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3547;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_139 = mod_consts[96];
        tmp_tuple_element_35 = LOOKUP_SUBSCRIPT(tmp_expression_name_139, tmp_subscript_name_139);
        if (tmp_tuple_element_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3547;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_138 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_140;
            PyObject *tmp_subscript_name_140;
            PyTuple_SET_ITEM(tmp_subscript_name_138, 0, tmp_tuple_element_35);
            tmp_expression_name_140 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

            if (unlikely(tmp_expression_name_140 == NULL)) {
                tmp_expression_name_140 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
            }

            if (tmp_expression_name_140 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 3547;

                goto tuple_build_exception_35;
            }
            tmp_subscript_name_140 = mod_consts[97];
            tmp_tuple_element_35 = LOOKUP_SUBSCRIPT(tmp_expression_name_140, tmp_subscript_name_140);
            if (tmp_tuple_element_35 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 3547;

                goto tuple_build_exception_35;
            }
            PyTuple_SET_ITEM(tmp_subscript_name_138, 1, tmp_tuple_element_35);
        }
        goto tuple_build_noexception_35;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_35:;
        Py_DECREF(tmp_subscript_name_138);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_35:;
        tmp_subscript_name_137 = LOOKUP_SUBSCRIPT(tmp_expression_name_138, tmp_subscript_name_138);
        Py_DECREF(tmp_subscript_name_138);
        if (tmp_subscript_name_137 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3547;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_35 = LOOKUP_SUBSCRIPT(tmp_expression_name_137, tmp_subscript_name_137);
        Py_DECREF(tmp_subscript_name_137);
        if (tmp_dict_value_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3547;

            goto frame_exception_exit_1;
        }
        tmp_annotations_35 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_35, tmp_dict_key_35, tmp_dict_value_35);
        Py_DECREF(tmp_dict_value_35);
        assert(!(tmp_res != 0));


        tmp_assign_source_43 = MAKE_FUNCTION_idna$uts46data$$$function__35__seg_34(tmp_annotations_35);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[132], tmp_assign_source_43);
    }
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_annotations_36;
        PyObject *tmp_dict_key_36;
        PyObject *tmp_dict_value_36;
        PyObject *tmp_expression_name_141;
        PyObject *tmp_subscript_name_141;
        PyObject *tmp_expression_name_142;
        PyObject *tmp_subscript_name_142;
        PyObject *tmp_tuple_element_36;
        PyObject *tmp_expression_name_143;
        PyObject *tmp_subscript_name_143;
        tmp_dict_key_36 = mod_consts[95];
        tmp_expression_name_141 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_name_141 == NULL)) {
            tmp_expression_name_141 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_name_141 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3651;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_142 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_expression_name_142 == NULL)) {
            tmp_expression_name_142 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        if (tmp_expression_name_142 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3651;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_143 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_name_143 == NULL)) {
            tmp_expression_name_143 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_name_143 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3651;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_143 = mod_consts[96];
        tmp_tuple_element_36 = LOOKUP_SUBSCRIPT(tmp_expression_name_143, tmp_subscript_name_143);
        if (tmp_tuple_element_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3651;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_142 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_144;
            PyObject *tmp_subscript_name_144;
            PyTuple_SET_ITEM(tmp_subscript_name_142, 0, tmp_tuple_element_36);
            tmp_expression_name_144 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

            if (unlikely(tmp_expression_name_144 == NULL)) {
                tmp_expression_name_144 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
            }

            if (tmp_expression_name_144 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 3651;

                goto tuple_build_exception_36;
            }
            tmp_subscript_name_144 = mod_consts[97];
            tmp_tuple_element_36 = LOOKUP_SUBSCRIPT(tmp_expression_name_144, tmp_subscript_name_144);
            if (tmp_tuple_element_36 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 3651;

                goto tuple_build_exception_36;
            }
            PyTuple_SET_ITEM(tmp_subscript_name_142, 1, tmp_tuple_element_36);
        }
        goto tuple_build_noexception_36;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_36:;
        Py_DECREF(tmp_subscript_name_142);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_36:;
        tmp_subscript_name_141 = LOOKUP_SUBSCRIPT(tmp_expression_name_142, tmp_subscript_name_142);
        Py_DECREF(tmp_subscript_name_142);
        if (tmp_subscript_name_141 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3651;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_36 = LOOKUP_SUBSCRIPT(tmp_expression_name_141, tmp_subscript_name_141);
        Py_DECREF(tmp_subscript_name_141);
        if (tmp_dict_value_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3651;

            goto frame_exception_exit_1;
        }
        tmp_annotations_36 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_36, tmp_dict_key_36, tmp_dict_value_36);
        Py_DECREF(tmp_dict_value_36);
        assert(!(tmp_res != 0));


        tmp_assign_source_44 = MAKE_FUNCTION_idna$uts46data$$$function__36__seg_35(tmp_annotations_36);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[133], tmp_assign_source_44);
    }
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_annotations_37;
        PyObject *tmp_dict_key_37;
        PyObject *tmp_dict_value_37;
        PyObject *tmp_expression_name_145;
        PyObject *tmp_subscript_name_145;
        PyObject *tmp_expression_name_146;
        PyObject *tmp_subscript_name_146;
        PyObject *tmp_tuple_element_37;
        PyObject *tmp_expression_name_147;
        PyObject *tmp_subscript_name_147;
        tmp_dict_key_37 = mod_consts[95];
        tmp_expression_name_145 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_name_145 == NULL)) {
            tmp_expression_name_145 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_name_145 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3755;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_146 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_expression_name_146 == NULL)) {
            tmp_expression_name_146 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        if (tmp_expression_name_146 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3755;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_147 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_name_147 == NULL)) {
            tmp_expression_name_147 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_name_147 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3755;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_147 = mod_consts[96];
        tmp_tuple_element_37 = LOOKUP_SUBSCRIPT(tmp_expression_name_147, tmp_subscript_name_147);
        if (tmp_tuple_element_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3755;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_146 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_148;
            PyObject *tmp_subscript_name_148;
            PyTuple_SET_ITEM(tmp_subscript_name_146, 0, tmp_tuple_element_37);
            tmp_expression_name_148 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

            if (unlikely(tmp_expression_name_148 == NULL)) {
                tmp_expression_name_148 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
            }

            if (tmp_expression_name_148 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 3755;

                goto tuple_build_exception_37;
            }
            tmp_subscript_name_148 = mod_consts[97];
            tmp_tuple_element_37 = LOOKUP_SUBSCRIPT(tmp_expression_name_148, tmp_subscript_name_148);
            if (tmp_tuple_element_37 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 3755;

                goto tuple_build_exception_37;
            }
            PyTuple_SET_ITEM(tmp_subscript_name_146, 1, tmp_tuple_element_37);
        }
        goto tuple_build_noexception_37;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_37:;
        Py_DECREF(tmp_subscript_name_146);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_37:;
        tmp_subscript_name_145 = LOOKUP_SUBSCRIPT(tmp_expression_name_146, tmp_subscript_name_146);
        Py_DECREF(tmp_subscript_name_146);
        if (tmp_subscript_name_145 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3755;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_37 = LOOKUP_SUBSCRIPT(tmp_expression_name_145, tmp_subscript_name_145);
        Py_DECREF(tmp_subscript_name_145);
        if (tmp_dict_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3755;

            goto frame_exception_exit_1;
        }
        tmp_annotations_37 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_37, tmp_dict_key_37, tmp_dict_value_37);
        Py_DECREF(tmp_dict_value_37);
        assert(!(tmp_res != 0));


        tmp_assign_source_45 = MAKE_FUNCTION_idna$uts46data$$$function__37__seg_36(tmp_annotations_37);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[134], tmp_assign_source_45);
    }
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_annotations_38;
        PyObject *tmp_dict_key_38;
        PyObject *tmp_dict_value_38;
        PyObject *tmp_expression_name_149;
        PyObject *tmp_subscript_name_149;
        PyObject *tmp_expression_name_150;
        PyObject *tmp_subscript_name_150;
        PyObject *tmp_tuple_element_38;
        PyObject *tmp_expression_name_151;
        PyObject *tmp_subscript_name_151;
        tmp_dict_key_38 = mod_consts[95];
        tmp_expression_name_149 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_name_149 == NULL)) {
            tmp_expression_name_149 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_name_149 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3859;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_150 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_expression_name_150 == NULL)) {
            tmp_expression_name_150 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        if (tmp_expression_name_150 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3859;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_151 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_name_151 == NULL)) {
            tmp_expression_name_151 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_name_151 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3859;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_151 = mod_consts[96];
        tmp_tuple_element_38 = LOOKUP_SUBSCRIPT(tmp_expression_name_151, tmp_subscript_name_151);
        if (tmp_tuple_element_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3859;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_150 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_152;
            PyObject *tmp_subscript_name_152;
            PyTuple_SET_ITEM(tmp_subscript_name_150, 0, tmp_tuple_element_38);
            tmp_expression_name_152 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

            if (unlikely(tmp_expression_name_152 == NULL)) {
                tmp_expression_name_152 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
            }

            if (tmp_expression_name_152 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 3859;

                goto tuple_build_exception_38;
            }
            tmp_subscript_name_152 = mod_consts[97];
            tmp_tuple_element_38 = LOOKUP_SUBSCRIPT(tmp_expression_name_152, tmp_subscript_name_152);
            if (tmp_tuple_element_38 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 3859;

                goto tuple_build_exception_38;
            }
            PyTuple_SET_ITEM(tmp_subscript_name_150, 1, tmp_tuple_element_38);
        }
        goto tuple_build_noexception_38;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_38:;
        Py_DECREF(tmp_subscript_name_150);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_38:;
        tmp_subscript_name_149 = LOOKUP_SUBSCRIPT(tmp_expression_name_150, tmp_subscript_name_150);
        Py_DECREF(tmp_subscript_name_150);
        if (tmp_subscript_name_149 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3859;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_38 = LOOKUP_SUBSCRIPT(tmp_expression_name_149, tmp_subscript_name_149);
        Py_DECREF(tmp_subscript_name_149);
        if (tmp_dict_value_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3859;

            goto frame_exception_exit_1;
        }
        tmp_annotations_38 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_38, tmp_dict_key_38, tmp_dict_value_38);
        Py_DECREF(tmp_dict_value_38);
        assert(!(tmp_res != 0));


        tmp_assign_source_46 = MAKE_FUNCTION_idna$uts46data$$$function__38__seg_37(tmp_annotations_38);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[135], tmp_assign_source_46);
    }
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_annotations_39;
        PyObject *tmp_dict_key_39;
        PyObject *tmp_dict_value_39;
        PyObject *tmp_expression_name_153;
        PyObject *tmp_subscript_name_153;
        PyObject *tmp_expression_name_154;
        PyObject *tmp_subscript_name_154;
        PyObject *tmp_tuple_element_39;
        PyObject *tmp_expression_name_155;
        PyObject *tmp_subscript_name_155;
        tmp_dict_key_39 = mod_consts[95];
        tmp_expression_name_153 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_name_153 == NULL)) {
            tmp_expression_name_153 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_name_153 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3963;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_154 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_expression_name_154 == NULL)) {
            tmp_expression_name_154 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        if (tmp_expression_name_154 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3963;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_155 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_name_155 == NULL)) {
            tmp_expression_name_155 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_name_155 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3963;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_155 = mod_consts[96];
        tmp_tuple_element_39 = LOOKUP_SUBSCRIPT(tmp_expression_name_155, tmp_subscript_name_155);
        if (tmp_tuple_element_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3963;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_154 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_156;
            PyObject *tmp_subscript_name_156;
            PyTuple_SET_ITEM(tmp_subscript_name_154, 0, tmp_tuple_element_39);
            tmp_expression_name_156 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

            if (unlikely(tmp_expression_name_156 == NULL)) {
                tmp_expression_name_156 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
            }

            if (tmp_expression_name_156 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 3963;

                goto tuple_build_exception_39;
            }
            tmp_subscript_name_156 = mod_consts[97];
            tmp_tuple_element_39 = LOOKUP_SUBSCRIPT(tmp_expression_name_156, tmp_subscript_name_156);
            if (tmp_tuple_element_39 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 3963;

                goto tuple_build_exception_39;
            }
            PyTuple_SET_ITEM(tmp_subscript_name_154, 1, tmp_tuple_element_39);
        }
        goto tuple_build_noexception_39;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_39:;
        Py_DECREF(tmp_subscript_name_154);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_39:;
        tmp_subscript_name_153 = LOOKUP_SUBSCRIPT(tmp_expression_name_154, tmp_subscript_name_154);
        Py_DECREF(tmp_subscript_name_154);
        if (tmp_subscript_name_153 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3963;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_39 = LOOKUP_SUBSCRIPT(tmp_expression_name_153, tmp_subscript_name_153);
        Py_DECREF(tmp_subscript_name_153);
        if (tmp_dict_value_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3963;

            goto frame_exception_exit_1;
        }
        tmp_annotations_39 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_39, tmp_dict_key_39, tmp_dict_value_39);
        Py_DECREF(tmp_dict_value_39);
        assert(!(tmp_res != 0));


        tmp_assign_source_47 = MAKE_FUNCTION_idna$uts46data$$$function__39__seg_38(tmp_annotations_39);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[136], tmp_assign_source_47);
    }
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_annotations_40;
        PyObject *tmp_dict_key_40;
        PyObject *tmp_dict_value_40;
        PyObject *tmp_expression_name_157;
        PyObject *tmp_subscript_name_157;
        PyObject *tmp_expression_name_158;
        PyObject *tmp_subscript_name_158;
        PyObject *tmp_tuple_element_40;
        PyObject *tmp_expression_name_159;
        PyObject *tmp_subscript_name_159;
        tmp_dict_key_40 = mod_consts[95];
        tmp_expression_name_157 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_name_157 == NULL)) {
            tmp_expression_name_157 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_name_157 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4067;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_158 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_expression_name_158 == NULL)) {
            tmp_expression_name_158 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        if (tmp_expression_name_158 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4067;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_159 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_name_159 == NULL)) {
            tmp_expression_name_159 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_name_159 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4067;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_159 = mod_consts[96];
        tmp_tuple_element_40 = LOOKUP_SUBSCRIPT(tmp_expression_name_159, tmp_subscript_name_159);
        if (tmp_tuple_element_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4067;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_158 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_160;
            PyObject *tmp_subscript_name_160;
            PyTuple_SET_ITEM(tmp_subscript_name_158, 0, tmp_tuple_element_40);
            tmp_expression_name_160 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

            if (unlikely(tmp_expression_name_160 == NULL)) {
                tmp_expression_name_160 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
            }

            if (tmp_expression_name_160 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 4067;

                goto tuple_build_exception_40;
            }
            tmp_subscript_name_160 = mod_consts[97];
            tmp_tuple_element_40 = LOOKUP_SUBSCRIPT(tmp_expression_name_160, tmp_subscript_name_160);
            if (tmp_tuple_element_40 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 4067;

                goto tuple_build_exception_40;
            }
            PyTuple_SET_ITEM(tmp_subscript_name_158, 1, tmp_tuple_element_40);
        }
        goto tuple_build_noexception_40;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_40:;
        Py_DECREF(tmp_subscript_name_158);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_40:;
        tmp_subscript_name_157 = LOOKUP_SUBSCRIPT(tmp_expression_name_158, tmp_subscript_name_158);
        Py_DECREF(tmp_subscript_name_158);
        if (tmp_subscript_name_157 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4067;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_40 = LOOKUP_SUBSCRIPT(tmp_expression_name_157, tmp_subscript_name_157);
        Py_DECREF(tmp_subscript_name_157);
        if (tmp_dict_value_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4067;

            goto frame_exception_exit_1;
        }
        tmp_annotations_40 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_40, tmp_dict_key_40, tmp_dict_value_40);
        Py_DECREF(tmp_dict_value_40);
        assert(!(tmp_res != 0));


        tmp_assign_source_48 = MAKE_FUNCTION_idna$uts46data$$$function__40__seg_39(tmp_annotations_40);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[137], tmp_assign_source_48);
    }
    {
        PyObject *tmp_assign_source_49;
        PyObject *tmp_annotations_41;
        PyObject *tmp_dict_key_41;
        PyObject *tmp_dict_value_41;
        PyObject *tmp_expression_name_161;
        PyObject *tmp_subscript_name_161;
        PyObject *tmp_expression_name_162;
        PyObject *tmp_subscript_name_162;
        PyObject *tmp_tuple_element_41;
        PyObject *tmp_expression_name_163;
        PyObject *tmp_subscript_name_163;
        tmp_dict_key_41 = mod_consts[95];
        tmp_expression_name_161 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_name_161 == NULL)) {
            tmp_expression_name_161 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_name_161 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4171;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_162 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_expression_name_162 == NULL)) {
            tmp_expression_name_162 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        if (tmp_expression_name_162 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4171;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_163 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_name_163 == NULL)) {
            tmp_expression_name_163 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_name_163 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4171;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_163 = mod_consts[96];
        tmp_tuple_element_41 = LOOKUP_SUBSCRIPT(tmp_expression_name_163, tmp_subscript_name_163);
        if (tmp_tuple_element_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4171;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_162 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_164;
            PyObject *tmp_subscript_name_164;
            PyTuple_SET_ITEM(tmp_subscript_name_162, 0, tmp_tuple_element_41);
            tmp_expression_name_164 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

            if (unlikely(tmp_expression_name_164 == NULL)) {
                tmp_expression_name_164 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
            }

            if (tmp_expression_name_164 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 4171;

                goto tuple_build_exception_41;
            }
            tmp_subscript_name_164 = mod_consts[97];
            tmp_tuple_element_41 = LOOKUP_SUBSCRIPT(tmp_expression_name_164, tmp_subscript_name_164);
            if (tmp_tuple_element_41 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 4171;

                goto tuple_build_exception_41;
            }
            PyTuple_SET_ITEM(tmp_subscript_name_162, 1, tmp_tuple_element_41);
        }
        goto tuple_build_noexception_41;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_41:;
        Py_DECREF(tmp_subscript_name_162);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_41:;
        tmp_subscript_name_161 = LOOKUP_SUBSCRIPT(tmp_expression_name_162, tmp_subscript_name_162);
        Py_DECREF(tmp_subscript_name_162);
        if (tmp_subscript_name_161 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4171;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_41 = LOOKUP_SUBSCRIPT(tmp_expression_name_161, tmp_subscript_name_161);
        Py_DECREF(tmp_subscript_name_161);
        if (tmp_dict_value_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4171;

            goto frame_exception_exit_1;
        }
        tmp_annotations_41 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_41, tmp_dict_key_41, tmp_dict_value_41);
        Py_DECREF(tmp_dict_value_41);
        assert(!(tmp_res != 0));


        tmp_assign_source_49 = MAKE_FUNCTION_idna$uts46data$$$function__41__seg_40(tmp_annotations_41);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[138], tmp_assign_source_49);
    }
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_annotations_42;
        PyObject *tmp_dict_key_42;
        PyObject *tmp_dict_value_42;
        PyObject *tmp_expression_name_165;
        PyObject *tmp_subscript_name_165;
        PyObject *tmp_expression_name_166;
        PyObject *tmp_subscript_name_166;
        PyObject *tmp_tuple_element_42;
        PyObject *tmp_expression_name_167;
        PyObject *tmp_subscript_name_167;
        tmp_dict_key_42 = mod_consts[95];
        tmp_expression_name_165 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_name_165 == NULL)) {
            tmp_expression_name_165 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_name_165 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4275;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_166 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_expression_name_166 == NULL)) {
            tmp_expression_name_166 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        if (tmp_expression_name_166 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4275;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_167 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_name_167 == NULL)) {
            tmp_expression_name_167 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_name_167 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4275;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_167 = mod_consts[96];
        tmp_tuple_element_42 = LOOKUP_SUBSCRIPT(tmp_expression_name_167, tmp_subscript_name_167);
        if (tmp_tuple_element_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4275;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_166 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_168;
            PyObject *tmp_subscript_name_168;
            PyTuple_SET_ITEM(tmp_subscript_name_166, 0, tmp_tuple_element_42);
            tmp_expression_name_168 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

            if (unlikely(tmp_expression_name_168 == NULL)) {
                tmp_expression_name_168 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
            }

            if (tmp_expression_name_168 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 4275;

                goto tuple_build_exception_42;
            }
            tmp_subscript_name_168 = mod_consts[97];
            tmp_tuple_element_42 = LOOKUP_SUBSCRIPT(tmp_expression_name_168, tmp_subscript_name_168);
            if (tmp_tuple_element_42 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 4275;

                goto tuple_build_exception_42;
            }
            PyTuple_SET_ITEM(tmp_subscript_name_166, 1, tmp_tuple_element_42);
        }
        goto tuple_build_noexception_42;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_42:;
        Py_DECREF(tmp_subscript_name_166);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_42:;
        tmp_subscript_name_165 = LOOKUP_SUBSCRIPT(tmp_expression_name_166, tmp_subscript_name_166);
        Py_DECREF(tmp_subscript_name_166);
        if (tmp_subscript_name_165 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4275;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_42 = LOOKUP_SUBSCRIPT(tmp_expression_name_165, tmp_subscript_name_165);
        Py_DECREF(tmp_subscript_name_165);
        if (tmp_dict_value_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4275;

            goto frame_exception_exit_1;
        }
        tmp_annotations_42 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_42, tmp_dict_key_42, tmp_dict_value_42);
        Py_DECREF(tmp_dict_value_42);
        assert(!(tmp_res != 0));


        tmp_assign_source_50 = MAKE_FUNCTION_idna$uts46data$$$function__42__seg_41(tmp_annotations_42);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[139], tmp_assign_source_50);
    }
    {
        PyObject *tmp_assign_source_51;
        PyObject *tmp_annotations_43;
        PyObject *tmp_dict_key_43;
        PyObject *tmp_dict_value_43;
        PyObject *tmp_expression_name_169;
        PyObject *tmp_subscript_name_169;
        PyObject *tmp_expression_name_170;
        PyObject *tmp_subscript_name_170;
        PyObject *tmp_tuple_element_43;
        PyObject *tmp_expression_name_171;
        PyObject *tmp_subscript_name_171;
        tmp_dict_key_43 = mod_consts[95];
        tmp_expression_name_169 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_name_169 == NULL)) {
            tmp_expression_name_169 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_name_169 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4379;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_170 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_expression_name_170 == NULL)) {
            tmp_expression_name_170 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        if (tmp_expression_name_170 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4379;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_171 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_name_171 == NULL)) {
            tmp_expression_name_171 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_name_171 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4379;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_171 = mod_consts[96];
        tmp_tuple_element_43 = LOOKUP_SUBSCRIPT(tmp_expression_name_171, tmp_subscript_name_171);
        if (tmp_tuple_element_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4379;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_170 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_172;
            PyObject *tmp_subscript_name_172;
            PyTuple_SET_ITEM(tmp_subscript_name_170, 0, tmp_tuple_element_43);
            tmp_expression_name_172 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

            if (unlikely(tmp_expression_name_172 == NULL)) {
                tmp_expression_name_172 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
            }

            if (tmp_expression_name_172 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 4379;

                goto tuple_build_exception_43;
            }
            tmp_subscript_name_172 = mod_consts[97];
            tmp_tuple_element_43 = LOOKUP_SUBSCRIPT(tmp_expression_name_172, tmp_subscript_name_172);
            if (tmp_tuple_element_43 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 4379;

                goto tuple_build_exception_43;
            }
            PyTuple_SET_ITEM(tmp_subscript_name_170, 1, tmp_tuple_element_43);
        }
        goto tuple_build_noexception_43;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_43:;
        Py_DECREF(tmp_subscript_name_170);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_43:;
        tmp_subscript_name_169 = LOOKUP_SUBSCRIPT(tmp_expression_name_170, tmp_subscript_name_170);
        Py_DECREF(tmp_subscript_name_170);
        if (tmp_subscript_name_169 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4379;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_43 = LOOKUP_SUBSCRIPT(tmp_expression_name_169, tmp_subscript_name_169);
        Py_DECREF(tmp_subscript_name_169);
        if (tmp_dict_value_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4379;

            goto frame_exception_exit_1;
        }
        tmp_annotations_43 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_43, tmp_dict_key_43, tmp_dict_value_43);
        Py_DECREF(tmp_dict_value_43);
        assert(!(tmp_res != 0));


        tmp_assign_source_51 = MAKE_FUNCTION_idna$uts46data$$$function__43__seg_42(tmp_annotations_43);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[140], tmp_assign_source_51);
    }
    {
        PyObject *tmp_assign_source_52;
        PyObject *tmp_annotations_44;
        PyObject *tmp_dict_key_44;
        PyObject *tmp_dict_value_44;
        PyObject *tmp_expression_name_173;
        PyObject *tmp_subscript_name_173;
        PyObject *tmp_expression_name_174;
        PyObject *tmp_subscript_name_174;
        PyObject *tmp_tuple_element_44;
        PyObject *tmp_expression_name_175;
        PyObject *tmp_subscript_name_175;
        tmp_dict_key_44 = mod_consts[95];
        tmp_expression_name_173 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_name_173 == NULL)) {
            tmp_expression_name_173 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_name_173 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4483;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_174 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_expression_name_174 == NULL)) {
            tmp_expression_name_174 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        if (tmp_expression_name_174 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4483;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_175 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_name_175 == NULL)) {
            tmp_expression_name_175 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_name_175 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4483;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_175 = mod_consts[96];
        tmp_tuple_element_44 = LOOKUP_SUBSCRIPT(tmp_expression_name_175, tmp_subscript_name_175);
        if (tmp_tuple_element_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4483;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_174 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_176;
            PyObject *tmp_subscript_name_176;
            PyTuple_SET_ITEM(tmp_subscript_name_174, 0, tmp_tuple_element_44);
            tmp_expression_name_176 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

            if (unlikely(tmp_expression_name_176 == NULL)) {
                tmp_expression_name_176 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
            }

            if (tmp_expression_name_176 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 4483;

                goto tuple_build_exception_44;
            }
            tmp_subscript_name_176 = mod_consts[97];
            tmp_tuple_element_44 = LOOKUP_SUBSCRIPT(tmp_expression_name_176, tmp_subscript_name_176);
            if (tmp_tuple_element_44 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 4483;

                goto tuple_build_exception_44;
            }
            PyTuple_SET_ITEM(tmp_subscript_name_174, 1, tmp_tuple_element_44);
        }
        goto tuple_build_noexception_44;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_44:;
        Py_DECREF(tmp_subscript_name_174);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_44:;
        tmp_subscript_name_173 = LOOKUP_SUBSCRIPT(tmp_expression_name_174, tmp_subscript_name_174);
        Py_DECREF(tmp_subscript_name_174);
        if (tmp_subscript_name_173 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4483;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_44 = LOOKUP_SUBSCRIPT(tmp_expression_name_173, tmp_subscript_name_173);
        Py_DECREF(tmp_subscript_name_173);
        if (tmp_dict_value_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4483;

            goto frame_exception_exit_1;
        }
        tmp_annotations_44 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_44, tmp_dict_key_44, tmp_dict_value_44);
        Py_DECREF(tmp_dict_value_44);
        assert(!(tmp_res != 0));


        tmp_assign_source_52 = MAKE_FUNCTION_idna$uts46data$$$function__44__seg_43(tmp_annotations_44);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[141], tmp_assign_source_52);
    }
    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_annotations_45;
        PyObject *tmp_dict_key_45;
        PyObject *tmp_dict_value_45;
        PyObject *tmp_expression_name_177;
        PyObject *tmp_subscript_name_177;
        PyObject *tmp_expression_name_178;
        PyObject *tmp_subscript_name_178;
        PyObject *tmp_tuple_element_45;
        PyObject *tmp_expression_name_179;
        PyObject *tmp_subscript_name_179;
        tmp_dict_key_45 = mod_consts[95];
        tmp_expression_name_177 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_name_177 == NULL)) {
            tmp_expression_name_177 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_name_177 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4587;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_178 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_expression_name_178 == NULL)) {
            tmp_expression_name_178 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        if (tmp_expression_name_178 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4587;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_179 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_name_179 == NULL)) {
            tmp_expression_name_179 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_name_179 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4587;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_179 = mod_consts[96];
        tmp_tuple_element_45 = LOOKUP_SUBSCRIPT(tmp_expression_name_179, tmp_subscript_name_179);
        if (tmp_tuple_element_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4587;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_178 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_180;
            PyObject *tmp_subscript_name_180;
            PyTuple_SET_ITEM(tmp_subscript_name_178, 0, tmp_tuple_element_45);
            tmp_expression_name_180 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

            if (unlikely(tmp_expression_name_180 == NULL)) {
                tmp_expression_name_180 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
            }

            if (tmp_expression_name_180 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 4587;

                goto tuple_build_exception_45;
            }
            tmp_subscript_name_180 = mod_consts[97];
            tmp_tuple_element_45 = LOOKUP_SUBSCRIPT(tmp_expression_name_180, tmp_subscript_name_180);
            if (tmp_tuple_element_45 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 4587;

                goto tuple_build_exception_45;
            }
            PyTuple_SET_ITEM(tmp_subscript_name_178, 1, tmp_tuple_element_45);
        }
        goto tuple_build_noexception_45;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_45:;
        Py_DECREF(tmp_subscript_name_178);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_45:;
        tmp_subscript_name_177 = LOOKUP_SUBSCRIPT(tmp_expression_name_178, tmp_subscript_name_178);
        Py_DECREF(tmp_subscript_name_178);
        if (tmp_subscript_name_177 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4587;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_45 = LOOKUP_SUBSCRIPT(tmp_expression_name_177, tmp_subscript_name_177);
        Py_DECREF(tmp_subscript_name_177);
        if (tmp_dict_value_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4587;

            goto frame_exception_exit_1;
        }
        tmp_annotations_45 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_45, tmp_dict_key_45, tmp_dict_value_45);
        Py_DECREF(tmp_dict_value_45);
        assert(!(tmp_res != 0));


        tmp_assign_source_53 = MAKE_FUNCTION_idna$uts46data$$$function__45__seg_44(tmp_annotations_45);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[142], tmp_assign_source_53);
    }
    {
        PyObject *tmp_assign_source_54;
        PyObject *tmp_annotations_46;
        PyObject *tmp_dict_key_46;
        PyObject *tmp_dict_value_46;
        PyObject *tmp_expression_name_181;
        PyObject *tmp_subscript_name_181;
        PyObject *tmp_expression_name_182;
        PyObject *tmp_subscript_name_182;
        PyObject *tmp_tuple_element_46;
        PyObject *tmp_expression_name_183;
        PyObject *tmp_subscript_name_183;
        tmp_dict_key_46 = mod_consts[95];
        tmp_expression_name_181 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_name_181 == NULL)) {
            tmp_expression_name_181 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_name_181 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4691;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_182 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_expression_name_182 == NULL)) {
            tmp_expression_name_182 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        if (tmp_expression_name_182 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4691;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_183 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_name_183 == NULL)) {
            tmp_expression_name_183 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_name_183 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4691;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_183 = mod_consts[96];
        tmp_tuple_element_46 = LOOKUP_SUBSCRIPT(tmp_expression_name_183, tmp_subscript_name_183);
        if (tmp_tuple_element_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4691;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_182 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_184;
            PyObject *tmp_subscript_name_184;
            PyTuple_SET_ITEM(tmp_subscript_name_182, 0, tmp_tuple_element_46);
            tmp_expression_name_184 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

            if (unlikely(tmp_expression_name_184 == NULL)) {
                tmp_expression_name_184 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
            }

            if (tmp_expression_name_184 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 4691;

                goto tuple_build_exception_46;
            }
            tmp_subscript_name_184 = mod_consts[97];
            tmp_tuple_element_46 = LOOKUP_SUBSCRIPT(tmp_expression_name_184, tmp_subscript_name_184);
            if (tmp_tuple_element_46 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 4691;

                goto tuple_build_exception_46;
            }
            PyTuple_SET_ITEM(tmp_subscript_name_182, 1, tmp_tuple_element_46);
        }
        goto tuple_build_noexception_46;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_46:;
        Py_DECREF(tmp_subscript_name_182);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_46:;
        tmp_subscript_name_181 = LOOKUP_SUBSCRIPT(tmp_expression_name_182, tmp_subscript_name_182);
        Py_DECREF(tmp_subscript_name_182);
        if (tmp_subscript_name_181 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4691;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_46 = LOOKUP_SUBSCRIPT(tmp_expression_name_181, tmp_subscript_name_181);
        Py_DECREF(tmp_subscript_name_181);
        if (tmp_dict_value_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4691;

            goto frame_exception_exit_1;
        }
        tmp_annotations_46 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_46, tmp_dict_key_46, tmp_dict_value_46);
        Py_DECREF(tmp_dict_value_46);
        assert(!(tmp_res != 0));


        tmp_assign_source_54 = MAKE_FUNCTION_idna$uts46data$$$function__46__seg_45(tmp_annotations_46);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[143], tmp_assign_source_54);
    }
    {
        PyObject *tmp_assign_source_55;
        PyObject *tmp_annotations_47;
        PyObject *tmp_dict_key_47;
        PyObject *tmp_dict_value_47;
        PyObject *tmp_expression_name_185;
        PyObject *tmp_subscript_name_185;
        PyObject *tmp_expression_name_186;
        PyObject *tmp_subscript_name_186;
        PyObject *tmp_tuple_element_47;
        PyObject *tmp_expression_name_187;
        PyObject *tmp_subscript_name_187;
        tmp_dict_key_47 = mod_consts[95];
        tmp_expression_name_185 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_name_185 == NULL)) {
            tmp_expression_name_185 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_name_185 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4795;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_186 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_expression_name_186 == NULL)) {
            tmp_expression_name_186 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        if (tmp_expression_name_186 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4795;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_187 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_name_187 == NULL)) {
            tmp_expression_name_187 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_name_187 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4795;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_187 = mod_consts[96];
        tmp_tuple_element_47 = LOOKUP_SUBSCRIPT(tmp_expression_name_187, tmp_subscript_name_187);
        if (tmp_tuple_element_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4795;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_186 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_188;
            PyObject *tmp_subscript_name_188;
            PyTuple_SET_ITEM(tmp_subscript_name_186, 0, tmp_tuple_element_47);
            tmp_expression_name_188 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

            if (unlikely(tmp_expression_name_188 == NULL)) {
                tmp_expression_name_188 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
            }

            if (tmp_expression_name_188 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 4795;

                goto tuple_build_exception_47;
            }
            tmp_subscript_name_188 = mod_consts[97];
            tmp_tuple_element_47 = LOOKUP_SUBSCRIPT(tmp_expression_name_188, tmp_subscript_name_188);
            if (tmp_tuple_element_47 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 4795;

                goto tuple_build_exception_47;
            }
            PyTuple_SET_ITEM(tmp_subscript_name_186, 1, tmp_tuple_element_47);
        }
        goto tuple_build_noexception_47;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_47:;
        Py_DECREF(tmp_subscript_name_186);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_47:;
        tmp_subscript_name_185 = LOOKUP_SUBSCRIPT(tmp_expression_name_186, tmp_subscript_name_186);
        Py_DECREF(tmp_subscript_name_186);
        if (tmp_subscript_name_185 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4795;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_47 = LOOKUP_SUBSCRIPT(tmp_expression_name_185, tmp_subscript_name_185);
        Py_DECREF(tmp_subscript_name_185);
        if (tmp_dict_value_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4795;

            goto frame_exception_exit_1;
        }
        tmp_annotations_47 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_47, tmp_dict_key_47, tmp_dict_value_47);
        Py_DECREF(tmp_dict_value_47);
        assert(!(tmp_res != 0));


        tmp_assign_source_55 = MAKE_FUNCTION_idna$uts46data$$$function__47__seg_46(tmp_annotations_47);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[144], tmp_assign_source_55);
    }
    {
        PyObject *tmp_assign_source_56;
        PyObject *tmp_annotations_48;
        PyObject *tmp_dict_key_48;
        PyObject *tmp_dict_value_48;
        PyObject *tmp_expression_name_189;
        PyObject *tmp_subscript_name_189;
        PyObject *tmp_expression_name_190;
        PyObject *tmp_subscript_name_190;
        PyObject *tmp_tuple_element_48;
        PyObject *tmp_expression_name_191;
        PyObject *tmp_subscript_name_191;
        tmp_dict_key_48 = mod_consts[95];
        tmp_expression_name_189 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_name_189 == NULL)) {
            tmp_expression_name_189 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_name_189 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4899;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_190 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_expression_name_190 == NULL)) {
            tmp_expression_name_190 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        if (tmp_expression_name_190 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4899;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_191 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_name_191 == NULL)) {
            tmp_expression_name_191 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_name_191 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4899;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_191 = mod_consts[96];
        tmp_tuple_element_48 = LOOKUP_SUBSCRIPT(tmp_expression_name_191, tmp_subscript_name_191);
        if (tmp_tuple_element_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4899;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_190 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_192;
            PyObject *tmp_subscript_name_192;
            PyTuple_SET_ITEM(tmp_subscript_name_190, 0, tmp_tuple_element_48);
            tmp_expression_name_192 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

            if (unlikely(tmp_expression_name_192 == NULL)) {
                tmp_expression_name_192 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
            }

            if (tmp_expression_name_192 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 4899;

                goto tuple_build_exception_48;
            }
            tmp_subscript_name_192 = mod_consts[97];
            tmp_tuple_element_48 = LOOKUP_SUBSCRIPT(tmp_expression_name_192, tmp_subscript_name_192);
            if (tmp_tuple_element_48 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 4899;

                goto tuple_build_exception_48;
            }
            PyTuple_SET_ITEM(tmp_subscript_name_190, 1, tmp_tuple_element_48);
        }
        goto tuple_build_noexception_48;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_48:;
        Py_DECREF(tmp_subscript_name_190);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_48:;
        tmp_subscript_name_189 = LOOKUP_SUBSCRIPT(tmp_expression_name_190, tmp_subscript_name_190);
        Py_DECREF(tmp_subscript_name_190);
        if (tmp_subscript_name_189 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4899;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_48 = LOOKUP_SUBSCRIPT(tmp_expression_name_189, tmp_subscript_name_189);
        Py_DECREF(tmp_subscript_name_189);
        if (tmp_dict_value_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4899;

            goto frame_exception_exit_1;
        }
        tmp_annotations_48 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_48, tmp_dict_key_48, tmp_dict_value_48);
        Py_DECREF(tmp_dict_value_48);
        assert(!(tmp_res != 0));


        tmp_assign_source_56 = MAKE_FUNCTION_idna$uts46data$$$function__48__seg_47(tmp_annotations_48);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[145], tmp_assign_source_56);
    }
    {
        PyObject *tmp_assign_source_57;
        PyObject *tmp_annotations_49;
        PyObject *tmp_dict_key_49;
        PyObject *tmp_dict_value_49;
        PyObject *tmp_expression_name_193;
        PyObject *tmp_subscript_name_193;
        PyObject *tmp_expression_name_194;
        PyObject *tmp_subscript_name_194;
        PyObject *tmp_tuple_element_49;
        PyObject *tmp_expression_name_195;
        PyObject *tmp_subscript_name_195;
        tmp_dict_key_49 = mod_consts[95];
        tmp_expression_name_193 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_name_193 == NULL)) {
            tmp_expression_name_193 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_name_193 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5003;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_194 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_expression_name_194 == NULL)) {
            tmp_expression_name_194 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        if (tmp_expression_name_194 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5003;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_195 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_name_195 == NULL)) {
            tmp_expression_name_195 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_name_195 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5003;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_195 = mod_consts[96];
        tmp_tuple_element_49 = LOOKUP_SUBSCRIPT(tmp_expression_name_195, tmp_subscript_name_195);
        if (tmp_tuple_element_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5003;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_194 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_196;
            PyObject *tmp_subscript_name_196;
            PyTuple_SET_ITEM(tmp_subscript_name_194, 0, tmp_tuple_element_49);
            tmp_expression_name_196 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

            if (unlikely(tmp_expression_name_196 == NULL)) {
                tmp_expression_name_196 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
            }

            if (tmp_expression_name_196 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 5003;

                goto tuple_build_exception_49;
            }
            tmp_subscript_name_196 = mod_consts[97];
            tmp_tuple_element_49 = LOOKUP_SUBSCRIPT(tmp_expression_name_196, tmp_subscript_name_196);
            if (tmp_tuple_element_49 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 5003;

                goto tuple_build_exception_49;
            }
            PyTuple_SET_ITEM(tmp_subscript_name_194, 1, tmp_tuple_element_49);
        }
        goto tuple_build_noexception_49;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_49:;
        Py_DECREF(tmp_subscript_name_194);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_49:;
        tmp_subscript_name_193 = LOOKUP_SUBSCRIPT(tmp_expression_name_194, tmp_subscript_name_194);
        Py_DECREF(tmp_subscript_name_194);
        if (tmp_subscript_name_193 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5003;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_49 = LOOKUP_SUBSCRIPT(tmp_expression_name_193, tmp_subscript_name_193);
        Py_DECREF(tmp_subscript_name_193);
        if (tmp_dict_value_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5003;

            goto frame_exception_exit_1;
        }
        tmp_annotations_49 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_49, tmp_dict_key_49, tmp_dict_value_49);
        Py_DECREF(tmp_dict_value_49);
        assert(!(tmp_res != 0));


        tmp_assign_source_57 = MAKE_FUNCTION_idna$uts46data$$$function__49__seg_48(tmp_annotations_49);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[146], tmp_assign_source_57);
    }
    {
        PyObject *tmp_assign_source_58;
        PyObject *tmp_annotations_50;
        PyObject *tmp_dict_key_50;
        PyObject *tmp_dict_value_50;
        PyObject *tmp_expression_name_197;
        PyObject *tmp_subscript_name_197;
        PyObject *tmp_expression_name_198;
        PyObject *tmp_subscript_name_198;
        PyObject *tmp_tuple_element_50;
        PyObject *tmp_expression_name_199;
        PyObject *tmp_subscript_name_199;
        tmp_dict_key_50 = mod_consts[95];
        tmp_expression_name_197 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_name_197 == NULL)) {
            tmp_expression_name_197 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_name_197 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5107;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_198 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_expression_name_198 == NULL)) {
            tmp_expression_name_198 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        if (tmp_expression_name_198 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5107;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_199 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_name_199 == NULL)) {
            tmp_expression_name_199 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_name_199 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5107;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_199 = mod_consts[96];
        tmp_tuple_element_50 = LOOKUP_SUBSCRIPT(tmp_expression_name_199, tmp_subscript_name_199);
        if (tmp_tuple_element_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5107;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_198 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_200;
            PyObject *tmp_subscript_name_200;
            PyTuple_SET_ITEM(tmp_subscript_name_198, 0, tmp_tuple_element_50);
            tmp_expression_name_200 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

            if (unlikely(tmp_expression_name_200 == NULL)) {
                tmp_expression_name_200 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
            }

            if (tmp_expression_name_200 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 5107;

                goto tuple_build_exception_50;
            }
            tmp_subscript_name_200 = mod_consts[97];
            tmp_tuple_element_50 = LOOKUP_SUBSCRIPT(tmp_expression_name_200, tmp_subscript_name_200);
            if (tmp_tuple_element_50 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 5107;

                goto tuple_build_exception_50;
            }
            PyTuple_SET_ITEM(tmp_subscript_name_198, 1, tmp_tuple_element_50);
        }
        goto tuple_build_noexception_50;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_50:;
        Py_DECREF(tmp_subscript_name_198);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_50:;
        tmp_subscript_name_197 = LOOKUP_SUBSCRIPT(tmp_expression_name_198, tmp_subscript_name_198);
        Py_DECREF(tmp_subscript_name_198);
        if (tmp_subscript_name_197 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5107;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_50 = LOOKUP_SUBSCRIPT(tmp_expression_name_197, tmp_subscript_name_197);
        Py_DECREF(tmp_subscript_name_197);
        if (tmp_dict_value_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5107;

            goto frame_exception_exit_1;
        }
        tmp_annotations_50 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_50, tmp_dict_key_50, tmp_dict_value_50);
        Py_DECREF(tmp_dict_value_50);
        assert(!(tmp_res != 0));


        tmp_assign_source_58 = MAKE_FUNCTION_idna$uts46data$$$function__50__seg_49(tmp_annotations_50);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[147], tmp_assign_source_58);
    }
    {
        PyObject *tmp_assign_source_59;
        PyObject *tmp_annotations_51;
        PyObject *tmp_dict_key_51;
        PyObject *tmp_dict_value_51;
        PyObject *tmp_expression_name_201;
        PyObject *tmp_subscript_name_201;
        PyObject *tmp_expression_name_202;
        PyObject *tmp_subscript_name_202;
        PyObject *tmp_tuple_element_51;
        PyObject *tmp_expression_name_203;
        PyObject *tmp_subscript_name_203;
        tmp_dict_key_51 = mod_consts[95];
        tmp_expression_name_201 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_name_201 == NULL)) {
            tmp_expression_name_201 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_name_201 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5211;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_202 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_expression_name_202 == NULL)) {
            tmp_expression_name_202 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        if (tmp_expression_name_202 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5211;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_203 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_name_203 == NULL)) {
            tmp_expression_name_203 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_name_203 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5211;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_203 = mod_consts[96];
        tmp_tuple_element_51 = LOOKUP_SUBSCRIPT(tmp_expression_name_203, tmp_subscript_name_203);
        if (tmp_tuple_element_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5211;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_202 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_204;
            PyObject *tmp_subscript_name_204;
            PyTuple_SET_ITEM(tmp_subscript_name_202, 0, tmp_tuple_element_51);
            tmp_expression_name_204 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

            if (unlikely(tmp_expression_name_204 == NULL)) {
                tmp_expression_name_204 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
            }

            if (tmp_expression_name_204 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 5211;

                goto tuple_build_exception_51;
            }
            tmp_subscript_name_204 = mod_consts[97];
            tmp_tuple_element_51 = LOOKUP_SUBSCRIPT(tmp_expression_name_204, tmp_subscript_name_204);
            if (tmp_tuple_element_51 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 5211;

                goto tuple_build_exception_51;
            }
            PyTuple_SET_ITEM(tmp_subscript_name_202, 1, tmp_tuple_element_51);
        }
        goto tuple_build_noexception_51;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_51:;
        Py_DECREF(tmp_subscript_name_202);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_51:;
        tmp_subscript_name_201 = LOOKUP_SUBSCRIPT(tmp_expression_name_202, tmp_subscript_name_202);
        Py_DECREF(tmp_subscript_name_202);
        if (tmp_subscript_name_201 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5211;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_51 = LOOKUP_SUBSCRIPT(tmp_expression_name_201, tmp_subscript_name_201);
        Py_DECREF(tmp_subscript_name_201);
        if (tmp_dict_value_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5211;

            goto frame_exception_exit_1;
        }
        tmp_annotations_51 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_51, tmp_dict_key_51, tmp_dict_value_51);
        Py_DECREF(tmp_dict_value_51);
        assert(!(tmp_res != 0));


        tmp_assign_source_59 = MAKE_FUNCTION_idna$uts46data$$$function__51__seg_50(tmp_annotations_51);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[148], tmp_assign_source_59);
    }
    {
        PyObject *tmp_assign_source_60;
        PyObject *tmp_annotations_52;
        PyObject *tmp_dict_key_52;
        PyObject *tmp_dict_value_52;
        PyObject *tmp_expression_name_205;
        PyObject *tmp_subscript_name_205;
        PyObject *tmp_expression_name_206;
        PyObject *tmp_subscript_name_206;
        PyObject *tmp_tuple_element_52;
        PyObject *tmp_expression_name_207;
        PyObject *tmp_subscript_name_207;
        tmp_dict_key_52 = mod_consts[95];
        tmp_expression_name_205 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_name_205 == NULL)) {
            tmp_expression_name_205 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_name_205 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5315;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_206 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_expression_name_206 == NULL)) {
            tmp_expression_name_206 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        if (tmp_expression_name_206 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5315;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_207 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_name_207 == NULL)) {
            tmp_expression_name_207 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_name_207 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5315;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_207 = mod_consts[96];
        tmp_tuple_element_52 = LOOKUP_SUBSCRIPT(tmp_expression_name_207, tmp_subscript_name_207);
        if (tmp_tuple_element_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5315;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_206 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_208;
            PyObject *tmp_subscript_name_208;
            PyTuple_SET_ITEM(tmp_subscript_name_206, 0, tmp_tuple_element_52);
            tmp_expression_name_208 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

            if (unlikely(tmp_expression_name_208 == NULL)) {
                tmp_expression_name_208 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
            }

            if (tmp_expression_name_208 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 5315;

                goto tuple_build_exception_52;
            }
            tmp_subscript_name_208 = mod_consts[97];
            tmp_tuple_element_52 = LOOKUP_SUBSCRIPT(tmp_expression_name_208, tmp_subscript_name_208);
            if (tmp_tuple_element_52 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 5315;

                goto tuple_build_exception_52;
            }
            PyTuple_SET_ITEM(tmp_subscript_name_206, 1, tmp_tuple_element_52);
        }
        goto tuple_build_noexception_52;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_52:;
        Py_DECREF(tmp_subscript_name_206);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_52:;
        tmp_subscript_name_205 = LOOKUP_SUBSCRIPT(tmp_expression_name_206, tmp_subscript_name_206);
        Py_DECREF(tmp_subscript_name_206);
        if (tmp_subscript_name_205 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5315;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_52 = LOOKUP_SUBSCRIPT(tmp_expression_name_205, tmp_subscript_name_205);
        Py_DECREF(tmp_subscript_name_205);
        if (tmp_dict_value_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5315;

            goto frame_exception_exit_1;
        }
        tmp_annotations_52 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_52, tmp_dict_key_52, tmp_dict_value_52);
        Py_DECREF(tmp_dict_value_52);
        assert(!(tmp_res != 0));


        tmp_assign_source_60 = MAKE_FUNCTION_idna$uts46data$$$function__52__seg_51(tmp_annotations_52);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[149], tmp_assign_source_60);
    }
    {
        PyObject *tmp_assign_source_61;
        PyObject *tmp_annotations_53;
        PyObject *tmp_dict_key_53;
        PyObject *tmp_dict_value_53;
        PyObject *tmp_expression_name_209;
        PyObject *tmp_subscript_name_209;
        PyObject *tmp_expression_name_210;
        PyObject *tmp_subscript_name_210;
        PyObject *tmp_tuple_element_53;
        PyObject *tmp_expression_name_211;
        PyObject *tmp_subscript_name_211;
        tmp_dict_key_53 = mod_consts[95];
        tmp_expression_name_209 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_name_209 == NULL)) {
            tmp_expression_name_209 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_name_209 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5419;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_210 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_expression_name_210 == NULL)) {
            tmp_expression_name_210 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        if (tmp_expression_name_210 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5419;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_211 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_name_211 == NULL)) {
            tmp_expression_name_211 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_name_211 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5419;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_211 = mod_consts[96];
        tmp_tuple_element_53 = LOOKUP_SUBSCRIPT(tmp_expression_name_211, tmp_subscript_name_211);
        if (tmp_tuple_element_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5419;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_210 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_212;
            PyObject *tmp_subscript_name_212;
            PyTuple_SET_ITEM(tmp_subscript_name_210, 0, tmp_tuple_element_53);
            tmp_expression_name_212 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

            if (unlikely(tmp_expression_name_212 == NULL)) {
                tmp_expression_name_212 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
            }

            if (tmp_expression_name_212 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 5419;

                goto tuple_build_exception_53;
            }
            tmp_subscript_name_212 = mod_consts[97];
            tmp_tuple_element_53 = LOOKUP_SUBSCRIPT(tmp_expression_name_212, tmp_subscript_name_212);
            if (tmp_tuple_element_53 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 5419;

                goto tuple_build_exception_53;
            }
            PyTuple_SET_ITEM(tmp_subscript_name_210, 1, tmp_tuple_element_53);
        }
        goto tuple_build_noexception_53;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_53:;
        Py_DECREF(tmp_subscript_name_210);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_53:;
        tmp_subscript_name_209 = LOOKUP_SUBSCRIPT(tmp_expression_name_210, tmp_subscript_name_210);
        Py_DECREF(tmp_subscript_name_210);
        if (tmp_subscript_name_209 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5419;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_53 = LOOKUP_SUBSCRIPT(tmp_expression_name_209, tmp_subscript_name_209);
        Py_DECREF(tmp_subscript_name_209);
        if (tmp_dict_value_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5419;

            goto frame_exception_exit_1;
        }
        tmp_annotations_53 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_53, tmp_dict_key_53, tmp_dict_value_53);
        Py_DECREF(tmp_dict_value_53);
        assert(!(tmp_res != 0));


        tmp_assign_source_61 = MAKE_FUNCTION_idna$uts46data$$$function__53__seg_52(tmp_annotations_53);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[150], tmp_assign_source_61);
    }
    {
        PyObject *tmp_assign_source_62;
        PyObject *tmp_annotations_54;
        PyObject *tmp_dict_key_54;
        PyObject *tmp_dict_value_54;
        PyObject *tmp_expression_name_213;
        PyObject *tmp_subscript_name_213;
        PyObject *tmp_expression_name_214;
        PyObject *tmp_subscript_name_214;
        PyObject *tmp_tuple_element_54;
        PyObject *tmp_expression_name_215;
        PyObject *tmp_subscript_name_215;
        tmp_dict_key_54 = mod_consts[95];
        tmp_expression_name_213 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_name_213 == NULL)) {
            tmp_expression_name_213 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_name_213 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5523;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_214 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_expression_name_214 == NULL)) {
            tmp_expression_name_214 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        if (tmp_expression_name_214 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5523;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_215 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_name_215 == NULL)) {
            tmp_expression_name_215 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_name_215 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5523;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_215 = mod_consts[96];
        tmp_tuple_element_54 = LOOKUP_SUBSCRIPT(tmp_expression_name_215, tmp_subscript_name_215);
        if (tmp_tuple_element_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5523;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_214 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_216;
            PyObject *tmp_subscript_name_216;
            PyTuple_SET_ITEM(tmp_subscript_name_214, 0, tmp_tuple_element_54);
            tmp_expression_name_216 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

            if (unlikely(tmp_expression_name_216 == NULL)) {
                tmp_expression_name_216 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
            }

            if (tmp_expression_name_216 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 5523;

                goto tuple_build_exception_54;
            }
            tmp_subscript_name_216 = mod_consts[97];
            tmp_tuple_element_54 = LOOKUP_SUBSCRIPT(tmp_expression_name_216, tmp_subscript_name_216);
            if (tmp_tuple_element_54 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 5523;

                goto tuple_build_exception_54;
            }
            PyTuple_SET_ITEM(tmp_subscript_name_214, 1, tmp_tuple_element_54);
        }
        goto tuple_build_noexception_54;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_54:;
        Py_DECREF(tmp_subscript_name_214);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_54:;
        tmp_subscript_name_213 = LOOKUP_SUBSCRIPT(tmp_expression_name_214, tmp_subscript_name_214);
        Py_DECREF(tmp_subscript_name_214);
        if (tmp_subscript_name_213 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5523;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_54 = LOOKUP_SUBSCRIPT(tmp_expression_name_213, tmp_subscript_name_213);
        Py_DECREF(tmp_subscript_name_213);
        if (tmp_dict_value_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5523;

            goto frame_exception_exit_1;
        }
        tmp_annotations_54 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_54, tmp_dict_key_54, tmp_dict_value_54);
        Py_DECREF(tmp_dict_value_54);
        assert(!(tmp_res != 0));


        tmp_assign_source_62 = MAKE_FUNCTION_idna$uts46data$$$function__54__seg_53(tmp_annotations_54);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[151], tmp_assign_source_62);
    }
    {
        PyObject *tmp_assign_source_63;
        PyObject *tmp_annotations_55;
        PyObject *tmp_dict_key_55;
        PyObject *tmp_dict_value_55;
        PyObject *tmp_expression_name_217;
        PyObject *tmp_subscript_name_217;
        PyObject *tmp_expression_name_218;
        PyObject *tmp_subscript_name_218;
        PyObject *tmp_tuple_element_55;
        PyObject *tmp_expression_name_219;
        PyObject *tmp_subscript_name_219;
        tmp_dict_key_55 = mod_consts[95];
        tmp_expression_name_217 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_name_217 == NULL)) {
            tmp_expression_name_217 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_name_217 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5627;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_218 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_expression_name_218 == NULL)) {
            tmp_expression_name_218 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        if (tmp_expression_name_218 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5627;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_219 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_name_219 == NULL)) {
            tmp_expression_name_219 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_name_219 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5627;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_219 = mod_consts[96];
        tmp_tuple_element_55 = LOOKUP_SUBSCRIPT(tmp_expression_name_219, tmp_subscript_name_219);
        if (tmp_tuple_element_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5627;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_218 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_220;
            PyObject *tmp_subscript_name_220;
            PyTuple_SET_ITEM(tmp_subscript_name_218, 0, tmp_tuple_element_55);
            tmp_expression_name_220 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

            if (unlikely(tmp_expression_name_220 == NULL)) {
                tmp_expression_name_220 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
            }

            if (tmp_expression_name_220 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 5627;

                goto tuple_build_exception_55;
            }
            tmp_subscript_name_220 = mod_consts[97];
            tmp_tuple_element_55 = LOOKUP_SUBSCRIPT(tmp_expression_name_220, tmp_subscript_name_220);
            if (tmp_tuple_element_55 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 5627;

                goto tuple_build_exception_55;
            }
            PyTuple_SET_ITEM(tmp_subscript_name_218, 1, tmp_tuple_element_55);
        }
        goto tuple_build_noexception_55;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_55:;
        Py_DECREF(tmp_subscript_name_218);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_55:;
        tmp_subscript_name_217 = LOOKUP_SUBSCRIPT(tmp_expression_name_218, tmp_subscript_name_218);
        Py_DECREF(tmp_subscript_name_218);
        if (tmp_subscript_name_217 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5627;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_55 = LOOKUP_SUBSCRIPT(tmp_expression_name_217, tmp_subscript_name_217);
        Py_DECREF(tmp_subscript_name_217);
        if (tmp_dict_value_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5627;

            goto frame_exception_exit_1;
        }
        tmp_annotations_55 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_55, tmp_dict_key_55, tmp_dict_value_55);
        Py_DECREF(tmp_dict_value_55);
        assert(!(tmp_res != 0));


        tmp_assign_source_63 = MAKE_FUNCTION_idna$uts46data$$$function__55__seg_54(tmp_annotations_55);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[152], tmp_assign_source_63);
    }
    {
        PyObject *tmp_assign_source_64;
        PyObject *tmp_annotations_56;
        PyObject *tmp_dict_key_56;
        PyObject *tmp_dict_value_56;
        PyObject *tmp_expression_name_221;
        PyObject *tmp_subscript_name_221;
        PyObject *tmp_expression_name_222;
        PyObject *tmp_subscript_name_222;
        PyObject *tmp_tuple_element_56;
        PyObject *tmp_expression_name_223;
        PyObject *tmp_subscript_name_223;
        tmp_dict_key_56 = mod_consts[95];
        tmp_expression_name_221 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_name_221 == NULL)) {
            tmp_expression_name_221 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_name_221 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5731;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_222 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_expression_name_222 == NULL)) {
            tmp_expression_name_222 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        if (tmp_expression_name_222 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5731;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_223 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_name_223 == NULL)) {
            tmp_expression_name_223 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_name_223 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5731;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_223 = mod_consts[96];
        tmp_tuple_element_56 = LOOKUP_SUBSCRIPT(tmp_expression_name_223, tmp_subscript_name_223);
        if (tmp_tuple_element_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5731;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_222 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_224;
            PyObject *tmp_subscript_name_224;
            PyTuple_SET_ITEM(tmp_subscript_name_222, 0, tmp_tuple_element_56);
            tmp_expression_name_224 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

            if (unlikely(tmp_expression_name_224 == NULL)) {
                tmp_expression_name_224 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
            }

            if (tmp_expression_name_224 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 5731;

                goto tuple_build_exception_56;
            }
            tmp_subscript_name_224 = mod_consts[97];
            tmp_tuple_element_56 = LOOKUP_SUBSCRIPT(tmp_expression_name_224, tmp_subscript_name_224);
            if (tmp_tuple_element_56 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 5731;

                goto tuple_build_exception_56;
            }
            PyTuple_SET_ITEM(tmp_subscript_name_222, 1, tmp_tuple_element_56);
        }
        goto tuple_build_noexception_56;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_56:;
        Py_DECREF(tmp_subscript_name_222);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_56:;
        tmp_subscript_name_221 = LOOKUP_SUBSCRIPT(tmp_expression_name_222, tmp_subscript_name_222);
        Py_DECREF(tmp_subscript_name_222);
        if (tmp_subscript_name_221 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5731;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_56 = LOOKUP_SUBSCRIPT(tmp_expression_name_221, tmp_subscript_name_221);
        Py_DECREF(tmp_subscript_name_221);
        if (tmp_dict_value_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5731;

            goto frame_exception_exit_1;
        }
        tmp_annotations_56 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_56, tmp_dict_key_56, tmp_dict_value_56);
        Py_DECREF(tmp_dict_value_56);
        assert(!(tmp_res != 0));


        tmp_assign_source_64 = MAKE_FUNCTION_idna$uts46data$$$function__56__seg_55(tmp_annotations_56);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[153], tmp_assign_source_64);
    }
    {
        PyObject *tmp_assign_source_65;
        PyObject *tmp_annotations_57;
        PyObject *tmp_dict_key_57;
        PyObject *tmp_dict_value_57;
        PyObject *tmp_expression_name_225;
        PyObject *tmp_subscript_name_225;
        PyObject *tmp_expression_name_226;
        PyObject *tmp_subscript_name_226;
        PyObject *tmp_tuple_element_57;
        PyObject *tmp_expression_name_227;
        PyObject *tmp_subscript_name_227;
        tmp_dict_key_57 = mod_consts[95];
        tmp_expression_name_225 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_name_225 == NULL)) {
            tmp_expression_name_225 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_name_225 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5835;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_226 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_expression_name_226 == NULL)) {
            tmp_expression_name_226 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        if (tmp_expression_name_226 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5835;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_227 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_name_227 == NULL)) {
            tmp_expression_name_227 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_name_227 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5835;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_227 = mod_consts[96];
        tmp_tuple_element_57 = LOOKUP_SUBSCRIPT(tmp_expression_name_227, tmp_subscript_name_227);
        if (tmp_tuple_element_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5835;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_226 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_228;
            PyObject *tmp_subscript_name_228;
            PyTuple_SET_ITEM(tmp_subscript_name_226, 0, tmp_tuple_element_57);
            tmp_expression_name_228 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

            if (unlikely(tmp_expression_name_228 == NULL)) {
                tmp_expression_name_228 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
            }

            if (tmp_expression_name_228 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 5835;

                goto tuple_build_exception_57;
            }
            tmp_subscript_name_228 = mod_consts[97];
            tmp_tuple_element_57 = LOOKUP_SUBSCRIPT(tmp_expression_name_228, tmp_subscript_name_228);
            if (tmp_tuple_element_57 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 5835;

                goto tuple_build_exception_57;
            }
            PyTuple_SET_ITEM(tmp_subscript_name_226, 1, tmp_tuple_element_57);
        }
        goto tuple_build_noexception_57;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_57:;
        Py_DECREF(tmp_subscript_name_226);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_57:;
        tmp_subscript_name_225 = LOOKUP_SUBSCRIPT(tmp_expression_name_226, tmp_subscript_name_226);
        Py_DECREF(tmp_subscript_name_226);
        if (tmp_subscript_name_225 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5835;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_57 = LOOKUP_SUBSCRIPT(tmp_expression_name_225, tmp_subscript_name_225);
        Py_DECREF(tmp_subscript_name_225);
        if (tmp_dict_value_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5835;

            goto frame_exception_exit_1;
        }
        tmp_annotations_57 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_57, tmp_dict_key_57, tmp_dict_value_57);
        Py_DECREF(tmp_dict_value_57);
        assert(!(tmp_res != 0));


        tmp_assign_source_65 = MAKE_FUNCTION_idna$uts46data$$$function__57__seg_56(tmp_annotations_57);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[154], tmp_assign_source_65);
    }
    {
        PyObject *tmp_assign_source_66;
        PyObject *tmp_annotations_58;
        PyObject *tmp_dict_key_58;
        PyObject *tmp_dict_value_58;
        PyObject *tmp_expression_name_229;
        PyObject *tmp_subscript_name_229;
        PyObject *tmp_expression_name_230;
        PyObject *tmp_subscript_name_230;
        PyObject *tmp_tuple_element_58;
        PyObject *tmp_expression_name_231;
        PyObject *tmp_subscript_name_231;
        tmp_dict_key_58 = mod_consts[95];
        tmp_expression_name_229 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_name_229 == NULL)) {
            tmp_expression_name_229 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_name_229 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5939;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_230 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_expression_name_230 == NULL)) {
            tmp_expression_name_230 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        if (tmp_expression_name_230 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5939;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_231 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_name_231 == NULL)) {
            tmp_expression_name_231 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_name_231 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5939;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_231 = mod_consts[96];
        tmp_tuple_element_58 = LOOKUP_SUBSCRIPT(tmp_expression_name_231, tmp_subscript_name_231);
        if (tmp_tuple_element_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5939;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_230 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_232;
            PyObject *tmp_subscript_name_232;
            PyTuple_SET_ITEM(tmp_subscript_name_230, 0, tmp_tuple_element_58);
            tmp_expression_name_232 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

            if (unlikely(tmp_expression_name_232 == NULL)) {
                tmp_expression_name_232 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
            }

            if (tmp_expression_name_232 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 5939;

                goto tuple_build_exception_58;
            }
            tmp_subscript_name_232 = mod_consts[97];
            tmp_tuple_element_58 = LOOKUP_SUBSCRIPT(tmp_expression_name_232, tmp_subscript_name_232);
            if (tmp_tuple_element_58 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 5939;

                goto tuple_build_exception_58;
            }
            PyTuple_SET_ITEM(tmp_subscript_name_230, 1, tmp_tuple_element_58);
        }
        goto tuple_build_noexception_58;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_58:;
        Py_DECREF(tmp_subscript_name_230);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_58:;
        tmp_subscript_name_229 = LOOKUP_SUBSCRIPT(tmp_expression_name_230, tmp_subscript_name_230);
        Py_DECREF(tmp_subscript_name_230);
        if (tmp_subscript_name_229 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5939;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_58 = LOOKUP_SUBSCRIPT(tmp_expression_name_229, tmp_subscript_name_229);
        Py_DECREF(tmp_subscript_name_229);
        if (tmp_dict_value_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5939;

            goto frame_exception_exit_1;
        }
        tmp_annotations_58 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_58, tmp_dict_key_58, tmp_dict_value_58);
        Py_DECREF(tmp_dict_value_58);
        assert(!(tmp_res != 0));


        tmp_assign_source_66 = MAKE_FUNCTION_idna$uts46data$$$function__58__seg_57(tmp_annotations_58);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[155], tmp_assign_source_66);
    }
    {
        PyObject *tmp_assign_source_67;
        PyObject *tmp_annotations_59;
        PyObject *tmp_dict_key_59;
        PyObject *tmp_dict_value_59;
        PyObject *tmp_expression_name_233;
        PyObject *tmp_subscript_name_233;
        PyObject *tmp_expression_name_234;
        PyObject *tmp_subscript_name_234;
        PyObject *tmp_tuple_element_59;
        PyObject *tmp_expression_name_235;
        PyObject *tmp_subscript_name_235;
        tmp_dict_key_59 = mod_consts[95];
        tmp_expression_name_233 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_name_233 == NULL)) {
            tmp_expression_name_233 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_name_233 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6043;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_234 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_expression_name_234 == NULL)) {
            tmp_expression_name_234 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        if (tmp_expression_name_234 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6043;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_235 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_name_235 == NULL)) {
            tmp_expression_name_235 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_name_235 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6043;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_235 = mod_consts[96];
        tmp_tuple_element_59 = LOOKUP_SUBSCRIPT(tmp_expression_name_235, tmp_subscript_name_235);
        if (tmp_tuple_element_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6043;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_234 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_236;
            PyObject *tmp_subscript_name_236;
            PyTuple_SET_ITEM(tmp_subscript_name_234, 0, tmp_tuple_element_59);
            tmp_expression_name_236 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

            if (unlikely(tmp_expression_name_236 == NULL)) {
                tmp_expression_name_236 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
            }

            if (tmp_expression_name_236 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 6043;

                goto tuple_build_exception_59;
            }
            tmp_subscript_name_236 = mod_consts[97];
            tmp_tuple_element_59 = LOOKUP_SUBSCRIPT(tmp_expression_name_236, tmp_subscript_name_236);
            if (tmp_tuple_element_59 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 6043;

                goto tuple_build_exception_59;
            }
            PyTuple_SET_ITEM(tmp_subscript_name_234, 1, tmp_tuple_element_59);
        }
        goto tuple_build_noexception_59;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_59:;
        Py_DECREF(tmp_subscript_name_234);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_59:;
        tmp_subscript_name_233 = LOOKUP_SUBSCRIPT(tmp_expression_name_234, tmp_subscript_name_234);
        Py_DECREF(tmp_subscript_name_234);
        if (tmp_subscript_name_233 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6043;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_59 = LOOKUP_SUBSCRIPT(tmp_expression_name_233, tmp_subscript_name_233);
        Py_DECREF(tmp_subscript_name_233);
        if (tmp_dict_value_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6043;

            goto frame_exception_exit_1;
        }
        tmp_annotations_59 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_59, tmp_dict_key_59, tmp_dict_value_59);
        Py_DECREF(tmp_dict_value_59);
        assert(!(tmp_res != 0));


        tmp_assign_source_67 = MAKE_FUNCTION_idna$uts46data$$$function__59__seg_58(tmp_annotations_59);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[156], tmp_assign_source_67);
    }
    {
        PyObject *tmp_assign_source_68;
        PyObject *tmp_annotations_60;
        PyObject *tmp_dict_key_60;
        PyObject *tmp_dict_value_60;
        PyObject *tmp_expression_name_237;
        PyObject *tmp_subscript_name_237;
        PyObject *tmp_expression_name_238;
        PyObject *tmp_subscript_name_238;
        PyObject *tmp_tuple_element_60;
        PyObject *tmp_expression_name_239;
        PyObject *tmp_subscript_name_239;
        tmp_dict_key_60 = mod_consts[95];
        tmp_expression_name_237 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_name_237 == NULL)) {
            tmp_expression_name_237 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_name_237 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6147;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_238 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_expression_name_238 == NULL)) {
            tmp_expression_name_238 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        if (tmp_expression_name_238 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6147;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_239 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_name_239 == NULL)) {
            tmp_expression_name_239 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_name_239 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6147;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_239 = mod_consts[96];
        tmp_tuple_element_60 = LOOKUP_SUBSCRIPT(tmp_expression_name_239, tmp_subscript_name_239);
        if (tmp_tuple_element_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6147;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_238 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_240;
            PyObject *tmp_subscript_name_240;
            PyTuple_SET_ITEM(tmp_subscript_name_238, 0, tmp_tuple_element_60);
            tmp_expression_name_240 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

            if (unlikely(tmp_expression_name_240 == NULL)) {
                tmp_expression_name_240 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
            }

            if (tmp_expression_name_240 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 6147;

                goto tuple_build_exception_60;
            }
            tmp_subscript_name_240 = mod_consts[97];
            tmp_tuple_element_60 = LOOKUP_SUBSCRIPT(tmp_expression_name_240, tmp_subscript_name_240);
            if (tmp_tuple_element_60 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 6147;

                goto tuple_build_exception_60;
            }
            PyTuple_SET_ITEM(tmp_subscript_name_238, 1, tmp_tuple_element_60);
        }
        goto tuple_build_noexception_60;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_60:;
        Py_DECREF(tmp_subscript_name_238);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_60:;
        tmp_subscript_name_237 = LOOKUP_SUBSCRIPT(tmp_expression_name_238, tmp_subscript_name_238);
        Py_DECREF(tmp_subscript_name_238);
        if (tmp_subscript_name_237 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6147;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_60 = LOOKUP_SUBSCRIPT(tmp_expression_name_237, tmp_subscript_name_237);
        Py_DECREF(tmp_subscript_name_237);
        if (tmp_dict_value_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6147;

            goto frame_exception_exit_1;
        }
        tmp_annotations_60 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_60, tmp_dict_key_60, tmp_dict_value_60);
        Py_DECREF(tmp_dict_value_60);
        assert(!(tmp_res != 0));


        tmp_assign_source_68 = MAKE_FUNCTION_idna$uts46data$$$function__60__seg_59(tmp_annotations_60);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[157], tmp_assign_source_68);
    }
    {
        PyObject *tmp_assign_source_69;
        PyObject *tmp_annotations_61;
        PyObject *tmp_dict_key_61;
        PyObject *tmp_dict_value_61;
        PyObject *tmp_expression_name_241;
        PyObject *tmp_subscript_name_241;
        PyObject *tmp_expression_name_242;
        PyObject *tmp_subscript_name_242;
        PyObject *tmp_tuple_element_61;
        PyObject *tmp_expression_name_243;
        PyObject *tmp_subscript_name_243;
        tmp_dict_key_61 = mod_consts[95];
        tmp_expression_name_241 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_name_241 == NULL)) {
            tmp_expression_name_241 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_name_241 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6251;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_242 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_expression_name_242 == NULL)) {
            tmp_expression_name_242 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        if (tmp_expression_name_242 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6251;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_243 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_name_243 == NULL)) {
            tmp_expression_name_243 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_name_243 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6251;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_243 = mod_consts[96];
        tmp_tuple_element_61 = LOOKUP_SUBSCRIPT(tmp_expression_name_243, tmp_subscript_name_243);
        if (tmp_tuple_element_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6251;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_242 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_244;
            PyObject *tmp_subscript_name_244;
            PyTuple_SET_ITEM(tmp_subscript_name_242, 0, tmp_tuple_element_61);
            tmp_expression_name_244 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

            if (unlikely(tmp_expression_name_244 == NULL)) {
                tmp_expression_name_244 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
            }

            if (tmp_expression_name_244 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 6251;

                goto tuple_build_exception_61;
            }
            tmp_subscript_name_244 = mod_consts[97];
            tmp_tuple_element_61 = LOOKUP_SUBSCRIPT(tmp_expression_name_244, tmp_subscript_name_244);
            if (tmp_tuple_element_61 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 6251;

                goto tuple_build_exception_61;
            }
            PyTuple_SET_ITEM(tmp_subscript_name_242, 1, tmp_tuple_element_61);
        }
        goto tuple_build_noexception_61;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_61:;
        Py_DECREF(tmp_subscript_name_242);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_61:;
        tmp_subscript_name_241 = LOOKUP_SUBSCRIPT(tmp_expression_name_242, tmp_subscript_name_242);
        Py_DECREF(tmp_subscript_name_242);
        if (tmp_subscript_name_241 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6251;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_61 = LOOKUP_SUBSCRIPT(tmp_expression_name_241, tmp_subscript_name_241);
        Py_DECREF(tmp_subscript_name_241);
        if (tmp_dict_value_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6251;

            goto frame_exception_exit_1;
        }
        tmp_annotations_61 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_61, tmp_dict_key_61, tmp_dict_value_61);
        Py_DECREF(tmp_dict_value_61);
        assert(!(tmp_res != 0));


        tmp_assign_source_69 = MAKE_FUNCTION_idna$uts46data$$$function__61__seg_60(tmp_annotations_61);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[158], tmp_assign_source_69);
    }
    {
        PyObject *tmp_assign_source_70;
        PyObject *tmp_annotations_62;
        PyObject *tmp_dict_key_62;
        PyObject *tmp_dict_value_62;
        PyObject *tmp_expression_name_245;
        PyObject *tmp_subscript_name_245;
        PyObject *tmp_expression_name_246;
        PyObject *tmp_subscript_name_246;
        PyObject *tmp_tuple_element_62;
        PyObject *tmp_expression_name_247;
        PyObject *tmp_subscript_name_247;
        tmp_dict_key_62 = mod_consts[95];
        tmp_expression_name_245 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_name_245 == NULL)) {
            tmp_expression_name_245 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_name_245 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6355;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_246 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_expression_name_246 == NULL)) {
            tmp_expression_name_246 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        if (tmp_expression_name_246 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6355;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_247 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_name_247 == NULL)) {
            tmp_expression_name_247 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_name_247 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6355;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_247 = mod_consts[96];
        tmp_tuple_element_62 = LOOKUP_SUBSCRIPT(tmp_expression_name_247, tmp_subscript_name_247);
        if (tmp_tuple_element_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6355;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_246 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_248;
            PyObject *tmp_subscript_name_248;
            PyTuple_SET_ITEM(tmp_subscript_name_246, 0, tmp_tuple_element_62);
            tmp_expression_name_248 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

            if (unlikely(tmp_expression_name_248 == NULL)) {
                tmp_expression_name_248 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
            }

            if (tmp_expression_name_248 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 6355;

                goto tuple_build_exception_62;
            }
            tmp_subscript_name_248 = mod_consts[97];
            tmp_tuple_element_62 = LOOKUP_SUBSCRIPT(tmp_expression_name_248, tmp_subscript_name_248);
            if (tmp_tuple_element_62 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 6355;

                goto tuple_build_exception_62;
            }
            PyTuple_SET_ITEM(tmp_subscript_name_246, 1, tmp_tuple_element_62);
        }
        goto tuple_build_noexception_62;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_62:;
        Py_DECREF(tmp_subscript_name_246);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_62:;
        tmp_subscript_name_245 = LOOKUP_SUBSCRIPT(tmp_expression_name_246, tmp_subscript_name_246);
        Py_DECREF(tmp_subscript_name_246);
        if (tmp_subscript_name_245 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6355;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_62 = LOOKUP_SUBSCRIPT(tmp_expression_name_245, tmp_subscript_name_245);
        Py_DECREF(tmp_subscript_name_245);
        if (tmp_dict_value_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6355;

            goto frame_exception_exit_1;
        }
        tmp_annotations_62 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_62, tmp_dict_key_62, tmp_dict_value_62);
        Py_DECREF(tmp_dict_value_62);
        assert(!(tmp_res != 0));


        tmp_assign_source_70 = MAKE_FUNCTION_idna$uts46data$$$function__62__seg_61(tmp_annotations_62);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[159], tmp_assign_source_70);
    }
    {
        PyObject *tmp_assign_source_71;
        PyObject *tmp_annotations_63;
        PyObject *tmp_dict_key_63;
        PyObject *tmp_dict_value_63;
        PyObject *tmp_expression_name_249;
        PyObject *tmp_subscript_name_249;
        PyObject *tmp_expression_name_250;
        PyObject *tmp_subscript_name_250;
        PyObject *tmp_tuple_element_63;
        PyObject *tmp_expression_name_251;
        PyObject *tmp_subscript_name_251;
        tmp_dict_key_63 = mod_consts[95];
        tmp_expression_name_249 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_name_249 == NULL)) {
            tmp_expression_name_249 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_name_249 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6459;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_250 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_expression_name_250 == NULL)) {
            tmp_expression_name_250 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        if (tmp_expression_name_250 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6459;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_251 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_name_251 == NULL)) {
            tmp_expression_name_251 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_name_251 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6459;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_251 = mod_consts[96];
        tmp_tuple_element_63 = LOOKUP_SUBSCRIPT(tmp_expression_name_251, tmp_subscript_name_251);
        if (tmp_tuple_element_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6459;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_250 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_252;
            PyObject *tmp_subscript_name_252;
            PyTuple_SET_ITEM(tmp_subscript_name_250, 0, tmp_tuple_element_63);
            tmp_expression_name_252 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

            if (unlikely(tmp_expression_name_252 == NULL)) {
                tmp_expression_name_252 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
            }

            if (tmp_expression_name_252 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 6459;

                goto tuple_build_exception_63;
            }
            tmp_subscript_name_252 = mod_consts[97];
            tmp_tuple_element_63 = LOOKUP_SUBSCRIPT(tmp_expression_name_252, tmp_subscript_name_252);
            if (tmp_tuple_element_63 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 6459;

                goto tuple_build_exception_63;
            }
            PyTuple_SET_ITEM(tmp_subscript_name_250, 1, tmp_tuple_element_63);
        }
        goto tuple_build_noexception_63;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_63:;
        Py_DECREF(tmp_subscript_name_250);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_63:;
        tmp_subscript_name_249 = LOOKUP_SUBSCRIPT(tmp_expression_name_250, tmp_subscript_name_250);
        Py_DECREF(tmp_subscript_name_250);
        if (tmp_subscript_name_249 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6459;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_63 = LOOKUP_SUBSCRIPT(tmp_expression_name_249, tmp_subscript_name_249);
        Py_DECREF(tmp_subscript_name_249);
        if (tmp_dict_value_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6459;

            goto frame_exception_exit_1;
        }
        tmp_annotations_63 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_63, tmp_dict_key_63, tmp_dict_value_63);
        Py_DECREF(tmp_dict_value_63);
        assert(!(tmp_res != 0));


        tmp_assign_source_71 = MAKE_FUNCTION_idna$uts46data$$$function__63__seg_62(tmp_annotations_63);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[160], tmp_assign_source_71);
    }
    {
        PyObject *tmp_assign_source_72;
        PyObject *tmp_annotations_64;
        PyObject *tmp_dict_key_64;
        PyObject *tmp_dict_value_64;
        PyObject *tmp_expression_name_253;
        PyObject *tmp_subscript_name_253;
        PyObject *tmp_expression_name_254;
        PyObject *tmp_subscript_name_254;
        PyObject *tmp_tuple_element_64;
        PyObject *tmp_expression_name_255;
        PyObject *tmp_subscript_name_255;
        tmp_dict_key_64 = mod_consts[95];
        tmp_expression_name_253 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_name_253 == NULL)) {
            tmp_expression_name_253 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_name_253 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6563;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_254 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_expression_name_254 == NULL)) {
            tmp_expression_name_254 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        if (tmp_expression_name_254 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6563;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_255 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_name_255 == NULL)) {
            tmp_expression_name_255 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_name_255 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6563;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_255 = mod_consts[96];
        tmp_tuple_element_64 = LOOKUP_SUBSCRIPT(tmp_expression_name_255, tmp_subscript_name_255);
        if (tmp_tuple_element_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6563;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_254 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_256;
            PyObject *tmp_subscript_name_256;
            PyTuple_SET_ITEM(tmp_subscript_name_254, 0, tmp_tuple_element_64);
            tmp_expression_name_256 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

            if (unlikely(tmp_expression_name_256 == NULL)) {
                tmp_expression_name_256 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
            }

            if (tmp_expression_name_256 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 6563;

                goto tuple_build_exception_64;
            }
            tmp_subscript_name_256 = mod_consts[97];
            tmp_tuple_element_64 = LOOKUP_SUBSCRIPT(tmp_expression_name_256, tmp_subscript_name_256);
            if (tmp_tuple_element_64 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 6563;

                goto tuple_build_exception_64;
            }
            PyTuple_SET_ITEM(tmp_subscript_name_254, 1, tmp_tuple_element_64);
        }
        goto tuple_build_noexception_64;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_64:;
        Py_DECREF(tmp_subscript_name_254);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_64:;
        tmp_subscript_name_253 = LOOKUP_SUBSCRIPT(tmp_expression_name_254, tmp_subscript_name_254);
        Py_DECREF(tmp_subscript_name_254);
        if (tmp_subscript_name_253 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6563;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_64 = LOOKUP_SUBSCRIPT(tmp_expression_name_253, tmp_subscript_name_253);
        Py_DECREF(tmp_subscript_name_253);
        if (tmp_dict_value_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6563;

            goto frame_exception_exit_1;
        }
        tmp_annotations_64 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_64, tmp_dict_key_64, tmp_dict_value_64);
        Py_DECREF(tmp_dict_value_64);
        assert(!(tmp_res != 0));


        tmp_assign_source_72 = MAKE_FUNCTION_idna$uts46data$$$function__64__seg_63(tmp_annotations_64);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[161], tmp_assign_source_72);
    }
    {
        PyObject *tmp_assign_source_73;
        PyObject *tmp_annotations_65;
        PyObject *tmp_dict_key_65;
        PyObject *tmp_dict_value_65;
        PyObject *tmp_expression_name_257;
        PyObject *tmp_subscript_name_257;
        PyObject *tmp_expression_name_258;
        PyObject *tmp_subscript_name_258;
        PyObject *tmp_tuple_element_65;
        PyObject *tmp_expression_name_259;
        PyObject *tmp_subscript_name_259;
        tmp_dict_key_65 = mod_consts[95];
        tmp_expression_name_257 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_name_257 == NULL)) {
            tmp_expression_name_257 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_name_257 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6667;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_258 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_expression_name_258 == NULL)) {
            tmp_expression_name_258 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        if (tmp_expression_name_258 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6667;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_259 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_name_259 == NULL)) {
            tmp_expression_name_259 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_name_259 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6667;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_259 = mod_consts[96];
        tmp_tuple_element_65 = LOOKUP_SUBSCRIPT(tmp_expression_name_259, tmp_subscript_name_259);
        if (tmp_tuple_element_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6667;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_258 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_260;
            PyObject *tmp_subscript_name_260;
            PyTuple_SET_ITEM(tmp_subscript_name_258, 0, tmp_tuple_element_65);
            tmp_expression_name_260 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

            if (unlikely(tmp_expression_name_260 == NULL)) {
                tmp_expression_name_260 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
            }

            if (tmp_expression_name_260 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 6667;

                goto tuple_build_exception_65;
            }
            tmp_subscript_name_260 = mod_consts[97];
            tmp_tuple_element_65 = LOOKUP_SUBSCRIPT(tmp_expression_name_260, tmp_subscript_name_260);
            if (tmp_tuple_element_65 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 6667;

                goto tuple_build_exception_65;
            }
            PyTuple_SET_ITEM(tmp_subscript_name_258, 1, tmp_tuple_element_65);
        }
        goto tuple_build_noexception_65;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_65:;
        Py_DECREF(tmp_subscript_name_258);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_65:;
        tmp_subscript_name_257 = LOOKUP_SUBSCRIPT(tmp_expression_name_258, tmp_subscript_name_258);
        Py_DECREF(tmp_subscript_name_258);
        if (tmp_subscript_name_257 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6667;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_65 = LOOKUP_SUBSCRIPT(tmp_expression_name_257, tmp_subscript_name_257);
        Py_DECREF(tmp_subscript_name_257);
        if (tmp_dict_value_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6667;

            goto frame_exception_exit_1;
        }
        tmp_annotations_65 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_65, tmp_dict_key_65, tmp_dict_value_65);
        Py_DECREF(tmp_dict_value_65);
        assert(!(tmp_res != 0));


        tmp_assign_source_73 = MAKE_FUNCTION_idna$uts46data$$$function__65__seg_64(tmp_annotations_65);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[162], tmp_assign_source_73);
    }
    {
        PyObject *tmp_assign_source_74;
        PyObject *tmp_annotations_66;
        PyObject *tmp_dict_key_66;
        PyObject *tmp_dict_value_66;
        PyObject *tmp_expression_name_261;
        PyObject *tmp_subscript_name_261;
        PyObject *tmp_expression_name_262;
        PyObject *tmp_subscript_name_262;
        PyObject *tmp_tuple_element_66;
        PyObject *tmp_expression_name_263;
        PyObject *tmp_subscript_name_263;
        tmp_dict_key_66 = mod_consts[95];
        tmp_expression_name_261 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_name_261 == NULL)) {
            tmp_expression_name_261 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_name_261 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6771;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_262 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_expression_name_262 == NULL)) {
            tmp_expression_name_262 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        if (tmp_expression_name_262 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6771;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_263 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_name_263 == NULL)) {
            tmp_expression_name_263 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_name_263 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6771;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_263 = mod_consts[96];
        tmp_tuple_element_66 = LOOKUP_SUBSCRIPT(tmp_expression_name_263, tmp_subscript_name_263);
        if (tmp_tuple_element_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6771;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_262 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_264;
            PyObject *tmp_subscript_name_264;
            PyTuple_SET_ITEM(tmp_subscript_name_262, 0, tmp_tuple_element_66);
            tmp_expression_name_264 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

            if (unlikely(tmp_expression_name_264 == NULL)) {
                tmp_expression_name_264 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
            }

            if (tmp_expression_name_264 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 6771;

                goto tuple_build_exception_66;
            }
            tmp_subscript_name_264 = mod_consts[97];
            tmp_tuple_element_66 = LOOKUP_SUBSCRIPT(tmp_expression_name_264, tmp_subscript_name_264);
            if (tmp_tuple_element_66 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 6771;

                goto tuple_build_exception_66;
            }
            PyTuple_SET_ITEM(tmp_subscript_name_262, 1, tmp_tuple_element_66);
        }
        goto tuple_build_noexception_66;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_66:;
        Py_DECREF(tmp_subscript_name_262);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_66:;
        tmp_subscript_name_261 = LOOKUP_SUBSCRIPT(tmp_expression_name_262, tmp_subscript_name_262);
        Py_DECREF(tmp_subscript_name_262);
        if (tmp_subscript_name_261 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6771;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_66 = LOOKUP_SUBSCRIPT(tmp_expression_name_261, tmp_subscript_name_261);
        Py_DECREF(tmp_subscript_name_261);
        if (tmp_dict_value_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6771;

            goto frame_exception_exit_1;
        }
        tmp_annotations_66 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_66, tmp_dict_key_66, tmp_dict_value_66);
        Py_DECREF(tmp_dict_value_66);
        assert(!(tmp_res != 0));


        tmp_assign_source_74 = MAKE_FUNCTION_idna$uts46data$$$function__66__seg_65(tmp_annotations_66);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[163], tmp_assign_source_74);
    }
    {
        PyObject *tmp_assign_source_75;
        PyObject *tmp_annotations_67;
        PyObject *tmp_dict_key_67;
        PyObject *tmp_dict_value_67;
        PyObject *tmp_expression_name_265;
        PyObject *tmp_subscript_name_265;
        PyObject *tmp_expression_name_266;
        PyObject *tmp_subscript_name_266;
        PyObject *tmp_tuple_element_67;
        PyObject *tmp_expression_name_267;
        PyObject *tmp_subscript_name_267;
        tmp_dict_key_67 = mod_consts[95];
        tmp_expression_name_265 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_name_265 == NULL)) {
            tmp_expression_name_265 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_name_265 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6875;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_266 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_expression_name_266 == NULL)) {
            tmp_expression_name_266 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        if (tmp_expression_name_266 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6875;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_267 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_name_267 == NULL)) {
            tmp_expression_name_267 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_name_267 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6875;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_267 = mod_consts[96];
        tmp_tuple_element_67 = LOOKUP_SUBSCRIPT(tmp_expression_name_267, tmp_subscript_name_267);
        if (tmp_tuple_element_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6875;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_266 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_268;
            PyObject *tmp_subscript_name_268;
            PyTuple_SET_ITEM(tmp_subscript_name_266, 0, tmp_tuple_element_67);
            tmp_expression_name_268 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

            if (unlikely(tmp_expression_name_268 == NULL)) {
                tmp_expression_name_268 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
            }

            if (tmp_expression_name_268 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 6875;

                goto tuple_build_exception_67;
            }
            tmp_subscript_name_268 = mod_consts[97];
            tmp_tuple_element_67 = LOOKUP_SUBSCRIPT(tmp_expression_name_268, tmp_subscript_name_268);
            if (tmp_tuple_element_67 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 6875;

                goto tuple_build_exception_67;
            }
            PyTuple_SET_ITEM(tmp_subscript_name_266, 1, tmp_tuple_element_67);
        }
        goto tuple_build_noexception_67;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_67:;
        Py_DECREF(tmp_subscript_name_266);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_67:;
        tmp_subscript_name_265 = LOOKUP_SUBSCRIPT(tmp_expression_name_266, tmp_subscript_name_266);
        Py_DECREF(tmp_subscript_name_266);
        if (tmp_subscript_name_265 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6875;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_67 = LOOKUP_SUBSCRIPT(tmp_expression_name_265, tmp_subscript_name_265);
        Py_DECREF(tmp_subscript_name_265);
        if (tmp_dict_value_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6875;

            goto frame_exception_exit_1;
        }
        tmp_annotations_67 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_67, tmp_dict_key_67, tmp_dict_value_67);
        Py_DECREF(tmp_dict_value_67);
        assert(!(tmp_res != 0));


        tmp_assign_source_75 = MAKE_FUNCTION_idna$uts46data$$$function__67__seg_66(tmp_annotations_67);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[164], tmp_assign_source_75);
    }
    {
        PyObject *tmp_assign_source_76;
        PyObject *tmp_annotations_68;
        PyObject *tmp_dict_key_68;
        PyObject *tmp_dict_value_68;
        PyObject *tmp_expression_name_269;
        PyObject *tmp_subscript_name_269;
        PyObject *tmp_expression_name_270;
        PyObject *tmp_subscript_name_270;
        PyObject *tmp_tuple_element_68;
        PyObject *tmp_expression_name_271;
        PyObject *tmp_subscript_name_271;
        tmp_dict_key_68 = mod_consts[95];
        tmp_expression_name_269 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_name_269 == NULL)) {
            tmp_expression_name_269 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_name_269 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6979;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_270 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_expression_name_270 == NULL)) {
            tmp_expression_name_270 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        if (tmp_expression_name_270 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6979;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_271 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_name_271 == NULL)) {
            tmp_expression_name_271 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_name_271 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6979;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_271 = mod_consts[96];
        tmp_tuple_element_68 = LOOKUP_SUBSCRIPT(tmp_expression_name_271, tmp_subscript_name_271);
        if (tmp_tuple_element_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6979;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_270 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_272;
            PyObject *tmp_subscript_name_272;
            PyTuple_SET_ITEM(tmp_subscript_name_270, 0, tmp_tuple_element_68);
            tmp_expression_name_272 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

            if (unlikely(tmp_expression_name_272 == NULL)) {
                tmp_expression_name_272 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
            }

            if (tmp_expression_name_272 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 6979;

                goto tuple_build_exception_68;
            }
            tmp_subscript_name_272 = mod_consts[97];
            tmp_tuple_element_68 = LOOKUP_SUBSCRIPT(tmp_expression_name_272, tmp_subscript_name_272);
            if (tmp_tuple_element_68 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 6979;

                goto tuple_build_exception_68;
            }
            PyTuple_SET_ITEM(tmp_subscript_name_270, 1, tmp_tuple_element_68);
        }
        goto tuple_build_noexception_68;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_68:;
        Py_DECREF(tmp_subscript_name_270);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_68:;
        tmp_subscript_name_269 = LOOKUP_SUBSCRIPT(tmp_expression_name_270, tmp_subscript_name_270);
        Py_DECREF(tmp_subscript_name_270);
        if (tmp_subscript_name_269 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6979;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_68 = LOOKUP_SUBSCRIPT(tmp_expression_name_269, tmp_subscript_name_269);
        Py_DECREF(tmp_subscript_name_269);
        if (tmp_dict_value_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6979;

            goto frame_exception_exit_1;
        }
        tmp_annotations_68 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_68, tmp_dict_key_68, tmp_dict_value_68);
        Py_DECREF(tmp_dict_value_68);
        assert(!(tmp_res != 0));


        tmp_assign_source_76 = MAKE_FUNCTION_idna$uts46data$$$function__68__seg_67(tmp_annotations_68);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[165], tmp_assign_source_76);
    }
    {
        PyObject *tmp_assign_source_77;
        PyObject *tmp_annotations_69;
        PyObject *tmp_dict_key_69;
        PyObject *tmp_dict_value_69;
        PyObject *tmp_expression_name_273;
        PyObject *tmp_subscript_name_273;
        PyObject *tmp_expression_name_274;
        PyObject *tmp_subscript_name_274;
        PyObject *tmp_tuple_element_69;
        PyObject *tmp_expression_name_275;
        PyObject *tmp_subscript_name_275;
        tmp_dict_key_69 = mod_consts[95];
        tmp_expression_name_273 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_name_273 == NULL)) {
            tmp_expression_name_273 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_name_273 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7083;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_274 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_expression_name_274 == NULL)) {
            tmp_expression_name_274 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        if (tmp_expression_name_274 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7083;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_275 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_name_275 == NULL)) {
            tmp_expression_name_275 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_name_275 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7083;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_275 = mod_consts[96];
        tmp_tuple_element_69 = LOOKUP_SUBSCRIPT(tmp_expression_name_275, tmp_subscript_name_275);
        if (tmp_tuple_element_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7083;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_274 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_276;
            PyObject *tmp_subscript_name_276;
            PyTuple_SET_ITEM(tmp_subscript_name_274, 0, tmp_tuple_element_69);
            tmp_expression_name_276 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

            if (unlikely(tmp_expression_name_276 == NULL)) {
                tmp_expression_name_276 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
            }

            if (tmp_expression_name_276 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 7083;

                goto tuple_build_exception_69;
            }
            tmp_subscript_name_276 = mod_consts[97];
            tmp_tuple_element_69 = LOOKUP_SUBSCRIPT(tmp_expression_name_276, tmp_subscript_name_276);
            if (tmp_tuple_element_69 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 7083;

                goto tuple_build_exception_69;
            }
            PyTuple_SET_ITEM(tmp_subscript_name_274, 1, tmp_tuple_element_69);
        }
        goto tuple_build_noexception_69;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_69:;
        Py_DECREF(tmp_subscript_name_274);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_69:;
        tmp_subscript_name_273 = LOOKUP_SUBSCRIPT(tmp_expression_name_274, tmp_subscript_name_274);
        Py_DECREF(tmp_subscript_name_274);
        if (tmp_subscript_name_273 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7083;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_69 = LOOKUP_SUBSCRIPT(tmp_expression_name_273, tmp_subscript_name_273);
        Py_DECREF(tmp_subscript_name_273);
        if (tmp_dict_value_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7083;

            goto frame_exception_exit_1;
        }
        tmp_annotations_69 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_69, tmp_dict_key_69, tmp_dict_value_69);
        Py_DECREF(tmp_dict_value_69);
        assert(!(tmp_res != 0));


        tmp_assign_source_77 = MAKE_FUNCTION_idna$uts46data$$$function__69__seg_68(tmp_annotations_69);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[166], tmp_assign_source_77);
    }
    {
        PyObject *tmp_assign_source_78;
        PyObject *tmp_annotations_70;
        PyObject *tmp_dict_key_70;
        PyObject *tmp_dict_value_70;
        PyObject *tmp_expression_name_277;
        PyObject *tmp_subscript_name_277;
        PyObject *tmp_expression_name_278;
        PyObject *tmp_subscript_name_278;
        PyObject *tmp_tuple_element_70;
        PyObject *tmp_expression_name_279;
        PyObject *tmp_subscript_name_279;
        tmp_dict_key_70 = mod_consts[95];
        tmp_expression_name_277 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_name_277 == NULL)) {
            tmp_expression_name_277 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_name_277 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7187;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_278 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_expression_name_278 == NULL)) {
            tmp_expression_name_278 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        if (tmp_expression_name_278 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7187;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_279 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_name_279 == NULL)) {
            tmp_expression_name_279 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_name_279 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7187;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_279 = mod_consts[96];
        tmp_tuple_element_70 = LOOKUP_SUBSCRIPT(tmp_expression_name_279, tmp_subscript_name_279);
        if (tmp_tuple_element_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7187;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_278 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_280;
            PyObject *tmp_subscript_name_280;
            PyTuple_SET_ITEM(tmp_subscript_name_278, 0, tmp_tuple_element_70);
            tmp_expression_name_280 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

            if (unlikely(tmp_expression_name_280 == NULL)) {
                tmp_expression_name_280 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
            }

            if (tmp_expression_name_280 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 7187;

                goto tuple_build_exception_70;
            }
            tmp_subscript_name_280 = mod_consts[97];
            tmp_tuple_element_70 = LOOKUP_SUBSCRIPT(tmp_expression_name_280, tmp_subscript_name_280);
            if (tmp_tuple_element_70 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 7187;

                goto tuple_build_exception_70;
            }
            PyTuple_SET_ITEM(tmp_subscript_name_278, 1, tmp_tuple_element_70);
        }
        goto tuple_build_noexception_70;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_70:;
        Py_DECREF(tmp_subscript_name_278);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_70:;
        tmp_subscript_name_277 = LOOKUP_SUBSCRIPT(tmp_expression_name_278, tmp_subscript_name_278);
        Py_DECREF(tmp_subscript_name_278);
        if (tmp_subscript_name_277 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7187;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_70 = LOOKUP_SUBSCRIPT(tmp_expression_name_277, tmp_subscript_name_277);
        Py_DECREF(tmp_subscript_name_277);
        if (tmp_dict_value_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7187;

            goto frame_exception_exit_1;
        }
        tmp_annotations_70 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_70, tmp_dict_key_70, tmp_dict_value_70);
        Py_DECREF(tmp_dict_value_70);
        assert(!(tmp_res != 0));


        tmp_assign_source_78 = MAKE_FUNCTION_idna$uts46data$$$function__70__seg_69(tmp_annotations_70);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[167], tmp_assign_source_78);
    }
    {
        PyObject *tmp_assign_source_79;
        PyObject *tmp_annotations_71;
        PyObject *tmp_dict_key_71;
        PyObject *tmp_dict_value_71;
        PyObject *tmp_expression_name_281;
        PyObject *tmp_subscript_name_281;
        PyObject *tmp_expression_name_282;
        PyObject *tmp_subscript_name_282;
        PyObject *tmp_tuple_element_71;
        PyObject *tmp_expression_name_283;
        PyObject *tmp_subscript_name_283;
        tmp_dict_key_71 = mod_consts[95];
        tmp_expression_name_281 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_name_281 == NULL)) {
            tmp_expression_name_281 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_name_281 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7291;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_282 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_expression_name_282 == NULL)) {
            tmp_expression_name_282 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        if (tmp_expression_name_282 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7291;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_283 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_name_283 == NULL)) {
            tmp_expression_name_283 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_name_283 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7291;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_283 = mod_consts[96];
        tmp_tuple_element_71 = LOOKUP_SUBSCRIPT(tmp_expression_name_283, tmp_subscript_name_283);
        if (tmp_tuple_element_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7291;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_282 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_284;
            PyObject *tmp_subscript_name_284;
            PyTuple_SET_ITEM(tmp_subscript_name_282, 0, tmp_tuple_element_71);
            tmp_expression_name_284 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

            if (unlikely(tmp_expression_name_284 == NULL)) {
                tmp_expression_name_284 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
            }

            if (tmp_expression_name_284 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 7291;

                goto tuple_build_exception_71;
            }
            tmp_subscript_name_284 = mod_consts[97];
            tmp_tuple_element_71 = LOOKUP_SUBSCRIPT(tmp_expression_name_284, tmp_subscript_name_284);
            if (tmp_tuple_element_71 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 7291;

                goto tuple_build_exception_71;
            }
            PyTuple_SET_ITEM(tmp_subscript_name_282, 1, tmp_tuple_element_71);
        }
        goto tuple_build_noexception_71;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_71:;
        Py_DECREF(tmp_subscript_name_282);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_71:;
        tmp_subscript_name_281 = LOOKUP_SUBSCRIPT(tmp_expression_name_282, tmp_subscript_name_282);
        Py_DECREF(tmp_subscript_name_282);
        if (tmp_subscript_name_281 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7291;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_71 = LOOKUP_SUBSCRIPT(tmp_expression_name_281, tmp_subscript_name_281);
        Py_DECREF(tmp_subscript_name_281);
        if (tmp_dict_value_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7291;

            goto frame_exception_exit_1;
        }
        tmp_annotations_71 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_71, tmp_dict_key_71, tmp_dict_value_71);
        Py_DECREF(tmp_dict_value_71);
        assert(!(tmp_res != 0));


        tmp_assign_source_79 = MAKE_FUNCTION_idna$uts46data$$$function__71__seg_70(tmp_annotations_71);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[168], tmp_assign_source_79);
    }
    {
        PyObject *tmp_assign_source_80;
        PyObject *tmp_annotations_72;
        PyObject *tmp_dict_key_72;
        PyObject *tmp_dict_value_72;
        PyObject *tmp_expression_name_285;
        PyObject *tmp_subscript_name_285;
        PyObject *tmp_expression_name_286;
        PyObject *tmp_subscript_name_286;
        PyObject *tmp_tuple_element_72;
        PyObject *tmp_expression_name_287;
        PyObject *tmp_subscript_name_287;
        tmp_dict_key_72 = mod_consts[95];
        tmp_expression_name_285 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_name_285 == NULL)) {
            tmp_expression_name_285 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_name_285 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7395;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_286 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_expression_name_286 == NULL)) {
            tmp_expression_name_286 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        if (tmp_expression_name_286 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7395;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_287 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_name_287 == NULL)) {
            tmp_expression_name_287 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_name_287 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7395;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_287 = mod_consts[96];
        tmp_tuple_element_72 = LOOKUP_SUBSCRIPT(tmp_expression_name_287, tmp_subscript_name_287);
        if (tmp_tuple_element_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7395;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_286 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_288;
            PyObject *tmp_subscript_name_288;
            PyTuple_SET_ITEM(tmp_subscript_name_286, 0, tmp_tuple_element_72);
            tmp_expression_name_288 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

            if (unlikely(tmp_expression_name_288 == NULL)) {
                tmp_expression_name_288 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
            }

            if (tmp_expression_name_288 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 7395;

                goto tuple_build_exception_72;
            }
            tmp_subscript_name_288 = mod_consts[97];
            tmp_tuple_element_72 = LOOKUP_SUBSCRIPT(tmp_expression_name_288, tmp_subscript_name_288);
            if (tmp_tuple_element_72 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 7395;

                goto tuple_build_exception_72;
            }
            PyTuple_SET_ITEM(tmp_subscript_name_286, 1, tmp_tuple_element_72);
        }
        goto tuple_build_noexception_72;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_72:;
        Py_DECREF(tmp_subscript_name_286);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_72:;
        tmp_subscript_name_285 = LOOKUP_SUBSCRIPT(tmp_expression_name_286, tmp_subscript_name_286);
        Py_DECREF(tmp_subscript_name_286);
        if (tmp_subscript_name_285 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7395;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_72 = LOOKUP_SUBSCRIPT(tmp_expression_name_285, tmp_subscript_name_285);
        Py_DECREF(tmp_subscript_name_285);
        if (tmp_dict_value_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7395;

            goto frame_exception_exit_1;
        }
        tmp_annotations_72 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_72, tmp_dict_key_72, tmp_dict_value_72);
        Py_DECREF(tmp_dict_value_72);
        assert(!(tmp_res != 0));


        tmp_assign_source_80 = MAKE_FUNCTION_idna$uts46data$$$function__72__seg_71(tmp_annotations_72);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[169], tmp_assign_source_80);
    }
    {
        PyObject *tmp_assign_source_81;
        PyObject *tmp_annotations_73;
        PyObject *tmp_dict_key_73;
        PyObject *tmp_dict_value_73;
        PyObject *tmp_expression_name_289;
        PyObject *tmp_subscript_name_289;
        PyObject *tmp_expression_name_290;
        PyObject *tmp_subscript_name_290;
        PyObject *tmp_tuple_element_73;
        PyObject *tmp_expression_name_291;
        PyObject *tmp_subscript_name_291;
        tmp_dict_key_73 = mod_consts[95];
        tmp_expression_name_289 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_name_289 == NULL)) {
            tmp_expression_name_289 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_name_289 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7499;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_290 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_expression_name_290 == NULL)) {
            tmp_expression_name_290 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        if (tmp_expression_name_290 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7499;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_291 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_name_291 == NULL)) {
            tmp_expression_name_291 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_name_291 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7499;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_291 = mod_consts[96];
        tmp_tuple_element_73 = LOOKUP_SUBSCRIPT(tmp_expression_name_291, tmp_subscript_name_291);
        if (tmp_tuple_element_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7499;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_290 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_292;
            PyObject *tmp_subscript_name_292;
            PyTuple_SET_ITEM(tmp_subscript_name_290, 0, tmp_tuple_element_73);
            tmp_expression_name_292 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

            if (unlikely(tmp_expression_name_292 == NULL)) {
                tmp_expression_name_292 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
            }

            if (tmp_expression_name_292 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 7499;

                goto tuple_build_exception_73;
            }
            tmp_subscript_name_292 = mod_consts[97];
            tmp_tuple_element_73 = LOOKUP_SUBSCRIPT(tmp_expression_name_292, tmp_subscript_name_292);
            if (tmp_tuple_element_73 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 7499;

                goto tuple_build_exception_73;
            }
            PyTuple_SET_ITEM(tmp_subscript_name_290, 1, tmp_tuple_element_73);
        }
        goto tuple_build_noexception_73;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_73:;
        Py_DECREF(tmp_subscript_name_290);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_73:;
        tmp_subscript_name_289 = LOOKUP_SUBSCRIPT(tmp_expression_name_290, tmp_subscript_name_290);
        Py_DECREF(tmp_subscript_name_290);
        if (tmp_subscript_name_289 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7499;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_73 = LOOKUP_SUBSCRIPT(tmp_expression_name_289, tmp_subscript_name_289);
        Py_DECREF(tmp_subscript_name_289);
        if (tmp_dict_value_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7499;

            goto frame_exception_exit_1;
        }
        tmp_annotations_73 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_73, tmp_dict_key_73, tmp_dict_value_73);
        Py_DECREF(tmp_dict_value_73);
        assert(!(tmp_res != 0));


        tmp_assign_source_81 = MAKE_FUNCTION_idna$uts46data$$$function__73__seg_72(tmp_annotations_73);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[170], tmp_assign_source_81);
    }
    {
        PyObject *tmp_assign_source_82;
        PyObject *tmp_annotations_74;
        PyObject *tmp_dict_key_74;
        PyObject *tmp_dict_value_74;
        PyObject *tmp_expression_name_293;
        PyObject *tmp_subscript_name_293;
        PyObject *tmp_expression_name_294;
        PyObject *tmp_subscript_name_294;
        PyObject *tmp_tuple_element_74;
        PyObject *tmp_expression_name_295;
        PyObject *tmp_subscript_name_295;
        tmp_dict_key_74 = mod_consts[95];
        tmp_expression_name_293 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_name_293 == NULL)) {
            tmp_expression_name_293 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_name_293 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7603;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_294 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_expression_name_294 == NULL)) {
            tmp_expression_name_294 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        if (tmp_expression_name_294 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7603;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_295 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_name_295 == NULL)) {
            tmp_expression_name_295 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_name_295 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7603;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_295 = mod_consts[96];
        tmp_tuple_element_74 = LOOKUP_SUBSCRIPT(tmp_expression_name_295, tmp_subscript_name_295);
        if (tmp_tuple_element_74 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7603;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_294 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_296;
            PyObject *tmp_subscript_name_296;
            PyTuple_SET_ITEM(tmp_subscript_name_294, 0, tmp_tuple_element_74);
            tmp_expression_name_296 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

            if (unlikely(tmp_expression_name_296 == NULL)) {
                tmp_expression_name_296 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
            }

            if (tmp_expression_name_296 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 7603;

                goto tuple_build_exception_74;
            }
            tmp_subscript_name_296 = mod_consts[97];
            tmp_tuple_element_74 = LOOKUP_SUBSCRIPT(tmp_expression_name_296, tmp_subscript_name_296);
            if (tmp_tuple_element_74 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 7603;

                goto tuple_build_exception_74;
            }
            PyTuple_SET_ITEM(tmp_subscript_name_294, 1, tmp_tuple_element_74);
        }
        goto tuple_build_noexception_74;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_74:;
        Py_DECREF(tmp_subscript_name_294);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_74:;
        tmp_subscript_name_293 = LOOKUP_SUBSCRIPT(tmp_expression_name_294, tmp_subscript_name_294);
        Py_DECREF(tmp_subscript_name_294);
        if (tmp_subscript_name_293 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7603;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_74 = LOOKUP_SUBSCRIPT(tmp_expression_name_293, tmp_subscript_name_293);
        Py_DECREF(tmp_subscript_name_293);
        if (tmp_dict_value_74 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7603;

            goto frame_exception_exit_1;
        }
        tmp_annotations_74 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_74, tmp_dict_key_74, tmp_dict_value_74);
        Py_DECREF(tmp_dict_value_74);
        assert(!(tmp_res != 0));


        tmp_assign_source_82 = MAKE_FUNCTION_idna$uts46data$$$function__74__seg_73(tmp_annotations_74);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[171], tmp_assign_source_82);
    }
    {
        PyObject *tmp_assign_source_83;
        PyObject *tmp_annotations_75;
        PyObject *tmp_dict_key_75;
        PyObject *tmp_dict_value_75;
        PyObject *tmp_expression_name_297;
        PyObject *tmp_subscript_name_297;
        PyObject *tmp_expression_name_298;
        PyObject *tmp_subscript_name_298;
        PyObject *tmp_tuple_element_75;
        PyObject *tmp_expression_name_299;
        PyObject *tmp_subscript_name_299;
        tmp_dict_key_75 = mod_consts[95];
        tmp_expression_name_297 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_name_297 == NULL)) {
            tmp_expression_name_297 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_name_297 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7707;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_298 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_expression_name_298 == NULL)) {
            tmp_expression_name_298 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        if (tmp_expression_name_298 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7707;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_299 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_name_299 == NULL)) {
            tmp_expression_name_299 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_name_299 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7707;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_299 = mod_consts[96];
        tmp_tuple_element_75 = LOOKUP_SUBSCRIPT(tmp_expression_name_299, tmp_subscript_name_299);
        if (tmp_tuple_element_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7707;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_298 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_300;
            PyObject *tmp_subscript_name_300;
            PyTuple_SET_ITEM(tmp_subscript_name_298, 0, tmp_tuple_element_75);
            tmp_expression_name_300 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

            if (unlikely(tmp_expression_name_300 == NULL)) {
                tmp_expression_name_300 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
            }

            if (tmp_expression_name_300 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 7707;

                goto tuple_build_exception_75;
            }
            tmp_subscript_name_300 = mod_consts[97];
            tmp_tuple_element_75 = LOOKUP_SUBSCRIPT(tmp_expression_name_300, tmp_subscript_name_300);
            if (tmp_tuple_element_75 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 7707;

                goto tuple_build_exception_75;
            }
            PyTuple_SET_ITEM(tmp_subscript_name_298, 1, tmp_tuple_element_75);
        }
        goto tuple_build_noexception_75;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_75:;
        Py_DECREF(tmp_subscript_name_298);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_75:;
        tmp_subscript_name_297 = LOOKUP_SUBSCRIPT(tmp_expression_name_298, tmp_subscript_name_298);
        Py_DECREF(tmp_subscript_name_298);
        if (tmp_subscript_name_297 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7707;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_75 = LOOKUP_SUBSCRIPT(tmp_expression_name_297, tmp_subscript_name_297);
        Py_DECREF(tmp_subscript_name_297);
        if (tmp_dict_value_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7707;

            goto frame_exception_exit_1;
        }
        tmp_annotations_75 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_75, tmp_dict_key_75, tmp_dict_value_75);
        Py_DECREF(tmp_dict_value_75);
        assert(!(tmp_res != 0));


        tmp_assign_source_83 = MAKE_FUNCTION_idna$uts46data$$$function__75__seg_74(tmp_annotations_75);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[172], tmp_assign_source_83);
    }
    {
        PyObject *tmp_assign_source_84;
        PyObject *tmp_annotations_76;
        PyObject *tmp_dict_key_76;
        PyObject *tmp_dict_value_76;
        PyObject *tmp_expression_name_301;
        PyObject *tmp_subscript_name_301;
        PyObject *tmp_expression_name_302;
        PyObject *tmp_subscript_name_302;
        PyObject *tmp_tuple_element_76;
        PyObject *tmp_expression_name_303;
        PyObject *tmp_subscript_name_303;
        tmp_dict_key_76 = mod_consts[95];
        tmp_expression_name_301 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_name_301 == NULL)) {
            tmp_expression_name_301 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_name_301 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7811;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_302 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_expression_name_302 == NULL)) {
            tmp_expression_name_302 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        if (tmp_expression_name_302 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7811;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_303 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_name_303 == NULL)) {
            tmp_expression_name_303 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_name_303 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7811;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_303 = mod_consts[96];
        tmp_tuple_element_76 = LOOKUP_SUBSCRIPT(tmp_expression_name_303, tmp_subscript_name_303);
        if (tmp_tuple_element_76 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7811;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_302 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_304;
            PyObject *tmp_subscript_name_304;
            PyTuple_SET_ITEM(tmp_subscript_name_302, 0, tmp_tuple_element_76);
            tmp_expression_name_304 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

            if (unlikely(tmp_expression_name_304 == NULL)) {
                tmp_expression_name_304 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
            }

            if (tmp_expression_name_304 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 7811;

                goto tuple_build_exception_76;
            }
            tmp_subscript_name_304 = mod_consts[97];
            tmp_tuple_element_76 = LOOKUP_SUBSCRIPT(tmp_expression_name_304, tmp_subscript_name_304);
            if (tmp_tuple_element_76 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 7811;

                goto tuple_build_exception_76;
            }
            PyTuple_SET_ITEM(tmp_subscript_name_302, 1, tmp_tuple_element_76);
        }
        goto tuple_build_noexception_76;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_76:;
        Py_DECREF(tmp_subscript_name_302);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_76:;
        tmp_subscript_name_301 = LOOKUP_SUBSCRIPT(tmp_expression_name_302, tmp_subscript_name_302);
        Py_DECREF(tmp_subscript_name_302);
        if (tmp_subscript_name_301 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7811;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_76 = LOOKUP_SUBSCRIPT(tmp_expression_name_301, tmp_subscript_name_301);
        Py_DECREF(tmp_subscript_name_301);
        if (tmp_dict_value_76 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7811;

            goto frame_exception_exit_1;
        }
        tmp_annotations_76 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_76, tmp_dict_key_76, tmp_dict_value_76);
        Py_DECREF(tmp_dict_value_76);
        assert(!(tmp_res != 0));


        tmp_assign_source_84 = MAKE_FUNCTION_idna$uts46data$$$function__76__seg_75(tmp_annotations_76);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[173], tmp_assign_source_84);
    }
    {
        PyObject *tmp_assign_source_85;
        PyObject *tmp_annotations_77;
        PyObject *tmp_dict_key_77;
        PyObject *tmp_dict_value_77;
        PyObject *tmp_expression_name_305;
        PyObject *tmp_subscript_name_305;
        PyObject *tmp_expression_name_306;
        PyObject *tmp_subscript_name_306;
        PyObject *tmp_tuple_element_77;
        PyObject *tmp_expression_name_307;
        PyObject *tmp_subscript_name_307;
        tmp_dict_key_77 = mod_consts[95];
        tmp_expression_name_305 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_name_305 == NULL)) {
            tmp_expression_name_305 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_name_305 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7915;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_306 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_expression_name_306 == NULL)) {
            tmp_expression_name_306 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        if (tmp_expression_name_306 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7915;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_307 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_name_307 == NULL)) {
            tmp_expression_name_307 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_name_307 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7915;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_307 = mod_consts[96];
        tmp_tuple_element_77 = LOOKUP_SUBSCRIPT(tmp_expression_name_307, tmp_subscript_name_307);
        if (tmp_tuple_element_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7915;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_306 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_308;
            PyObject *tmp_subscript_name_308;
            PyTuple_SET_ITEM(tmp_subscript_name_306, 0, tmp_tuple_element_77);
            tmp_expression_name_308 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

            if (unlikely(tmp_expression_name_308 == NULL)) {
                tmp_expression_name_308 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
            }

            if (tmp_expression_name_308 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 7915;

                goto tuple_build_exception_77;
            }
            tmp_subscript_name_308 = mod_consts[97];
            tmp_tuple_element_77 = LOOKUP_SUBSCRIPT(tmp_expression_name_308, tmp_subscript_name_308);
            if (tmp_tuple_element_77 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 7915;

                goto tuple_build_exception_77;
            }
            PyTuple_SET_ITEM(tmp_subscript_name_306, 1, tmp_tuple_element_77);
        }
        goto tuple_build_noexception_77;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_77:;
        Py_DECREF(tmp_subscript_name_306);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_77:;
        tmp_subscript_name_305 = LOOKUP_SUBSCRIPT(tmp_expression_name_306, tmp_subscript_name_306);
        Py_DECREF(tmp_subscript_name_306);
        if (tmp_subscript_name_305 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7915;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_77 = LOOKUP_SUBSCRIPT(tmp_expression_name_305, tmp_subscript_name_305);
        Py_DECREF(tmp_subscript_name_305);
        if (tmp_dict_value_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7915;

            goto frame_exception_exit_1;
        }
        tmp_annotations_77 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_77, tmp_dict_key_77, tmp_dict_value_77);
        Py_DECREF(tmp_dict_value_77);
        assert(!(tmp_res != 0));


        tmp_assign_source_85 = MAKE_FUNCTION_idna$uts46data$$$function__77__seg_76(tmp_annotations_77);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[174], tmp_assign_source_85);
    }
    {
        PyObject *tmp_assign_source_86;
        PyObject *tmp_annotations_78;
        PyObject *tmp_dict_key_78;
        PyObject *tmp_dict_value_78;
        PyObject *tmp_expression_name_309;
        PyObject *tmp_subscript_name_309;
        PyObject *tmp_expression_name_310;
        PyObject *tmp_subscript_name_310;
        PyObject *tmp_tuple_element_78;
        PyObject *tmp_expression_name_311;
        PyObject *tmp_subscript_name_311;
        tmp_dict_key_78 = mod_consts[95];
        tmp_expression_name_309 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_name_309 == NULL)) {
            tmp_expression_name_309 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_name_309 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8019;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_310 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_expression_name_310 == NULL)) {
            tmp_expression_name_310 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        if (tmp_expression_name_310 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8019;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_311 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_name_311 == NULL)) {
            tmp_expression_name_311 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_name_311 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8019;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_311 = mod_consts[96];
        tmp_tuple_element_78 = LOOKUP_SUBSCRIPT(tmp_expression_name_311, tmp_subscript_name_311);
        if (tmp_tuple_element_78 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8019;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_310 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_312;
            PyObject *tmp_subscript_name_312;
            PyTuple_SET_ITEM(tmp_subscript_name_310, 0, tmp_tuple_element_78);
            tmp_expression_name_312 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

            if (unlikely(tmp_expression_name_312 == NULL)) {
                tmp_expression_name_312 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
            }

            if (tmp_expression_name_312 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 8019;

                goto tuple_build_exception_78;
            }
            tmp_subscript_name_312 = mod_consts[97];
            tmp_tuple_element_78 = LOOKUP_SUBSCRIPT(tmp_expression_name_312, tmp_subscript_name_312);
            if (tmp_tuple_element_78 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 8019;

                goto tuple_build_exception_78;
            }
            PyTuple_SET_ITEM(tmp_subscript_name_310, 1, tmp_tuple_element_78);
        }
        goto tuple_build_noexception_78;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_78:;
        Py_DECREF(tmp_subscript_name_310);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_78:;
        tmp_subscript_name_309 = LOOKUP_SUBSCRIPT(tmp_expression_name_310, tmp_subscript_name_310);
        Py_DECREF(tmp_subscript_name_310);
        if (tmp_subscript_name_309 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8019;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_78 = LOOKUP_SUBSCRIPT(tmp_expression_name_309, tmp_subscript_name_309);
        Py_DECREF(tmp_subscript_name_309);
        if (tmp_dict_value_78 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8019;

            goto frame_exception_exit_1;
        }
        tmp_annotations_78 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_78, tmp_dict_key_78, tmp_dict_value_78);
        Py_DECREF(tmp_dict_value_78);
        assert(!(tmp_res != 0));


        tmp_assign_source_86 = MAKE_FUNCTION_idna$uts46data$$$function__78__seg_77(tmp_annotations_78);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[175], tmp_assign_source_86);
    }
    {
        PyObject *tmp_assign_source_87;
        PyObject *tmp_annotations_79;
        PyObject *tmp_dict_key_79;
        PyObject *tmp_dict_value_79;
        PyObject *tmp_expression_name_313;
        PyObject *tmp_subscript_name_313;
        PyObject *tmp_expression_name_314;
        PyObject *tmp_subscript_name_314;
        PyObject *tmp_tuple_element_79;
        PyObject *tmp_expression_name_315;
        PyObject *tmp_subscript_name_315;
        tmp_dict_key_79 = mod_consts[95];
        tmp_expression_name_313 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_name_313 == NULL)) {
            tmp_expression_name_313 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_name_313 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8123;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_314 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_expression_name_314 == NULL)) {
            tmp_expression_name_314 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        if (tmp_expression_name_314 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8123;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_315 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_name_315 == NULL)) {
            tmp_expression_name_315 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_name_315 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8123;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_315 = mod_consts[96];
        tmp_tuple_element_79 = LOOKUP_SUBSCRIPT(tmp_expression_name_315, tmp_subscript_name_315);
        if (tmp_tuple_element_79 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8123;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_314 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_316;
            PyObject *tmp_subscript_name_316;
            PyTuple_SET_ITEM(tmp_subscript_name_314, 0, tmp_tuple_element_79);
            tmp_expression_name_316 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

            if (unlikely(tmp_expression_name_316 == NULL)) {
                tmp_expression_name_316 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
            }

            if (tmp_expression_name_316 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 8123;

                goto tuple_build_exception_79;
            }
            tmp_subscript_name_316 = mod_consts[97];
            tmp_tuple_element_79 = LOOKUP_SUBSCRIPT(tmp_expression_name_316, tmp_subscript_name_316);
            if (tmp_tuple_element_79 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 8123;

                goto tuple_build_exception_79;
            }
            PyTuple_SET_ITEM(tmp_subscript_name_314, 1, tmp_tuple_element_79);
        }
        goto tuple_build_noexception_79;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_79:;
        Py_DECREF(tmp_subscript_name_314);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_79:;
        tmp_subscript_name_313 = LOOKUP_SUBSCRIPT(tmp_expression_name_314, tmp_subscript_name_314);
        Py_DECREF(tmp_subscript_name_314);
        if (tmp_subscript_name_313 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8123;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_79 = LOOKUP_SUBSCRIPT(tmp_expression_name_313, tmp_subscript_name_313);
        Py_DECREF(tmp_subscript_name_313);
        if (tmp_dict_value_79 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8123;

            goto frame_exception_exit_1;
        }
        tmp_annotations_79 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_79, tmp_dict_key_79, tmp_dict_value_79);
        Py_DECREF(tmp_dict_value_79);
        assert(!(tmp_res != 0));


        tmp_assign_source_87 = MAKE_FUNCTION_idna$uts46data$$$function__79__seg_78(tmp_annotations_79);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[176], tmp_assign_source_87);
    }
    {
        PyObject *tmp_assign_source_88;
        PyObject *tmp_annotations_80;
        PyObject *tmp_dict_key_80;
        PyObject *tmp_dict_value_80;
        PyObject *tmp_expression_name_317;
        PyObject *tmp_subscript_name_317;
        PyObject *tmp_expression_name_318;
        PyObject *tmp_subscript_name_318;
        PyObject *tmp_tuple_element_80;
        PyObject *tmp_expression_name_319;
        PyObject *tmp_subscript_name_319;
        tmp_dict_key_80 = mod_consts[95];
        tmp_expression_name_317 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_name_317 == NULL)) {
            tmp_expression_name_317 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_name_317 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8227;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_318 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_expression_name_318 == NULL)) {
            tmp_expression_name_318 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        if (tmp_expression_name_318 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8227;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_319 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_name_319 == NULL)) {
            tmp_expression_name_319 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_name_319 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8227;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_319 = mod_consts[96];
        tmp_tuple_element_80 = LOOKUP_SUBSCRIPT(tmp_expression_name_319, tmp_subscript_name_319);
        if (tmp_tuple_element_80 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8227;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_318 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_320;
            PyObject *tmp_subscript_name_320;
            PyTuple_SET_ITEM(tmp_subscript_name_318, 0, tmp_tuple_element_80);
            tmp_expression_name_320 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

            if (unlikely(tmp_expression_name_320 == NULL)) {
                tmp_expression_name_320 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
            }

            if (tmp_expression_name_320 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 8227;

                goto tuple_build_exception_80;
            }
            tmp_subscript_name_320 = mod_consts[97];
            tmp_tuple_element_80 = LOOKUP_SUBSCRIPT(tmp_expression_name_320, tmp_subscript_name_320);
            if (tmp_tuple_element_80 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 8227;

                goto tuple_build_exception_80;
            }
            PyTuple_SET_ITEM(tmp_subscript_name_318, 1, tmp_tuple_element_80);
        }
        goto tuple_build_noexception_80;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_80:;
        Py_DECREF(tmp_subscript_name_318);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_80:;
        tmp_subscript_name_317 = LOOKUP_SUBSCRIPT(tmp_expression_name_318, tmp_subscript_name_318);
        Py_DECREF(tmp_subscript_name_318);
        if (tmp_subscript_name_317 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8227;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_80 = LOOKUP_SUBSCRIPT(tmp_expression_name_317, tmp_subscript_name_317);
        Py_DECREF(tmp_subscript_name_317);
        if (tmp_dict_value_80 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8227;

            goto frame_exception_exit_1;
        }
        tmp_annotations_80 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_80, tmp_dict_key_80, tmp_dict_value_80);
        Py_DECREF(tmp_dict_value_80);
        assert(!(tmp_res != 0));


        tmp_assign_source_88 = MAKE_FUNCTION_idna$uts46data$$$function__80__seg_79(tmp_annotations_80);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[177], tmp_assign_source_88);
    }
    {
        PyObject *tmp_assign_source_89;
        PyObject *tmp_annotations_81;
        PyObject *tmp_dict_key_81;
        PyObject *tmp_dict_value_81;
        PyObject *tmp_expression_name_321;
        PyObject *tmp_subscript_name_321;
        PyObject *tmp_expression_name_322;
        PyObject *tmp_subscript_name_322;
        PyObject *tmp_tuple_element_81;
        PyObject *tmp_expression_name_323;
        PyObject *tmp_subscript_name_323;
        tmp_dict_key_81 = mod_consts[95];
        tmp_expression_name_321 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_name_321 == NULL)) {
            tmp_expression_name_321 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_name_321 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8331;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_322 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_expression_name_322 == NULL)) {
            tmp_expression_name_322 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        if (tmp_expression_name_322 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8331;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_323 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_name_323 == NULL)) {
            tmp_expression_name_323 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_name_323 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8331;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_323 = mod_consts[96];
        tmp_tuple_element_81 = LOOKUP_SUBSCRIPT(tmp_expression_name_323, tmp_subscript_name_323);
        if (tmp_tuple_element_81 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8331;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_322 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_324;
            PyObject *tmp_subscript_name_324;
            PyTuple_SET_ITEM(tmp_subscript_name_322, 0, tmp_tuple_element_81);
            tmp_expression_name_324 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

            if (unlikely(tmp_expression_name_324 == NULL)) {
                tmp_expression_name_324 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
            }

            if (tmp_expression_name_324 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 8331;

                goto tuple_build_exception_81;
            }
            tmp_subscript_name_324 = mod_consts[97];
            tmp_tuple_element_81 = LOOKUP_SUBSCRIPT(tmp_expression_name_324, tmp_subscript_name_324);
            if (tmp_tuple_element_81 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 8331;

                goto tuple_build_exception_81;
            }
            PyTuple_SET_ITEM(tmp_subscript_name_322, 1, tmp_tuple_element_81);
        }
        goto tuple_build_noexception_81;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_81:;
        Py_DECREF(tmp_subscript_name_322);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_81:;
        tmp_subscript_name_321 = LOOKUP_SUBSCRIPT(tmp_expression_name_322, tmp_subscript_name_322);
        Py_DECREF(tmp_subscript_name_322);
        if (tmp_subscript_name_321 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8331;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_81 = LOOKUP_SUBSCRIPT(tmp_expression_name_321, tmp_subscript_name_321);
        Py_DECREF(tmp_subscript_name_321);
        if (tmp_dict_value_81 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8331;

            goto frame_exception_exit_1;
        }
        tmp_annotations_81 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_81, tmp_dict_key_81, tmp_dict_value_81);
        Py_DECREF(tmp_dict_value_81);
        assert(!(tmp_res != 0));


        tmp_assign_source_89 = MAKE_FUNCTION_idna$uts46data$$$function__81__seg_80(tmp_annotations_81);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[178], tmp_assign_source_89);
    }
    {
        PyObject *tmp_assign_source_90;
        PyObject *tmp_tuple_arg_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_left_name_3;
        PyObject *tmp_left_name_4;
        PyObject *tmp_left_name_5;
        PyObject *tmp_left_name_6;
        PyObject *tmp_left_name_7;
        PyObject *tmp_left_name_8;
        PyObject *tmp_left_name_9;
        PyObject *tmp_left_name_10;
        PyObject *tmp_left_name_11;
        PyObject *tmp_left_name_12;
        PyObject *tmp_left_name_13;
        PyObject *tmp_left_name_14;
        PyObject *tmp_left_name_15;
        PyObject *tmp_left_name_16;
        PyObject *tmp_left_name_17;
        PyObject *tmp_left_name_18;
        PyObject *tmp_left_name_19;
        PyObject *tmp_left_name_20;
        PyObject *tmp_left_name_21;
        PyObject *tmp_left_name_22;
        PyObject *tmp_left_name_23;
        PyObject *tmp_left_name_24;
        PyObject *tmp_left_name_25;
        PyObject *tmp_left_name_26;
        PyObject *tmp_left_name_27;
        PyObject *tmp_left_name_28;
        PyObject *tmp_left_name_29;
        PyObject *tmp_left_name_30;
        PyObject *tmp_left_name_31;
        PyObject *tmp_left_name_32;
        PyObject *tmp_left_name_33;
        PyObject *tmp_left_name_34;
        PyObject *tmp_left_name_35;
        PyObject *tmp_left_name_36;
        PyObject *tmp_left_name_37;
        PyObject *tmp_left_name_38;
        PyObject *tmp_left_name_39;
        PyObject *tmp_left_name_40;
        PyObject *tmp_left_name_41;
        PyObject *tmp_left_name_42;
        PyObject *tmp_left_name_43;
        PyObject *tmp_left_name_44;
        PyObject *tmp_left_name_45;
        PyObject *tmp_left_name_46;
        PyObject *tmp_left_name_47;
        PyObject *tmp_left_name_48;
        PyObject *tmp_left_name_49;
        PyObject *tmp_left_name_50;
        PyObject *tmp_left_name_51;
        PyObject *tmp_left_name_52;
        PyObject *tmp_left_name_53;
        PyObject *tmp_left_name_54;
        PyObject *tmp_left_name_55;
        PyObject *tmp_left_name_56;
        PyObject *tmp_left_name_57;
        PyObject *tmp_left_name_58;
        PyObject *tmp_left_name_59;
        PyObject *tmp_left_name_60;
        PyObject *tmp_left_name_61;
        PyObject *tmp_left_name_62;
        PyObject *tmp_left_name_63;
        PyObject *tmp_left_name_64;
        PyObject *tmp_left_name_65;
        PyObject *tmp_left_name_66;
        PyObject *tmp_left_name_67;
        PyObject *tmp_left_name_68;
        PyObject *tmp_left_name_69;
        PyObject *tmp_left_name_70;
        PyObject *tmp_left_name_71;
        PyObject *tmp_left_name_72;
        PyObject *tmp_left_name_73;
        PyObject *tmp_left_name_74;
        PyObject *tmp_left_name_75;
        PyObject *tmp_left_name_76;
        PyObject *tmp_left_name_77;
        PyObject *tmp_left_name_78;
        PyObject *tmp_left_name_79;
        PyObject *tmp_left_name_80;
        PyObject *tmp_called_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_right_name_2;
        PyObject *tmp_called_name_3;
        PyObject *tmp_right_name_3;
        PyObject *tmp_called_name_4;
        PyObject *tmp_right_name_4;
        PyObject *tmp_called_name_5;
        PyObject *tmp_right_name_5;
        PyObject *tmp_called_name_6;
        PyObject *tmp_right_name_6;
        PyObject *tmp_called_name_7;
        PyObject *tmp_right_name_7;
        PyObject *tmp_called_name_8;
        PyObject *tmp_right_name_8;
        PyObject *tmp_called_name_9;
        PyObject *tmp_right_name_9;
        PyObject *tmp_called_name_10;
        PyObject *tmp_right_name_10;
        PyObject *tmp_called_name_11;
        PyObject *tmp_right_name_11;
        PyObject *tmp_called_name_12;
        PyObject *tmp_right_name_12;
        PyObject *tmp_called_name_13;
        PyObject *tmp_right_name_13;
        PyObject *tmp_called_name_14;
        PyObject *tmp_right_name_14;
        PyObject *tmp_called_name_15;
        PyObject *tmp_right_name_15;
        PyObject *tmp_called_name_16;
        PyObject *tmp_right_name_16;
        PyObject *tmp_called_name_17;
        PyObject *tmp_right_name_17;
        PyObject *tmp_called_name_18;
        PyObject *tmp_right_name_18;
        PyObject *tmp_called_name_19;
        PyObject *tmp_right_name_19;
        PyObject *tmp_called_name_20;
        PyObject *tmp_right_name_20;
        PyObject *tmp_called_name_21;
        PyObject *tmp_right_name_21;
        PyObject *tmp_called_name_22;
        PyObject *tmp_right_name_22;
        PyObject *tmp_called_name_23;
        PyObject *tmp_right_name_23;
        PyObject *tmp_called_name_24;
        PyObject *tmp_right_name_24;
        PyObject *tmp_called_name_25;
        PyObject *tmp_right_name_25;
        PyObject *tmp_called_name_26;
        PyObject *tmp_right_name_26;
        PyObject *tmp_called_name_27;
        PyObject *tmp_right_name_27;
        PyObject *tmp_called_name_28;
        PyObject *tmp_right_name_28;
        PyObject *tmp_called_name_29;
        PyObject *tmp_right_name_29;
        PyObject *tmp_called_name_30;
        PyObject *tmp_right_name_30;
        PyObject *tmp_called_name_31;
        PyObject *tmp_right_name_31;
        PyObject *tmp_called_name_32;
        PyObject *tmp_right_name_32;
        PyObject *tmp_called_name_33;
        PyObject *tmp_right_name_33;
        PyObject *tmp_called_name_34;
        PyObject *tmp_right_name_34;
        PyObject *tmp_called_name_35;
        PyObject *tmp_right_name_35;
        PyObject *tmp_called_name_36;
        PyObject *tmp_right_name_36;
        PyObject *tmp_called_name_37;
        PyObject *tmp_right_name_37;
        PyObject *tmp_called_name_38;
        PyObject *tmp_right_name_38;
        PyObject *tmp_called_name_39;
        PyObject *tmp_right_name_39;
        PyObject *tmp_called_name_40;
        PyObject *tmp_right_name_40;
        PyObject *tmp_called_name_41;
        PyObject *tmp_right_name_41;
        PyObject *tmp_called_name_42;
        PyObject *tmp_right_name_42;
        PyObject *tmp_called_name_43;
        PyObject *tmp_right_name_43;
        PyObject *tmp_called_name_44;
        PyObject *tmp_right_name_44;
        PyObject *tmp_called_name_45;
        PyObject *tmp_right_name_45;
        PyObject *tmp_called_name_46;
        PyObject *tmp_right_name_46;
        PyObject *tmp_called_name_47;
        PyObject *tmp_right_name_47;
        PyObject *tmp_called_name_48;
        PyObject *tmp_right_name_48;
        PyObject *tmp_called_name_49;
        PyObject *tmp_right_name_49;
        PyObject *tmp_called_name_50;
        PyObject *tmp_right_name_50;
        PyObject *tmp_called_name_51;
        PyObject *tmp_right_name_51;
        PyObject *tmp_called_name_52;
        PyObject *tmp_right_name_52;
        PyObject *tmp_called_name_53;
        PyObject *tmp_right_name_53;
        PyObject *tmp_called_name_54;
        PyObject *tmp_right_name_54;
        PyObject *tmp_called_name_55;
        PyObject *tmp_right_name_55;
        PyObject *tmp_called_name_56;
        PyObject *tmp_right_name_56;
        PyObject *tmp_called_name_57;
        PyObject *tmp_right_name_57;
        PyObject *tmp_called_name_58;
        PyObject *tmp_right_name_58;
        PyObject *tmp_called_name_59;
        PyObject *tmp_right_name_59;
        PyObject *tmp_called_name_60;
        PyObject *tmp_right_name_60;
        PyObject *tmp_called_name_61;
        PyObject *tmp_right_name_61;
        PyObject *tmp_called_name_62;
        PyObject *tmp_right_name_62;
        PyObject *tmp_called_name_63;
        PyObject *tmp_right_name_63;
        PyObject *tmp_called_name_64;
        PyObject *tmp_right_name_64;
        PyObject *tmp_called_name_65;
        PyObject *tmp_right_name_65;
        PyObject *tmp_called_name_66;
        PyObject *tmp_right_name_66;
        PyObject *tmp_called_name_67;
        PyObject *tmp_right_name_67;
        PyObject *tmp_called_name_68;
        PyObject *tmp_right_name_68;
        PyObject *tmp_called_name_69;
        PyObject *tmp_right_name_69;
        PyObject *tmp_called_name_70;
        PyObject *tmp_right_name_70;
        PyObject *tmp_called_name_71;
        PyObject *tmp_right_name_71;
        PyObject *tmp_called_name_72;
        PyObject *tmp_right_name_72;
        PyObject *tmp_called_name_73;
        PyObject *tmp_right_name_73;
        PyObject *tmp_called_name_74;
        PyObject *tmp_right_name_74;
        PyObject *tmp_called_name_75;
        PyObject *tmp_right_name_75;
        PyObject *tmp_called_name_76;
        PyObject *tmp_right_name_76;
        PyObject *tmp_called_name_77;
        PyObject *tmp_right_name_77;
        PyObject *tmp_called_name_78;
        PyObject *tmp_right_name_78;
        PyObject *tmp_called_name_79;
        PyObject *tmp_right_name_79;
        PyObject *tmp_called_name_80;
        PyObject *tmp_right_name_80;
        PyObject *tmp_called_name_81;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[98]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[98]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8431;

            goto frame_exception_exit_1;
        }
        frame_47b1429513e72d7c4d7611e800671b6c->m_frame.f_lineno = 8431;
        tmp_left_name_80 = CALL_FUNCTION_NO_ARGS(tmp_called_name_1);
        if (tmp_left_name_80 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8431;

            goto frame_exception_exit_1;
        }
        tmp_called_name_2 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[99]);

        if (unlikely(tmp_called_name_2 == NULL)) {
            tmp_called_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[99]);
        }

        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_80);

            exception_lineno = 8432;

            goto frame_exception_exit_1;
        }
        frame_47b1429513e72d7c4d7611e800671b6c->m_frame.f_lineno = 8432;
        tmp_right_name_1 = CALL_FUNCTION_NO_ARGS(tmp_called_name_2);
        if (tmp_right_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_80);

            exception_lineno = 8432;

            goto frame_exception_exit_1;
        }
        tmp_left_name_79 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_80, tmp_right_name_1);
        Py_DECREF(tmp_left_name_80);
        Py_DECREF(tmp_right_name_1);
        if (tmp_left_name_79 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8432;

            goto frame_exception_exit_1;
        }
        tmp_called_name_3 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[100]);

        if (unlikely(tmp_called_name_3 == NULL)) {
            tmp_called_name_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[100]);
        }

        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_79);

            exception_lineno = 8433;

            goto frame_exception_exit_1;
        }
        frame_47b1429513e72d7c4d7611e800671b6c->m_frame.f_lineno = 8433;
        tmp_right_name_2 = CALL_FUNCTION_NO_ARGS(tmp_called_name_3);
        if (tmp_right_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_79);

            exception_lineno = 8433;

            goto frame_exception_exit_1;
        }
        tmp_left_name_78 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_79, tmp_right_name_2);
        Py_DECREF(tmp_left_name_79);
        Py_DECREF(tmp_right_name_2);
        if (tmp_left_name_78 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8433;

            goto frame_exception_exit_1;
        }
        tmp_called_name_4 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[101]);

        if (unlikely(tmp_called_name_4 == NULL)) {
            tmp_called_name_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[101]);
        }

        if (tmp_called_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_78);

            exception_lineno = 8434;

            goto frame_exception_exit_1;
        }
        frame_47b1429513e72d7c4d7611e800671b6c->m_frame.f_lineno = 8434;
        tmp_right_name_3 = CALL_FUNCTION_NO_ARGS(tmp_called_name_4);
        if (tmp_right_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_78);

            exception_lineno = 8434;

            goto frame_exception_exit_1;
        }
        tmp_left_name_77 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_78, tmp_right_name_3);
        Py_DECREF(tmp_left_name_78);
        Py_DECREF(tmp_right_name_3);
        if (tmp_left_name_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8434;

            goto frame_exception_exit_1;
        }
        tmp_called_name_5 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[102]);

        if (unlikely(tmp_called_name_5 == NULL)) {
            tmp_called_name_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
        }

        if (tmp_called_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_77);

            exception_lineno = 8435;

            goto frame_exception_exit_1;
        }
        frame_47b1429513e72d7c4d7611e800671b6c->m_frame.f_lineno = 8435;
        tmp_right_name_4 = CALL_FUNCTION_NO_ARGS(tmp_called_name_5);
        if (tmp_right_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_77);

            exception_lineno = 8435;

            goto frame_exception_exit_1;
        }
        tmp_left_name_76 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_77, tmp_right_name_4);
        Py_DECREF(tmp_left_name_77);
        Py_DECREF(tmp_right_name_4);
        if (tmp_left_name_76 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8435;

            goto frame_exception_exit_1;
        }
        tmp_called_name_6 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[103]);

        if (unlikely(tmp_called_name_6 == NULL)) {
            tmp_called_name_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[103]);
        }

        if (tmp_called_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_76);

            exception_lineno = 8436;

            goto frame_exception_exit_1;
        }
        frame_47b1429513e72d7c4d7611e800671b6c->m_frame.f_lineno = 8436;
        tmp_right_name_5 = CALL_FUNCTION_NO_ARGS(tmp_called_name_6);
        if (tmp_right_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_76);

            exception_lineno = 8436;

            goto frame_exception_exit_1;
        }
        tmp_left_name_75 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_76, tmp_right_name_5);
        Py_DECREF(tmp_left_name_76);
        Py_DECREF(tmp_right_name_5);
        if (tmp_left_name_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8436;

            goto frame_exception_exit_1;
        }
        tmp_called_name_7 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[104]);

        if (unlikely(tmp_called_name_7 == NULL)) {
            tmp_called_name_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[104]);
        }

        if (tmp_called_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_75);

            exception_lineno = 8437;

            goto frame_exception_exit_1;
        }
        frame_47b1429513e72d7c4d7611e800671b6c->m_frame.f_lineno = 8437;
        tmp_right_name_6 = CALL_FUNCTION_NO_ARGS(tmp_called_name_7);
        if (tmp_right_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_75);

            exception_lineno = 8437;

            goto frame_exception_exit_1;
        }
        tmp_left_name_74 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_75, tmp_right_name_6);
        Py_DECREF(tmp_left_name_75);
        Py_DECREF(tmp_right_name_6);
        if (tmp_left_name_74 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8437;

            goto frame_exception_exit_1;
        }
        tmp_called_name_8 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[105]);

        if (unlikely(tmp_called_name_8 == NULL)) {
            tmp_called_name_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[105]);
        }

        if (tmp_called_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_74);

            exception_lineno = 8438;

            goto frame_exception_exit_1;
        }
        frame_47b1429513e72d7c4d7611e800671b6c->m_frame.f_lineno = 8438;
        tmp_right_name_7 = CALL_FUNCTION_NO_ARGS(tmp_called_name_8);
        if (tmp_right_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_74);

            exception_lineno = 8438;

            goto frame_exception_exit_1;
        }
        tmp_left_name_73 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_74, tmp_right_name_7);
        Py_DECREF(tmp_left_name_74);
        Py_DECREF(tmp_right_name_7);
        if (tmp_left_name_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8438;

            goto frame_exception_exit_1;
        }
        tmp_called_name_9 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[106]);

        if (unlikely(tmp_called_name_9 == NULL)) {
            tmp_called_name_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[106]);
        }

        if (tmp_called_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_73);

            exception_lineno = 8439;

            goto frame_exception_exit_1;
        }
        frame_47b1429513e72d7c4d7611e800671b6c->m_frame.f_lineno = 8439;
        tmp_right_name_8 = CALL_FUNCTION_NO_ARGS(tmp_called_name_9);
        if (tmp_right_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_73);

            exception_lineno = 8439;

            goto frame_exception_exit_1;
        }
        tmp_left_name_72 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_73, tmp_right_name_8);
        Py_DECREF(tmp_left_name_73);
        Py_DECREF(tmp_right_name_8);
        if (tmp_left_name_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8439;

            goto frame_exception_exit_1;
        }
        tmp_called_name_10 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[107]);

        if (unlikely(tmp_called_name_10 == NULL)) {
            tmp_called_name_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[107]);
        }

        if (tmp_called_name_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_72);

            exception_lineno = 8440;

            goto frame_exception_exit_1;
        }
        frame_47b1429513e72d7c4d7611e800671b6c->m_frame.f_lineno = 8440;
        tmp_right_name_9 = CALL_FUNCTION_NO_ARGS(tmp_called_name_10);
        if (tmp_right_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_72);

            exception_lineno = 8440;

            goto frame_exception_exit_1;
        }
        tmp_left_name_71 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_72, tmp_right_name_9);
        Py_DECREF(tmp_left_name_72);
        Py_DECREF(tmp_right_name_9);
        if (tmp_left_name_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8440;

            goto frame_exception_exit_1;
        }
        tmp_called_name_11 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_called_name_11 == NULL)) {
            tmp_called_name_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[108]);
        }

        if (tmp_called_name_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_71);

            exception_lineno = 8441;

            goto frame_exception_exit_1;
        }
        frame_47b1429513e72d7c4d7611e800671b6c->m_frame.f_lineno = 8441;
        tmp_right_name_10 = CALL_FUNCTION_NO_ARGS(tmp_called_name_11);
        if (tmp_right_name_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_71);

            exception_lineno = 8441;

            goto frame_exception_exit_1;
        }
        tmp_left_name_70 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_71, tmp_right_name_10);
        Py_DECREF(tmp_left_name_71);
        Py_DECREF(tmp_right_name_10);
        if (tmp_left_name_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8441;

            goto frame_exception_exit_1;
        }
        tmp_called_name_12 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[109]);

        if (unlikely(tmp_called_name_12 == NULL)) {
            tmp_called_name_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[109]);
        }

        if (tmp_called_name_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_70);

            exception_lineno = 8442;

            goto frame_exception_exit_1;
        }
        frame_47b1429513e72d7c4d7611e800671b6c->m_frame.f_lineno = 8442;
        tmp_right_name_11 = CALL_FUNCTION_NO_ARGS(tmp_called_name_12);
        if (tmp_right_name_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_70);

            exception_lineno = 8442;

            goto frame_exception_exit_1;
        }
        tmp_left_name_69 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_70, tmp_right_name_11);
        Py_DECREF(tmp_left_name_70);
        Py_DECREF(tmp_right_name_11);
        if (tmp_left_name_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8442;

            goto frame_exception_exit_1;
        }
        tmp_called_name_13 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[110]);

        if (unlikely(tmp_called_name_13 == NULL)) {
            tmp_called_name_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[110]);
        }

        if (tmp_called_name_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_69);

            exception_lineno = 8443;

            goto frame_exception_exit_1;
        }
        frame_47b1429513e72d7c4d7611e800671b6c->m_frame.f_lineno = 8443;
        tmp_right_name_12 = CALL_FUNCTION_NO_ARGS(tmp_called_name_13);
        if (tmp_right_name_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_69);

            exception_lineno = 8443;

            goto frame_exception_exit_1;
        }
        tmp_left_name_68 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_69, tmp_right_name_12);
        Py_DECREF(tmp_left_name_69);
        Py_DECREF(tmp_right_name_12);
        if (tmp_left_name_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8443;

            goto frame_exception_exit_1;
        }
        tmp_called_name_14 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[111]);

        if (unlikely(tmp_called_name_14 == NULL)) {
            tmp_called_name_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[111]);
        }

        if (tmp_called_name_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_68);

            exception_lineno = 8444;

            goto frame_exception_exit_1;
        }
        frame_47b1429513e72d7c4d7611e800671b6c->m_frame.f_lineno = 8444;
        tmp_right_name_13 = CALL_FUNCTION_NO_ARGS(tmp_called_name_14);
        if (tmp_right_name_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_68);

            exception_lineno = 8444;

            goto frame_exception_exit_1;
        }
        tmp_left_name_67 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_68, tmp_right_name_13);
        Py_DECREF(tmp_left_name_68);
        Py_DECREF(tmp_right_name_13);
        if (tmp_left_name_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8444;

            goto frame_exception_exit_1;
        }
        tmp_called_name_15 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_called_name_15 == NULL)) {
            tmp_called_name_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[112]);
        }

        if (tmp_called_name_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_67);

            exception_lineno = 8445;

            goto frame_exception_exit_1;
        }
        frame_47b1429513e72d7c4d7611e800671b6c->m_frame.f_lineno = 8445;
        tmp_right_name_14 = CALL_FUNCTION_NO_ARGS(tmp_called_name_15);
        if (tmp_right_name_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_67);

            exception_lineno = 8445;

            goto frame_exception_exit_1;
        }
        tmp_left_name_66 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_67, tmp_right_name_14);
        Py_DECREF(tmp_left_name_67);
        Py_DECREF(tmp_right_name_14);
        if (tmp_left_name_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8445;

            goto frame_exception_exit_1;
        }
        tmp_called_name_16 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[113]);

        if (unlikely(tmp_called_name_16 == NULL)) {
            tmp_called_name_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[113]);
        }

        if (tmp_called_name_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_66);

            exception_lineno = 8446;

            goto frame_exception_exit_1;
        }
        frame_47b1429513e72d7c4d7611e800671b6c->m_frame.f_lineno = 8446;
        tmp_right_name_15 = CALL_FUNCTION_NO_ARGS(tmp_called_name_16);
        if (tmp_right_name_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_66);

            exception_lineno = 8446;

            goto frame_exception_exit_1;
        }
        tmp_left_name_65 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_66, tmp_right_name_15);
        Py_DECREF(tmp_left_name_66);
        Py_DECREF(tmp_right_name_15);
        if (tmp_left_name_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8446;

            goto frame_exception_exit_1;
        }
        tmp_called_name_17 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[114]);

        if (unlikely(tmp_called_name_17 == NULL)) {
            tmp_called_name_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[114]);
        }

        if (tmp_called_name_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_65);

            exception_lineno = 8447;

            goto frame_exception_exit_1;
        }
        frame_47b1429513e72d7c4d7611e800671b6c->m_frame.f_lineno = 8447;
        tmp_right_name_16 = CALL_FUNCTION_NO_ARGS(tmp_called_name_17);
        if (tmp_right_name_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_65);

            exception_lineno = 8447;

            goto frame_exception_exit_1;
        }
        tmp_left_name_64 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_65, tmp_right_name_16);
        Py_DECREF(tmp_left_name_65);
        Py_DECREF(tmp_right_name_16);
        if (tmp_left_name_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8447;

            goto frame_exception_exit_1;
        }
        tmp_called_name_18 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[115]);

        if (unlikely(tmp_called_name_18 == NULL)) {
            tmp_called_name_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[115]);
        }

        if (tmp_called_name_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_64);

            exception_lineno = 8448;

            goto frame_exception_exit_1;
        }
        frame_47b1429513e72d7c4d7611e800671b6c->m_frame.f_lineno = 8448;
        tmp_right_name_17 = CALL_FUNCTION_NO_ARGS(tmp_called_name_18);
        if (tmp_right_name_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_64);

            exception_lineno = 8448;

            goto frame_exception_exit_1;
        }
        tmp_left_name_63 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_64, tmp_right_name_17);
        Py_DECREF(tmp_left_name_64);
        Py_DECREF(tmp_right_name_17);
        if (tmp_left_name_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8448;

            goto frame_exception_exit_1;
        }
        tmp_called_name_19 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_called_name_19 == NULL)) {
            tmp_called_name_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_called_name_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_63);

            exception_lineno = 8449;

            goto frame_exception_exit_1;
        }
        frame_47b1429513e72d7c4d7611e800671b6c->m_frame.f_lineno = 8449;
        tmp_right_name_18 = CALL_FUNCTION_NO_ARGS(tmp_called_name_19);
        if (tmp_right_name_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_63);

            exception_lineno = 8449;

            goto frame_exception_exit_1;
        }
        tmp_left_name_62 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_63, tmp_right_name_18);
        Py_DECREF(tmp_left_name_63);
        Py_DECREF(tmp_right_name_18);
        if (tmp_left_name_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8449;

            goto frame_exception_exit_1;
        }
        tmp_called_name_20 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[117]);

        if (unlikely(tmp_called_name_20 == NULL)) {
            tmp_called_name_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[117]);
        }

        if (tmp_called_name_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_62);

            exception_lineno = 8450;

            goto frame_exception_exit_1;
        }
        frame_47b1429513e72d7c4d7611e800671b6c->m_frame.f_lineno = 8450;
        tmp_right_name_19 = CALL_FUNCTION_NO_ARGS(tmp_called_name_20);
        if (tmp_right_name_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_62);

            exception_lineno = 8450;

            goto frame_exception_exit_1;
        }
        tmp_left_name_61 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_62, tmp_right_name_19);
        Py_DECREF(tmp_left_name_62);
        Py_DECREF(tmp_right_name_19);
        if (tmp_left_name_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8450;

            goto frame_exception_exit_1;
        }
        tmp_called_name_21 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[118]);

        if (unlikely(tmp_called_name_21 == NULL)) {
            tmp_called_name_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[118]);
        }

        if (tmp_called_name_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_61);

            exception_lineno = 8451;

            goto frame_exception_exit_1;
        }
        frame_47b1429513e72d7c4d7611e800671b6c->m_frame.f_lineno = 8451;
        tmp_right_name_20 = CALL_FUNCTION_NO_ARGS(tmp_called_name_21);
        if (tmp_right_name_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_61);

            exception_lineno = 8451;

            goto frame_exception_exit_1;
        }
        tmp_left_name_60 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_61, tmp_right_name_20);
        Py_DECREF(tmp_left_name_61);
        Py_DECREF(tmp_right_name_20);
        if (tmp_left_name_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8451;

            goto frame_exception_exit_1;
        }
        tmp_called_name_22 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[119]);

        if (unlikely(tmp_called_name_22 == NULL)) {
            tmp_called_name_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[119]);
        }

        if (tmp_called_name_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_60);

            exception_lineno = 8452;

            goto frame_exception_exit_1;
        }
        frame_47b1429513e72d7c4d7611e800671b6c->m_frame.f_lineno = 8452;
        tmp_right_name_21 = CALL_FUNCTION_NO_ARGS(tmp_called_name_22);
        if (tmp_right_name_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_60);

            exception_lineno = 8452;

            goto frame_exception_exit_1;
        }
        tmp_left_name_59 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_60, tmp_right_name_21);
        Py_DECREF(tmp_left_name_60);
        Py_DECREF(tmp_right_name_21);
        if (tmp_left_name_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8452;

            goto frame_exception_exit_1;
        }
        tmp_called_name_23 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[120]);

        if (unlikely(tmp_called_name_23 == NULL)) {
            tmp_called_name_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[120]);
        }

        if (tmp_called_name_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_59);

            exception_lineno = 8453;

            goto frame_exception_exit_1;
        }
        frame_47b1429513e72d7c4d7611e800671b6c->m_frame.f_lineno = 8453;
        tmp_right_name_22 = CALL_FUNCTION_NO_ARGS(tmp_called_name_23);
        if (tmp_right_name_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_59);

            exception_lineno = 8453;

            goto frame_exception_exit_1;
        }
        tmp_left_name_58 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_59, tmp_right_name_22);
        Py_DECREF(tmp_left_name_59);
        Py_DECREF(tmp_right_name_22);
        if (tmp_left_name_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8453;

            goto frame_exception_exit_1;
        }
        tmp_called_name_24 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_name_24 == NULL)) {
            tmp_called_name_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_name_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_58);

            exception_lineno = 8454;

            goto frame_exception_exit_1;
        }
        frame_47b1429513e72d7c4d7611e800671b6c->m_frame.f_lineno = 8454;
        tmp_right_name_23 = CALL_FUNCTION_NO_ARGS(tmp_called_name_24);
        if (tmp_right_name_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_58);

            exception_lineno = 8454;

            goto frame_exception_exit_1;
        }
        tmp_left_name_57 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_58, tmp_right_name_23);
        Py_DECREF(tmp_left_name_58);
        Py_DECREF(tmp_right_name_23);
        if (tmp_left_name_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8454;

            goto frame_exception_exit_1;
        }
        tmp_called_name_25 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[122]);

        if (unlikely(tmp_called_name_25 == NULL)) {
            tmp_called_name_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[122]);
        }

        if (tmp_called_name_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_57);

            exception_lineno = 8455;

            goto frame_exception_exit_1;
        }
        frame_47b1429513e72d7c4d7611e800671b6c->m_frame.f_lineno = 8455;
        tmp_right_name_24 = CALL_FUNCTION_NO_ARGS(tmp_called_name_25);
        if (tmp_right_name_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_57);

            exception_lineno = 8455;

            goto frame_exception_exit_1;
        }
        tmp_left_name_56 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_57, tmp_right_name_24);
        Py_DECREF(tmp_left_name_57);
        Py_DECREF(tmp_right_name_24);
        if (tmp_left_name_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8455;

            goto frame_exception_exit_1;
        }
        tmp_called_name_26 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[123]);

        if (unlikely(tmp_called_name_26 == NULL)) {
            tmp_called_name_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[123]);
        }

        if (tmp_called_name_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_56);

            exception_lineno = 8456;

            goto frame_exception_exit_1;
        }
        frame_47b1429513e72d7c4d7611e800671b6c->m_frame.f_lineno = 8456;
        tmp_right_name_25 = CALL_FUNCTION_NO_ARGS(tmp_called_name_26);
        if (tmp_right_name_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_56);

            exception_lineno = 8456;

            goto frame_exception_exit_1;
        }
        tmp_left_name_55 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_56, tmp_right_name_25);
        Py_DECREF(tmp_left_name_56);
        Py_DECREF(tmp_right_name_25);
        if (tmp_left_name_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8456;

            goto frame_exception_exit_1;
        }
        tmp_called_name_27 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[124]);

        if (unlikely(tmp_called_name_27 == NULL)) {
            tmp_called_name_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[124]);
        }

        if (tmp_called_name_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_55);

            exception_lineno = 8457;

            goto frame_exception_exit_1;
        }
        frame_47b1429513e72d7c4d7611e800671b6c->m_frame.f_lineno = 8457;
        tmp_right_name_26 = CALL_FUNCTION_NO_ARGS(tmp_called_name_27);
        if (tmp_right_name_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_55);

            exception_lineno = 8457;

            goto frame_exception_exit_1;
        }
        tmp_left_name_54 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_55, tmp_right_name_26);
        Py_DECREF(tmp_left_name_55);
        Py_DECREF(tmp_right_name_26);
        if (tmp_left_name_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8457;

            goto frame_exception_exit_1;
        }
        tmp_called_name_28 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[125]);

        if (unlikely(tmp_called_name_28 == NULL)) {
            tmp_called_name_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[125]);
        }

        if (tmp_called_name_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_54);

            exception_lineno = 8458;

            goto frame_exception_exit_1;
        }
        frame_47b1429513e72d7c4d7611e800671b6c->m_frame.f_lineno = 8458;
        tmp_right_name_27 = CALL_FUNCTION_NO_ARGS(tmp_called_name_28);
        if (tmp_right_name_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_54);

            exception_lineno = 8458;

            goto frame_exception_exit_1;
        }
        tmp_left_name_53 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_54, tmp_right_name_27);
        Py_DECREF(tmp_left_name_54);
        Py_DECREF(tmp_right_name_27);
        if (tmp_left_name_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8458;

            goto frame_exception_exit_1;
        }
        tmp_called_name_29 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[126]);

        if (unlikely(tmp_called_name_29 == NULL)) {
            tmp_called_name_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[126]);
        }

        if (tmp_called_name_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_53);

            exception_lineno = 8459;

            goto frame_exception_exit_1;
        }
        frame_47b1429513e72d7c4d7611e800671b6c->m_frame.f_lineno = 8459;
        tmp_right_name_28 = CALL_FUNCTION_NO_ARGS(tmp_called_name_29);
        if (tmp_right_name_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_53);

            exception_lineno = 8459;

            goto frame_exception_exit_1;
        }
        tmp_left_name_52 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_53, tmp_right_name_28);
        Py_DECREF(tmp_left_name_53);
        Py_DECREF(tmp_right_name_28);
        if (tmp_left_name_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8459;

            goto frame_exception_exit_1;
        }
        tmp_called_name_30 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[127]);

        if (unlikely(tmp_called_name_30 == NULL)) {
            tmp_called_name_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[127]);
        }

        if (tmp_called_name_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_52);

            exception_lineno = 8460;

            goto frame_exception_exit_1;
        }
        frame_47b1429513e72d7c4d7611e800671b6c->m_frame.f_lineno = 8460;
        tmp_right_name_29 = CALL_FUNCTION_NO_ARGS(tmp_called_name_30);
        if (tmp_right_name_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_52);

            exception_lineno = 8460;

            goto frame_exception_exit_1;
        }
        tmp_left_name_51 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_52, tmp_right_name_29);
        Py_DECREF(tmp_left_name_52);
        Py_DECREF(tmp_right_name_29);
        if (tmp_left_name_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8460;

            goto frame_exception_exit_1;
        }
        tmp_called_name_31 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[128]);

        if (unlikely(tmp_called_name_31 == NULL)) {
            tmp_called_name_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[128]);
        }

        if (tmp_called_name_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_51);

            exception_lineno = 8461;

            goto frame_exception_exit_1;
        }
        frame_47b1429513e72d7c4d7611e800671b6c->m_frame.f_lineno = 8461;
        tmp_right_name_30 = CALL_FUNCTION_NO_ARGS(tmp_called_name_31);
        if (tmp_right_name_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_51);

            exception_lineno = 8461;

            goto frame_exception_exit_1;
        }
        tmp_left_name_50 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_51, tmp_right_name_30);
        Py_DECREF(tmp_left_name_51);
        Py_DECREF(tmp_right_name_30);
        if (tmp_left_name_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8461;

            goto frame_exception_exit_1;
        }
        tmp_called_name_32 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[129]);

        if (unlikely(tmp_called_name_32 == NULL)) {
            tmp_called_name_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[129]);
        }

        if (tmp_called_name_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_50);

            exception_lineno = 8462;

            goto frame_exception_exit_1;
        }
        frame_47b1429513e72d7c4d7611e800671b6c->m_frame.f_lineno = 8462;
        tmp_right_name_31 = CALL_FUNCTION_NO_ARGS(tmp_called_name_32);
        if (tmp_right_name_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_50);

            exception_lineno = 8462;

            goto frame_exception_exit_1;
        }
        tmp_left_name_49 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_50, tmp_right_name_31);
        Py_DECREF(tmp_left_name_50);
        Py_DECREF(tmp_right_name_31);
        if (tmp_left_name_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8462;

            goto frame_exception_exit_1;
        }
        tmp_called_name_33 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[130]);

        if (unlikely(tmp_called_name_33 == NULL)) {
            tmp_called_name_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[130]);
        }

        if (tmp_called_name_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_49);

            exception_lineno = 8463;

            goto frame_exception_exit_1;
        }
        frame_47b1429513e72d7c4d7611e800671b6c->m_frame.f_lineno = 8463;
        tmp_right_name_32 = CALL_FUNCTION_NO_ARGS(tmp_called_name_33);
        if (tmp_right_name_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_49);

            exception_lineno = 8463;

            goto frame_exception_exit_1;
        }
        tmp_left_name_48 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_49, tmp_right_name_32);
        Py_DECREF(tmp_left_name_49);
        Py_DECREF(tmp_right_name_32);
        if (tmp_left_name_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8463;

            goto frame_exception_exit_1;
        }
        tmp_called_name_34 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[131]);

        if (unlikely(tmp_called_name_34 == NULL)) {
            tmp_called_name_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[131]);
        }

        if (tmp_called_name_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_48);

            exception_lineno = 8464;

            goto frame_exception_exit_1;
        }
        frame_47b1429513e72d7c4d7611e800671b6c->m_frame.f_lineno = 8464;
        tmp_right_name_33 = CALL_FUNCTION_NO_ARGS(tmp_called_name_34);
        if (tmp_right_name_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_48);

            exception_lineno = 8464;

            goto frame_exception_exit_1;
        }
        tmp_left_name_47 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_48, tmp_right_name_33);
        Py_DECREF(tmp_left_name_48);
        Py_DECREF(tmp_right_name_33);
        if (tmp_left_name_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8464;

            goto frame_exception_exit_1;
        }
        tmp_called_name_35 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[132]);

        if (unlikely(tmp_called_name_35 == NULL)) {
            tmp_called_name_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[132]);
        }

        if (tmp_called_name_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_47);

            exception_lineno = 8465;

            goto frame_exception_exit_1;
        }
        frame_47b1429513e72d7c4d7611e800671b6c->m_frame.f_lineno = 8465;
        tmp_right_name_34 = CALL_FUNCTION_NO_ARGS(tmp_called_name_35);
        if (tmp_right_name_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_47);

            exception_lineno = 8465;

            goto frame_exception_exit_1;
        }
        tmp_left_name_46 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_47, tmp_right_name_34);
        Py_DECREF(tmp_left_name_47);
        Py_DECREF(tmp_right_name_34);
        if (tmp_left_name_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8465;

            goto frame_exception_exit_1;
        }
        tmp_called_name_36 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[133]);

        if (unlikely(tmp_called_name_36 == NULL)) {
            tmp_called_name_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[133]);
        }

        if (tmp_called_name_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_46);

            exception_lineno = 8466;

            goto frame_exception_exit_1;
        }
        frame_47b1429513e72d7c4d7611e800671b6c->m_frame.f_lineno = 8466;
        tmp_right_name_35 = CALL_FUNCTION_NO_ARGS(tmp_called_name_36);
        if (tmp_right_name_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_46);

            exception_lineno = 8466;

            goto frame_exception_exit_1;
        }
        tmp_left_name_45 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_46, tmp_right_name_35);
        Py_DECREF(tmp_left_name_46);
        Py_DECREF(tmp_right_name_35);
        if (tmp_left_name_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8466;

            goto frame_exception_exit_1;
        }
        tmp_called_name_37 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[134]);

        if (unlikely(tmp_called_name_37 == NULL)) {
            tmp_called_name_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[134]);
        }

        if (tmp_called_name_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_45);

            exception_lineno = 8467;

            goto frame_exception_exit_1;
        }
        frame_47b1429513e72d7c4d7611e800671b6c->m_frame.f_lineno = 8467;
        tmp_right_name_36 = CALL_FUNCTION_NO_ARGS(tmp_called_name_37);
        if (tmp_right_name_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_45);

            exception_lineno = 8467;

            goto frame_exception_exit_1;
        }
        tmp_left_name_44 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_45, tmp_right_name_36);
        Py_DECREF(tmp_left_name_45);
        Py_DECREF(tmp_right_name_36);
        if (tmp_left_name_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8467;

            goto frame_exception_exit_1;
        }
        tmp_called_name_38 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[135]);

        if (unlikely(tmp_called_name_38 == NULL)) {
            tmp_called_name_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[135]);
        }

        if (tmp_called_name_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_44);

            exception_lineno = 8468;

            goto frame_exception_exit_1;
        }
        frame_47b1429513e72d7c4d7611e800671b6c->m_frame.f_lineno = 8468;
        tmp_right_name_37 = CALL_FUNCTION_NO_ARGS(tmp_called_name_38);
        if (tmp_right_name_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_44);

            exception_lineno = 8468;

            goto frame_exception_exit_1;
        }
        tmp_left_name_43 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_44, tmp_right_name_37);
        Py_DECREF(tmp_left_name_44);
        Py_DECREF(tmp_right_name_37);
        if (tmp_left_name_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8468;

            goto frame_exception_exit_1;
        }
        tmp_called_name_39 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[136]);

        if (unlikely(tmp_called_name_39 == NULL)) {
            tmp_called_name_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[136]);
        }

        if (tmp_called_name_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_43);

            exception_lineno = 8469;

            goto frame_exception_exit_1;
        }
        frame_47b1429513e72d7c4d7611e800671b6c->m_frame.f_lineno = 8469;
        tmp_right_name_38 = CALL_FUNCTION_NO_ARGS(tmp_called_name_39);
        if (tmp_right_name_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_43);

            exception_lineno = 8469;

            goto frame_exception_exit_1;
        }
        tmp_left_name_42 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_43, tmp_right_name_38);
        Py_DECREF(tmp_left_name_43);
        Py_DECREF(tmp_right_name_38);
        if (tmp_left_name_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8469;

            goto frame_exception_exit_1;
        }
        tmp_called_name_40 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[137]);

        if (unlikely(tmp_called_name_40 == NULL)) {
            tmp_called_name_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[137]);
        }

        if (tmp_called_name_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_42);

            exception_lineno = 8470;

            goto frame_exception_exit_1;
        }
        frame_47b1429513e72d7c4d7611e800671b6c->m_frame.f_lineno = 8470;
        tmp_right_name_39 = CALL_FUNCTION_NO_ARGS(tmp_called_name_40);
        if (tmp_right_name_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_42);

            exception_lineno = 8470;

            goto frame_exception_exit_1;
        }
        tmp_left_name_41 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_42, tmp_right_name_39);
        Py_DECREF(tmp_left_name_42);
        Py_DECREF(tmp_right_name_39);
        if (tmp_left_name_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8470;

            goto frame_exception_exit_1;
        }
        tmp_called_name_41 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[138]);

        if (unlikely(tmp_called_name_41 == NULL)) {
            tmp_called_name_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[138]);
        }

        if (tmp_called_name_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_41);

            exception_lineno = 8471;

            goto frame_exception_exit_1;
        }
        frame_47b1429513e72d7c4d7611e800671b6c->m_frame.f_lineno = 8471;
        tmp_right_name_40 = CALL_FUNCTION_NO_ARGS(tmp_called_name_41);
        if (tmp_right_name_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_41);

            exception_lineno = 8471;

            goto frame_exception_exit_1;
        }
        tmp_left_name_40 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_41, tmp_right_name_40);
        Py_DECREF(tmp_left_name_41);
        Py_DECREF(tmp_right_name_40);
        if (tmp_left_name_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8471;

            goto frame_exception_exit_1;
        }
        tmp_called_name_42 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[139]);

        if (unlikely(tmp_called_name_42 == NULL)) {
            tmp_called_name_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[139]);
        }

        if (tmp_called_name_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_40);

            exception_lineno = 8472;

            goto frame_exception_exit_1;
        }
        frame_47b1429513e72d7c4d7611e800671b6c->m_frame.f_lineno = 8472;
        tmp_right_name_41 = CALL_FUNCTION_NO_ARGS(tmp_called_name_42);
        if (tmp_right_name_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_40);

            exception_lineno = 8472;

            goto frame_exception_exit_1;
        }
        tmp_left_name_39 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_40, tmp_right_name_41);
        Py_DECREF(tmp_left_name_40);
        Py_DECREF(tmp_right_name_41);
        if (tmp_left_name_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8472;

            goto frame_exception_exit_1;
        }
        tmp_called_name_43 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[140]);

        if (unlikely(tmp_called_name_43 == NULL)) {
            tmp_called_name_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[140]);
        }

        if (tmp_called_name_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_39);

            exception_lineno = 8473;

            goto frame_exception_exit_1;
        }
        frame_47b1429513e72d7c4d7611e800671b6c->m_frame.f_lineno = 8473;
        tmp_right_name_42 = CALL_FUNCTION_NO_ARGS(tmp_called_name_43);
        if (tmp_right_name_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_39);

            exception_lineno = 8473;

            goto frame_exception_exit_1;
        }
        tmp_left_name_38 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_39, tmp_right_name_42);
        Py_DECREF(tmp_left_name_39);
        Py_DECREF(tmp_right_name_42);
        if (tmp_left_name_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8473;

            goto frame_exception_exit_1;
        }
        tmp_called_name_44 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[141]);

        if (unlikely(tmp_called_name_44 == NULL)) {
            tmp_called_name_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[141]);
        }

        if (tmp_called_name_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_38);

            exception_lineno = 8474;

            goto frame_exception_exit_1;
        }
        frame_47b1429513e72d7c4d7611e800671b6c->m_frame.f_lineno = 8474;
        tmp_right_name_43 = CALL_FUNCTION_NO_ARGS(tmp_called_name_44);
        if (tmp_right_name_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_38);

            exception_lineno = 8474;

            goto frame_exception_exit_1;
        }
        tmp_left_name_37 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_38, tmp_right_name_43);
        Py_DECREF(tmp_left_name_38);
        Py_DECREF(tmp_right_name_43);
        if (tmp_left_name_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8474;

            goto frame_exception_exit_1;
        }
        tmp_called_name_45 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[142]);

        if (unlikely(tmp_called_name_45 == NULL)) {
            tmp_called_name_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[142]);
        }

        if (tmp_called_name_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_37);

            exception_lineno = 8475;

            goto frame_exception_exit_1;
        }
        frame_47b1429513e72d7c4d7611e800671b6c->m_frame.f_lineno = 8475;
        tmp_right_name_44 = CALL_FUNCTION_NO_ARGS(tmp_called_name_45);
        if (tmp_right_name_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_37);

            exception_lineno = 8475;

            goto frame_exception_exit_1;
        }
        tmp_left_name_36 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_37, tmp_right_name_44);
        Py_DECREF(tmp_left_name_37);
        Py_DECREF(tmp_right_name_44);
        if (tmp_left_name_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8475;

            goto frame_exception_exit_1;
        }
        tmp_called_name_46 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[143]);

        if (unlikely(tmp_called_name_46 == NULL)) {
            tmp_called_name_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[143]);
        }

        if (tmp_called_name_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_36);

            exception_lineno = 8476;

            goto frame_exception_exit_1;
        }
        frame_47b1429513e72d7c4d7611e800671b6c->m_frame.f_lineno = 8476;
        tmp_right_name_45 = CALL_FUNCTION_NO_ARGS(tmp_called_name_46);
        if (tmp_right_name_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_36);

            exception_lineno = 8476;

            goto frame_exception_exit_1;
        }
        tmp_left_name_35 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_36, tmp_right_name_45);
        Py_DECREF(tmp_left_name_36);
        Py_DECREF(tmp_right_name_45);
        if (tmp_left_name_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8476;

            goto frame_exception_exit_1;
        }
        tmp_called_name_47 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[144]);

        if (unlikely(tmp_called_name_47 == NULL)) {
            tmp_called_name_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[144]);
        }

        if (tmp_called_name_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_35);

            exception_lineno = 8477;

            goto frame_exception_exit_1;
        }
        frame_47b1429513e72d7c4d7611e800671b6c->m_frame.f_lineno = 8477;
        tmp_right_name_46 = CALL_FUNCTION_NO_ARGS(tmp_called_name_47);
        if (tmp_right_name_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_35);

            exception_lineno = 8477;

            goto frame_exception_exit_1;
        }
        tmp_left_name_34 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_35, tmp_right_name_46);
        Py_DECREF(tmp_left_name_35);
        Py_DECREF(tmp_right_name_46);
        if (tmp_left_name_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8477;

            goto frame_exception_exit_1;
        }
        tmp_called_name_48 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[145]);

        if (unlikely(tmp_called_name_48 == NULL)) {
            tmp_called_name_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[145]);
        }

        if (tmp_called_name_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_34);

            exception_lineno = 8478;

            goto frame_exception_exit_1;
        }
        frame_47b1429513e72d7c4d7611e800671b6c->m_frame.f_lineno = 8478;
        tmp_right_name_47 = CALL_FUNCTION_NO_ARGS(tmp_called_name_48);
        if (tmp_right_name_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_34);

            exception_lineno = 8478;

            goto frame_exception_exit_1;
        }
        tmp_left_name_33 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_34, tmp_right_name_47);
        Py_DECREF(tmp_left_name_34);
        Py_DECREF(tmp_right_name_47);
        if (tmp_left_name_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8478;

            goto frame_exception_exit_1;
        }
        tmp_called_name_49 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[146]);

        if (unlikely(tmp_called_name_49 == NULL)) {
            tmp_called_name_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[146]);
        }

        if (tmp_called_name_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_33);

            exception_lineno = 8479;

            goto frame_exception_exit_1;
        }
        frame_47b1429513e72d7c4d7611e800671b6c->m_frame.f_lineno = 8479;
        tmp_right_name_48 = CALL_FUNCTION_NO_ARGS(tmp_called_name_49);
        if (tmp_right_name_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_33);

            exception_lineno = 8479;

            goto frame_exception_exit_1;
        }
        tmp_left_name_32 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_33, tmp_right_name_48);
        Py_DECREF(tmp_left_name_33);
        Py_DECREF(tmp_right_name_48);
        if (tmp_left_name_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8479;

            goto frame_exception_exit_1;
        }
        tmp_called_name_50 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[147]);

        if (unlikely(tmp_called_name_50 == NULL)) {
            tmp_called_name_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[147]);
        }

        if (tmp_called_name_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_32);

            exception_lineno = 8480;

            goto frame_exception_exit_1;
        }
        frame_47b1429513e72d7c4d7611e800671b6c->m_frame.f_lineno = 8480;
        tmp_right_name_49 = CALL_FUNCTION_NO_ARGS(tmp_called_name_50);
        if (tmp_right_name_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_32);

            exception_lineno = 8480;

            goto frame_exception_exit_1;
        }
        tmp_left_name_31 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_32, tmp_right_name_49);
        Py_DECREF(tmp_left_name_32);
        Py_DECREF(tmp_right_name_49);
        if (tmp_left_name_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8480;

            goto frame_exception_exit_1;
        }
        tmp_called_name_51 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[148]);

        if (unlikely(tmp_called_name_51 == NULL)) {
            tmp_called_name_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[148]);
        }

        if (tmp_called_name_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_31);

            exception_lineno = 8481;

            goto frame_exception_exit_1;
        }
        frame_47b1429513e72d7c4d7611e800671b6c->m_frame.f_lineno = 8481;
        tmp_right_name_50 = CALL_FUNCTION_NO_ARGS(tmp_called_name_51);
        if (tmp_right_name_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_31);

            exception_lineno = 8481;

            goto frame_exception_exit_1;
        }
        tmp_left_name_30 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_31, tmp_right_name_50);
        Py_DECREF(tmp_left_name_31);
        Py_DECREF(tmp_right_name_50);
        if (tmp_left_name_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8481;

            goto frame_exception_exit_1;
        }
        tmp_called_name_52 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[149]);

        if (unlikely(tmp_called_name_52 == NULL)) {
            tmp_called_name_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[149]);
        }

        if (tmp_called_name_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_30);

            exception_lineno = 8482;

            goto frame_exception_exit_1;
        }
        frame_47b1429513e72d7c4d7611e800671b6c->m_frame.f_lineno = 8482;
        tmp_right_name_51 = CALL_FUNCTION_NO_ARGS(tmp_called_name_52);
        if (tmp_right_name_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_30);

            exception_lineno = 8482;

            goto frame_exception_exit_1;
        }
        tmp_left_name_29 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_30, tmp_right_name_51);
        Py_DECREF(tmp_left_name_30);
        Py_DECREF(tmp_right_name_51);
        if (tmp_left_name_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8482;

            goto frame_exception_exit_1;
        }
        tmp_called_name_53 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[150]);

        if (unlikely(tmp_called_name_53 == NULL)) {
            tmp_called_name_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[150]);
        }

        if (tmp_called_name_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_29);

            exception_lineno = 8483;

            goto frame_exception_exit_1;
        }
        frame_47b1429513e72d7c4d7611e800671b6c->m_frame.f_lineno = 8483;
        tmp_right_name_52 = CALL_FUNCTION_NO_ARGS(tmp_called_name_53);
        if (tmp_right_name_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_29);

            exception_lineno = 8483;

            goto frame_exception_exit_1;
        }
        tmp_left_name_28 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_29, tmp_right_name_52);
        Py_DECREF(tmp_left_name_29);
        Py_DECREF(tmp_right_name_52);
        if (tmp_left_name_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8483;

            goto frame_exception_exit_1;
        }
        tmp_called_name_54 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[151]);

        if (unlikely(tmp_called_name_54 == NULL)) {
            tmp_called_name_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[151]);
        }

        if (tmp_called_name_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_28);

            exception_lineno = 8484;

            goto frame_exception_exit_1;
        }
        frame_47b1429513e72d7c4d7611e800671b6c->m_frame.f_lineno = 8484;
        tmp_right_name_53 = CALL_FUNCTION_NO_ARGS(tmp_called_name_54);
        if (tmp_right_name_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_28);

            exception_lineno = 8484;

            goto frame_exception_exit_1;
        }
        tmp_left_name_27 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_28, tmp_right_name_53);
        Py_DECREF(tmp_left_name_28);
        Py_DECREF(tmp_right_name_53);
        if (tmp_left_name_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8484;

            goto frame_exception_exit_1;
        }
        tmp_called_name_55 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[152]);

        if (unlikely(tmp_called_name_55 == NULL)) {
            tmp_called_name_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[152]);
        }

        if (tmp_called_name_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_27);

            exception_lineno = 8485;

            goto frame_exception_exit_1;
        }
        frame_47b1429513e72d7c4d7611e800671b6c->m_frame.f_lineno = 8485;
        tmp_right_name_54 = CALL_FUNCTION_NO_ARGS(tmp_called_name_55);
        if (tmp_right_name_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_27);

            exception_lineno = 8485;

            goto frame_exception_exit_1;
        }
        tmp_left_name_26 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_27, tmp_right_name_54);
        Py_DECREF(tmp_left_name_27);
        Py_DECREF(tmp_right_name_54);
        if (tmp_left_name_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8485;

            goto frame_exception_exit_1;
        }
        tmp_called_name_56 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[153]);

        if (unlikely(tmp_called_name_56 == NULL)) {
            tmp_called_name_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[153]);
        }

        if (tmp_called_name_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_26);

            exception_lineno = 8486;

            goto frame_exception_exit_1;
        }
        frame_47b1429513e72d7c4d7611e800671b6c->m_frame.f_lineno = 8486;
        tmp_right_name_55 = CALL_FUNCTION_NO_ARGS(tmp_called_name_56);
        if (tmp_right_name_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_26);

            exception_lineno = 8486;

            goto frame_exception_exit_1;
        }
        tmp_left_name_25 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_26, tmp_right_name_55);
        Py_DECREF(tmp_left_name_26);
        Py_DECREF(tmp_right_name_55);
        if (tmp_left_name_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8486;

            goto frame_exception_exit_1;
        }
        tmp_called_name_57 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[154]);

        if (unlikely(tmp_called_name_57 == NULL)) {
            tmp_called_name_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[154]);
        }

        if (tmp_called_name_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_25);

            exception_lineno = 8487;

            goto frame_exception_exit_1;
        }
        frame_47b1429513e72d7c4d7611e800671b6c->m_frame.f_lineno = 8487;
        tmp_right_name_56 = CALL_FUNCTION_NO_ARGS(tmp_called_name_57);
        if (tmp_right_name_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_25);

            exception_lineno = 8487;

            goto frame_exception_exit_1;
        }
        tmp_left_name_24 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_25, tmp_right_name_56);
        Py_DECREF(tmp_left_name_25);
        Py_DECREF(tmp_right_name_56);
        if (tmp_left_name_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8487;

            goto frame_exception_exit_1;
        }
        tmp_called_name_58 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[155]);

        if (unlikely(tmp_called_name_58 == NULL)) {
            tmp_called_name_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[155]);
        }

        if (tmp_called_name_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_24);

            exception_lineno = 8488;

            goto frame_exception_exit_1;
        }
        frame_47b1429513e72d7c4d7611e800671b6c->m_frame.f_lineno = 8488;
        tmp_right_name_57 = CALL_FUNCTION_NO_ARGS(tmp_called_name_58);
        if (tmp_right_name_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_24);

            exception_lineno = 8488;

            goto frame_exception_exit_1;
        }
        tmp_left_name_23 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_24, tmp_right_name_57);
        Py_DECREF(tmp_left_name_24);
        Py_DECREF(tmp_right_name_57);
        if (tmp_left_name_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8488;

            goto frame_exception_exit_1;
        }
        tmp_called_name_59 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[156]);

        if (unlikely(tmp_called_name_59 == NULL)) {
            tmp_called_name_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[156]);
        }

        if (tmp_called_name_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_23);

            exception_lineno = 8489;

            goto frame_exception_exit_1;
        }
        frame_47b1429513e72d7c4d7611e800671b6c->m_frame.f_lineno = 8489;
        tmp_right_name_58 = CALL_FUNCTION_NO_ARGS(tmp_called_name_59);
        if (tmp_right_name_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_23);

            exception_lineno = 8489;

            goto frame_exception_exit_1;
        }
        tmp_left_name_22 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_23, tmp_right_name_58);
        Py_DECREF(tmp_left_name_23);
        Py_DECREF(tmp_right_name_58);
        if (tmp_left_name_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8489;

            goto frame_exception_exit_1;
        }
        tmp_called_name_60 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[157]);

        if (unlikely(tmp_called_name_60 == NULL)) {
            tmp_called_name_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[157]);
        }

        if (tmp_called_name_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_22);

            exception_lineno = 8490;

            goto frame_exception_exit_1;
        }
        frame_47b1429513e72d7c4d7611e800671b6c->m_frame.f_lineno = 8490;
        tmp_right_name_59 = CALL_FUNCTION_NO_ARGS(tmp_called_name_60);
        if (tmp_right_name_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_22);

            exception_lineno = 8490;

            goto frame_exception_exit_1;
        }
        tmp_left_name_21 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_22, tmp_right_name_59);
        Py_DECREF(tmp_left_name_22);
        Py_DECREF(tmp_right_name_59);
        if (tmp_left_name_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8490;

            goto frame_exception_exit_1;
        }
        tmp_called_name_61 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[158]);

        if (unlikely(tmp_called_name_61 == NULL)) {
            tmp_called_name_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[158]);
        }

        if (tmp_called_name_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_21);

            exception_lineno = 8491;

            goto frame_exception_exit_1;
        }
        frame_47b1429513e72d7c4d7611e800671b6c->m_frame.f_lineno = 8491;
        tmp_right_name_60 = CALL_FUNCTION_NO_ARGS(tmp_called_name_61);
        if (tmp_right_name_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_21);

            exception_lineno = 8491;

            goto frame_exception_exit_1;
        }
        tmp_left_name_20 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_21, tmp_right_name_60);
        Py_DECREF(tmp_left_name_21);
        Py_DECREF(tmp_right_name_60);
        if (tmp_left_name_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8491;

            goto frame_exception_exit_1;
        }
        tmp_called_name_62 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[159]);

        if (unlikely(tmp_called_name_62 == NULL)) {
            tmp_called_name_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[159]);
        }

        if (tmp_called_name_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_20);

            exception_lineno = 8492;

            goto frame_exception_exit_1;
        }
        frame_47b1429513e72d7c4d7611e800671b6c->m_frame.f_lineno = 8492;
        tmp_right_name_61 = CALL_FUNCTION_NO_ARGS(tmp_called_name_62);
        if (tmp_right_name_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_20);

            exception_lineno = 8492;

            goto frame_exception_exit_1;
        }
        tmp_left_name_19 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_20, tmp_right_name_61);
        Py_DECREF(tmp_left_name_20);
        Py_DECREF(tmp_right_name_61);
        if (tmp_left_name_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8492;

            goto frame_exception_exit_1;
        }
        tmp_called_name_63 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[160]);

        if (unlikely(tmp_called_name_63 == NULL)) {
            tmp_called_name_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[160]);
        }

        if (tmp_called_name_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_19);

            exception_lineno = 8493;

            goto frame_exception_exit_1;
        }
        frame_47b1429513e72d7c4d7611e800671b6c->m_frame.f_lineno = 8493;
        tmp_right_name_62 = CALL_FUNCTION_NO_ARGS(tmp_called_name_63);
        if (tmp_right_name_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_19);

            exception_lineno = 8493;

            goto frame_exception_exit_1;
        }
        tmp_left_name_18 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_19, tmp_right_name_62);
        Py_DECREF(tmp_left_name_19);
        Py_DECREF(tmp_right_name_62);
        if (tmp_left_name_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8493;

            goto frame_exception_exit_1;
        }
        tmp_called_name_64 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[161]);

        if (unlikely(tmp_called_name_64 == NULL)) {
            tmp_called_name_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[161]);
        }

        if (tmp_called_name_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_18);

            exception_lineno = 8494;

            goto frame_exception_exit_1;
        }
        frame_47b1429513e72d7c4d7611e800671b6c->m_frame.f_lineno = 8494;
        tmp_right_name_63 = CALL_FUNCTION_NO_ARGS(tmp_called_name_64);
        if (tmp_right_name_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_18);

            exception_lineno = 8494;

            goto frame_exception_exit_1;
        }
        tmp_left_name_17 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_18, tmp_right_name_63);
        Py_DECREF(tmp_left_name_18);
        Py_DECREF(tmp_right_name_63);
        if (tmp_left_name_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8494;

            goto frame_exception_exit_1;
        }
        tmp_called_name_65 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[162]);

        if (unlikely(tmp_called_name_65 == NULL)) {
            tmp_called_name_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[162]);
        }

        if (tmp_called_name_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_17);

            exception_lineno = 8495;

            goto frame_exception_exit_1;
        }
        frame_47b1429513e72d7c4d7611e800671b6c->m_frame.f_lineno = 8495;
        tmp_right_name_64 = CALL_FUNCTION_NO_ARGS(tmp_called_name_65);
        if (tmp_right_name_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_17);

            exception_lineno = 8495;

            goto frame_exception_exit_1;
        }
        tmp_left_name_16 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_17, tmp_right_name_64);
        Py_DECREF(tmp_left_name_17);
        Py_DECREF(tmp_right_name_64);
        if (tmp_left_name_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8495;

            goto frame_exception_exit_1;
        }
        tmp_called_name_66 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[163]);

        if (unlikely(tmp_called_name_66 == NULL)) {
            tmp_called_name_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[163]);
        }

        if (tmp_called_name_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_16);

            exception_lineno = 8496;

            goto frame_exception_exit_1;
        }
        frame_47b1429513e72d7c4d7611e800671b6c->m_frame.f_lineno = 8496;
        tmp_right_name_65 = CALL_FUNCTION_NO_ARGS(tmp_called_name_66);
        if (tmp_right_name_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_16);

            exception_lineno = 8496;

            goto frame_exception_exit_1;
        }
        tmp_left_name_15 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_16, tmp_right_name_65);
        Py_DECREF(tmp_left_name_16);
        Py_DECREF(tmp_right_name_65);
        if (tmp_left_name_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8496;

            goto frame_exception_exit_1;
        }
        tmp_called_name_67 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[164]);

        if (unlikely(tmp_called_name_67 == NULL)) {
            tmp_called_name_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[164]);
        }

        if (tmp_called_name_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_15);

            exception_lineno = 8497;

            goto frame_exception_exit_1;
        }
        frame_47b1429513e72d7c4d7611e800671b6c->m_frame.f_lineno = 8497;
        tmp_right_name_66 = CALL_FUNCTION_NO_ARGS(tmp_called_name_67);
        if (tmp_right_name_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_15);

            exception_lineno = 8497;

            goto frame_exception_exit_1;
        }
        tmp_left_name_14 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_15, tmp_right_name_66);
        Py_DECREF(tmp_left_name_15);
        Py_DECREF(tmp_right_name_66);
        if (tmp_left_name_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8497;

            goto frame_exception_exit_1;
        }
        tmp_called_name_68 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[165]);

        if (unlikely(tmp_called_name_68 == NULL)) {
            tmp_called_name_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[165]);
        }

        if (tmp_called_name_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_14);

            exception_lineno = 8498;

            goto frame_exception_exit_1;
        }
        frame_47b1429513e72d7c4d7611e800671b6c->m_frame.f_lineno = 8498;
        tmp_right_name_67 = CALL_FUNCTION_NO_ARGS(tmp_called_name_68);
        if (tmp_right_name_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_14);

            exception_lineno = 8498;

            goto frame_exception_exit_1;
        }
        tmp_left_name_13 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_14, tmp_right_name_67);
        Py_DECREF(tmp_left_name_14);
        Py_DECREF(tmp_right_name_67);
        if (tmp_left_name_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8498;

            goto frame_exception_exit_1;
        }
        tmp_called_name_69 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[166]);

        if (unlikely(tmp_called_name_69 == NULL)) {
            tmp_called_name_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[166]);
        }

        if (tmp_called_name_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_13);

            exception_lineno = 8499;

            goto frame_exception_exit_1;
        }
        frame_47b1429513e72d7c4d7611e800671b6c->m_frame.f_lineno = 8499;
        tmp_right_name_68 = CALL_FUNCTION_NO_ARGS(tmp_called_name_69);
        if (tmp_right_name_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_13);

            exception_lineno = 8499;

            goto frame_exception_exit_1;
        }
        tmp_left_name_12 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_13, tmp_right_name_68);
        Py_DECREF(tmp_left_name_13);
        Py_DECREF(tmp_right_name_68);
        if (tmp_left_name_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8499;

            goto frame_exception_exit_1;
        }
        tmp_called_name_70 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[167]);

        if (unlikely(tmp_called_name_70 == NULL)) {
            tmp_called_name_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[167]);
        }

        if (tmp_called_name_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_12);

            exception_lineno = 8500;

            goto frame_exception_exit_1;
        }
        frame_47b1429513e72d7c4d7611e800671b6c->m_frame.f_lineno = 8500;
        tmp_right_name_69 = CALL_FUNCTION_NO_ARGS(tmp_called_name_70);
        if (tmp_right_name_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_12);

            exception_lineno = 8500;

            goto frame_exception_exit_1;
        }
        tmp_left_name_11 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_12, tmp_right_name_69);
        Py_DECREF(tmp_left_name_12);
        Py_DECREF(tmp_right_name_69);
        if (tmp_left_name_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8500;

            goto frame_exception_exit_1;
        }
        tmp_called_name_71 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[168]);

        if (unlikely(tmp_called_name_71 == NULL)) {
            tmp_called_name_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[168]);
        }

        if (tmp_called_name_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_11);

            exception_lineno = 8501;

            goto frame_exception_exit_1;
        }
        frame_47b1429513e72d7c4d7611e800671b6c->m_frame.f_lineno = 8501;
        tmp_right_name_70 = CALL_FUNCTION_NO_ARGS(tmp_called_name_71);
        if (tmp_right_name_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_11);

            exception_lineno = 8501;

            goto frame_exception_exit_1;
        }
        tmp_left_name_10 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_11, tmp_right_name_70);
        Py_DECREF(tmp_left_name_11);
        Py_DECREF(tmp_right_name_70);
        if (tmp_left_name_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8501;

            goto frame_exception_exit_1;
        }
        tmp_called_name_72 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[169]);

        if (unlikely(tmp_called_name_72 == NULL)) {
            tmp_called_name_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[169]);
        }

        if (tmp_called_name_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_10);

            exception_lineno = 8502;

            goto frame_exception_exit_1;
        }
        frame_47b1429513e72d7c4d7611e800671b6c->m_frame.f_lineno = 8502;
        tmp_right_name_71 = CALL_FUNCTION_NO_ARGS(tmp_called_name_72);
        if (tmp_right_name_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_10);

            exception_lineno = 8502;

            goto frame_exception_exit_1;
        }
        tmp_left_name_9 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_10, tmp_right_name_71);
        Py_DECREF(tmp_left_name_10);
        Py_DECREF(tmp_right_name_71);
        if (tmp_left_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8502;

            goto frame_exception_exit_1;
        }
        tmp_called_name_73 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[170]);

        if (unlikely(tmp_called_name_73 == NULL)) {
            tmp_called_name_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[170]);
        }

        if (tmp_called_name_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_9);

            exception_lineno = 8503;

            goto frame_exception_exit_1;
        }
        frame_47b1429513e72d7c4d7611e800671b6c->m_frame.f_lineno = 8503;
        tmp_right_name_72 = CALL_FUNCTION_NO_ARGS(tmp_called_name_73);
        if (tmp_right_name_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_9);

            exception_lineno = 8503;

            goto frame_exception_exit_1;
        }
        tmp_left_name_8 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_9, tmp_right_name_72);
        Py_DECREF(tmp_left_name_9);
        Py_DECREF(tmp_right_name_72);
        if (tmp_left_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8503;

            goto frame_exception_exit_1;
        }
        tmp_called_name_74 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[171]);

        if (unlikely(tmp_called_name_74 == NULL)) {
            tmp_called_name_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[171]);
        }

        if (tmp_called_name_74 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_8);

            exception_lineno = 8504;

            goto frame_exception_exit_1;
        }
        frame_47b1429513e72d7c4d7611e800671b6c->m_frame.f_lineno = 8504;
        tmp_right_name_73 = CALL_FUNCTION_NO_ARGS(tmp_called_name_74);
        if (tmp_right_name_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_8);

            exception_lineno = 8504;

            goto frame_exception_exit_1;
        }
        tmp_left_name_7 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_8, tmp_right_name_73);
        Py_DECREF(tmp_left_name_8);
        Py_DECREF(tmp_right_name_73);
        if (tmp_left_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8504;

            goto frame_exception_exit_1;
        }
        tmp_called_name_75 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[172]);

        if (unlikely(tmp_called_name_75 == NULL)) {
            tmp_called_name_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[172]);
        }

        if (tmp_called_name_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_7);

            exception_lineno = 8505;

            goto frame_exception_exit_1;
        }
        frame_47b1429513e72d7c4d7611e800671b6c->m_frame.f_lineno = 8505;
        tmp_right_name_74 = CALL_FUNCTION_NO_ARGS(tmp_called_name_75);
        if (tmp_right_name_74 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_7);

            exception_lineno = 8505;

            goto frame_exception_exit_1;
        }
        tmp_left_name_6 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_7, tmp_right_name_74);
        Py_DECREF(tmp_left_name_7);
        Py_DECREF(tmp_right_name_74);
        if (tmp_left_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8505;

            goto frame_exception_exit_1;
        }
        tmp_called_name_76 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[173]);

        if (unlikely(tmp_called_name_76 == NULL)) {
            tmp_called_name_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[173]);
        }

        if (tmp_called_name_76 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_6);

            exception_lineno = 8506;

            goto frame_exception_exit_1;
        }
        frame_47b1429513e72d7c4d7611e800671b6c->m_frame.f_lineno = 8506;
        tmp_right_name_75 = CALL_FUNCTION_NO_ARGS(tmp_called_name_76);
        if (tmp_right_name_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_6);

            exception_lineno = 8506;

            goto frame_exception_exit_1;
        }
        tmp_left_name_5 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_6, tmp_right_name_75);
        Py_DECREF(tmp_left_name_6);
        Py_DECREF(tmp_right_name_75);
        if (tmp_left_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8506;

            goto frame_exception_exit_1;
        }
        tmp_called_name_77 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[174]);

        if (unlikely(tmp_called_name_77 == NULL)) {
            tmp_called_name_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[174]);
        }

        if (tmp_called_name_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_5);

            exception_lineno = 8507;

            goto frame_exception_exit_1;
        }
        frame_47b1429513e72d7c4d7611e800671b6c->m_frame.f_lineno = 8507;
        tmp_right_name_76 = CALL_FUNCTION_NO_ARGS(tmp_called_name_77);
        if (tmp_right_name_76 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_5);

            exception_lineno = 8507;

            goto frame_exception_exit_1;
        }
        tmp_left_name_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_5, tmp_right_name_76);
        Py_DECREF(tmp_left_name_5);
        Py_DECREF(tmp_right_name_76);
        if (tmp_left_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8507;

            goto frame_exception_exit_1;
        }
        tmp_called_name_78 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[175]);

        if (unlikely(tmp_called_name_78 == NULL)) {
            tmp_called_name_78 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[175]);
        }

        if (tmp_called_name_78 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_4);

            exception_lineno = 8508;

            goto frame_exception_exit_1;
        }
        frame_47b1429513e72d7c4d7611e800671b6c->m_frame.f_lineno = 8508;
        tmp_right_name_77 = CALL_FUNCTION_NO_ARGS(tmp_called_name_78);
        if (tmp_right_name_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_4);

            exception_lineno = 8508;

            goto frame_exception_exit_1;
        }
        tmp_left_name_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_4, tmp_right_name_77);
        Py_DECREF(tmp_left_name_4);
        Py_DECREF(tmp_right_name_77);
        if (tmp_left_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8508;

            goto frame_exception_exit_1;
        }
        tmp_called_name_79 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[176]);

        if (unlikely(tmp_called_name_79 == NULL)) {
            tmp_called_name_79 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[176]);
        }

        if (tmp_called_name_79 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_3);

            exception_lineno = 8509;

            goto frame_exception_exit_1;
        }
        frame_47b1429513e72d7c4d7611e800671b6c->m_frame.f_lineno = 8509;
        tmp_right_name_78 = CALL_FUNCTION_NO_ARGS(tmp_called_name_79);
        if (tmp_right_name_78 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_3);

            exception_lineno = 8509;

            goto frame_exception_exit_1;
        }
        tmp_left_name_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_3, tmp_right_name_78);
        Py_DECREF(tmp_left_name_3);
        Py_DECREF(tmp_right_name_78);
        if (tmp_left_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8509;

            goto frame_exception_exit_1;
        }
        tmp_called_name_80 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[177]);

        if (unlikely(tmp_called_name_80 == NULL)) {
            tmp_called_name_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[177]);
        }

        if (tmp_called_name_80 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_2);

            exception_lineno = 8510;

            goto frame_exception_exit_1;
        }
        frame_47b1429513e72d7c4d7611e800671b6c->m_frame.f_lineno = 8510;
        tmp_right_name_79 = CALL_FUNCTION_NO_ARGS(tmp_called_name_80);
        if (tmp_right_name_79 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_2);

            exception_lineno = 8510;

            goto frame_exception_exit_1;
        }
        tmp_left_name_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_2, tmp_right_name_79);
        Py_DECREF(tmp_left_name_2);
        Py_DECREF(tmp_right_name_79);
        if (tmp_left_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8510;

            goto frame_exception_exit_1;
        }
        tmp_called_name_81 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[178]);

        if (unlikely(tmp_called_name_81 == NULL)) {
            tmp_called_name_81 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[178]);
        }

        if (tmp_called_name_81 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_1);

            exception_lineno = 8511;

            goto frame_exception_exit_1;
        }
        frame_47b1429513e72d7c4d7611e800671b6c->m_frame.f_lineno = 8511;
        tmp_right_name_80 = CALL_FUNCTION_NO_ARGS(tmp_called_name_81);
        if (tmp_right_name_80 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_1);

            exception_lineno = 8511;

            goto frame_exception_exit_1;
        }
        tmp_tuple_arg_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_1, tmp_right_name_80);
        Py_DECREF(tmp_left_name_1);
        Py_DECREF(tmp_right_name_80);
        if (tmp_tuple_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8511;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_90 = PySequence_Tuple(tmp_tuple_arg_1);
        Py_DECREF(tmp_tuple_arg_1);
        if (tmp_assign_source_90 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8430;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[179], tmp_assign_source_90);
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_47b1429513e72d7c4d7611e800671b6c);
#endif
    popFrameStack();

    assertFrameObject(frame_47b1429513e72d7c4d7611e800671b6c);

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_47b1429513e72d7c4d7611e800671b6c);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_47b1429513e72d7c4d7611e800671b6c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_47b1429513e72d7c4d7611e800671b6c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_47b1429513e72d7c4d7611e800671b6c, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;

    return module_idna$uts46data;
    module_exception_exit:
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
