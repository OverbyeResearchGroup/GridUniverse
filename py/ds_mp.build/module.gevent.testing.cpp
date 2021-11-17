/* Generated code for Python module 'gevent.testing'
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

/* The "module_gevent$testing" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_gevent$testing;
PyDictObject *moduledict_gevent$testing;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[224];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[224];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("gevent.testing"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for(int i = 0; i < 224; i++) {
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
void checkModuleConstants_gevent$testing(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for(int i = 0; i < 224; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_0ccde8493c20ca10d261180f82dc9a9d;
static PyCodeObject *codeobj_c23e54100c1d81918591a7a0ad8b124d;
static PyCodeObject *codeobj_164b1be14ad887f016e1b89617febd6c;
static PyCodeObject *codeobj_aa21c88314ad9bc7a76f71c638e17350;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[219]); CHECK_OBJECT(module_filename_obj);
    codeobj_0ccde8493c20ca10d261180f82dc9a9d = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[220], NULL, NULL, 0, 0, 0);
    codeobj_c23e54100c1d81918591a7a0ad8b124d = MAKE_CODEOBJECT(module_filename_obj, 159, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[199], mod_consts[221], NULL, 0, 0, 0);
    codeobj_164b1be14ad887f016e1b89617febd6c = MAKE_CODEOBJECT(module_filename_obj, 175, CO_NOFREE, mod_consts[201], mod_consts[222], NULL, 0, 0, 0);
    codeobj_aa21c88314ad9bc7a76f71c638e17350 = MAKE_CODEOBJECT(module_filename_obj, 178, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[213], mod_consts[223], NULL, 1, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__1__mro_entries_conversion(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_gevent$testing$$$function__1_gc_collect_if_needed();


static PyObject *MAKE_FUNCTION_gevent$testing$$$function__2_patch();


// The module function definitions.
static PyObject *impl_gevent$testing$$$function__1_gc_collect_if_needed(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *var_gc = NULL;
    struct Nuitka_FrameObject *frame_c23e54100c1d81918591a7a0ad8b124d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_c23e54100c1d81918591a7a0ad8b124d = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_arg_name_1;
        PyObject *tmp_locals_arg_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = mod_consts[0];
        tmp_globals_arg_name_1 = (PyObject *)moduledict_gevent$testing;
        tmp_locals_arg_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = mod_consts[1];
        tmp_assign_source_1 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_arg_name_1, tmp_locals_arg_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        assert(!(tmp_assign_source_1 == NULL));
        assert(var_gc == NULL);
        var_gc = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_c23e54100c1d81918591a7a0ad8b124d)) {
        Py_XDECREF(cache_frame_c23e54100c1d81918591a7a0ad8b124d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c23e54100c1d81918591a7a0ad8b124d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c23e54100c1d81918591a7a0ad8b124d = MAKE_FUNCTION_FRAME(codeobj_c23e54100c1d81918591a7a0ad8b124d, module_gevent$testing, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_c23e54100c1d81918591a7a0ad8b124d->m_type_description == NULL);
    frame_c23e54100c1d81918591a7a0ad8b124d = cache_frame_c23e54100c1d81918591a7a0ad8b124d;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_c23e54100c1d81918591a7a0ad8b124d);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_c23e54100c1d81918591a7a0ad8b124d) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_mvar_value_1;
        int tmp_truth_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_gevent$testing, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_mvar_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_mvar_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(var_gc);
        tmp_called_instance_1 = var_gc;
        frame_c23e54100c1d81918591a7a0ad8b124d->m_frame.f_lineno = 163;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[3]);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_c23e54100c1d81918591a7a0ad8b124d);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_c23e54100c1d81918591a7a0ad8b124d);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c23e54100c1d81918591a7a0ad8b124d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c23e54100c1d81918591a7a0ad8b124d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c23e54100c1d81918591a7a0ad8b124d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c23e54100c1d81918591a7a0ad8b124d,
        type_description_1,
        var_gc
    );


    // Release cached frame if used for exception.
    if (frame_c23e54100c1d81918591a7a0ad8b124d == cache_frame_c23e54100c1d81918591a7a0ad8b124d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_c23e54100c1d81918591a7a0ad8b124d);
        cache_frame_c23e54100c1d81918591a7a0ad8b124d = NULL;
    }

    assertFrameObject(frame_c23e54100c1d81918591a7a0ad8b124d);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_gc);
    var_gc = NULL;
    goto function_return_exit;
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

    Py_XDECREF(var_gc);
    var_gc = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_gevent$testing$$$function__2_patch(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_reason = python_pars[0];
    struct Nuitka_FrameObject *frame_aa21c88314ad9bc7a76f71c638e17350;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_aa21c88314ad9bc7a76f71c638e17350 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_aa21c88314ad9bc7a76f71c638e17350)) {
        Py_XDECREF(cache_frame_aa21c88314ad9bc7a76f71c638e17350);

#if _DEBUG_REFCOUNTS
        if (cache_frame_aa21c88314ad9bc7a76f71c638e17350 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_aa21c88314ad9bc7a76f71c638e17350 = MAKE_FUNCTION_FRAME(codeobj_aa21c88314ad9bc7a76f71c638e17350, module_gevent$testing, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_aa21c88314ad9bc7a76f71c638e17350->m_type_description == NULL);
    frame_aa21c88314ad9bc7a76f71c638e17350 = cache_frame_aa21c88314ad9bc7a76f71c638e17350;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_aa21c88314ad9bc7a76f71c638e17350);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_aa21c88314ad9bc7a76f71c638e17350) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_gevent$testing, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_reason);
        tmp_args_element_name_1 = par_reason;
        frame_aa21c88314ad9bc7a76f71c638e17350->m_frame.f_lineno = 179;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[6], tmp_args_element_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_aa21c88314ad9bc7a76f71c638e17350);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_aa21c88314ad9bc7a76f71c638e17350);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_aa21c88314ad9bc7a76f71c638e17350);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_aa21c88314ad9bc7a76f71c638e17350, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_aa21c88314ad9bc7a76f71c638e17350->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_aa21c88314ad9bc7a76f71c638e17350, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_aa21c88314ad9bc7a76f71c638e17350,
        type_description_1,
        par_reason
    );


    // Release cached frame if used for exception.
    if (frame_aa21c88314ad9bc7a76f71c638e17350 == cache_frame_aa21c88314ad9bc7a76f71c638e17350) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_aa21c88314ad9bc7a76f71c638e17350);
        cache_frame_aa21c88314ad9bc7a76f71c638e17350 = NULL;
    }

    assertFrameObject(frame_aa21c88314ad9bc7a76f71c638e17350);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_reason);
    Py_DECREF(par_reason);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_reason);
    Py_DECREF(par_reason);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_gevent$testing$$$function__1_gc_collect_if_needed() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_gevent$testing$$$function__1_gc_collect_if_needed,
        mod_consts[199],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_c23e54100c1d81918591a7a0ad8b124d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_gevent$testing,
        mod_consts[4],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_gevent$testing$$$function__2_patch() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_gevent$testing$$$function__2_patch,
        mod_consts[213],
#if PYTHON_VERSION >= 0x300
        mod_consts[214],
#endif
        codeobj_aa21c88314ad9bc7a76f71c638e17350,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_gevent$testing,
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

function_impl_code functable_gevent$testing[] = {
    impl_gevent$testing$$$function__1_gc_collect_if_needed,
    impl_gevent$testing$$$function__2_patch,
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

    function_impl_code *current = functable_gevent$testing;
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

    if (offset > sizeof(functable_gevent$testing) || offset < 0) {
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
        functable_gevent$testing[offset],
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
        module_gevent$testing,
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
PyObject *modulecode_gevent$testing(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    module_gevent$testing = module;

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
    PRINT_STRING("gevent.testing: Calling setupMetaPathBasedLoader().\n");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("gevent.testing: Calling createModuleConstants().\n");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("gevent.testing: Calling createModuleCodeObjects().\n");
#endif
    createModuleCodeObjects();

    // PRINT_STRING("in initgevent$testing\n");

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.

    moduledict_gevent$testing = MODULE_DICT(module_gevent$testing);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_gevent$testing,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_gevent$testing,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 1
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_gevent$testing, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_gevent$testing,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_gevent$testing, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_gevent$testing,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_gevent$testing, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_gevent$testing,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_gevent$testing);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_gevent$testing, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_gevent$testing, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 0x300
    UPDATE_STRING_DICT0(moduledict_gevent$testing, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_gevent$testing, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_gevent$testing);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_gevent$testing, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__bases_orig = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    nuitka_bool tmp_try_except_2__unhandled_indicator = NUITKA_BOOL_UNASSIGNED;
    struct Nuitka_FrameObject *frame_0ccde8493c20ca10d261180f82dc9a9d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_dictset_value;
    PyObject *tmp_dictset_dict;
    PyObject *tmp_dictset_key;
    int tmp_res;
    bool tmp_result;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_preserved_type_2;
    PyObject *exception_preserved_value_2;
    PyTracebackObject *exception_preserved_tb_2;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_preserved_type_4;
    PyObject *exception_preserved_value_4;
    PyTracebackObject *exception_preserved_tb_4;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_preserved_type_3;
    PyObject *exception_preserved_value_3;
    PyTracebackObject *exception_preserved_tb_3;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *locals_gevent$testing$$$class__1_mock_175 = NULL;
    struct Nuitka_FrameObject *frame_164b1be14ad887f016e1b89617febd6c_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_164b1be14ad887f016e1b89617febd6c_2 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_gevent$testing, (Nuitka_StringObject *)mod_consts[7], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_gevent$testing, (Nuitka_StringObject *)mod_consts[8], tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_0ccde8493c20ca10d261180f82dc9a9d = MAKE_MODULE_FRAME(codeobj_0ccde8493c20ca10d261180f82dc9a9d, module_gevent$testing);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_0ccde8493c20ca10d261180f82dc9a9d);
    assert(Py_REFCNT(frame_0ccde8493c20ca10d261180f82dc9a9d) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_list_element_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_args_element_name_1;
        frame_0ccde8493c20ca10d261180f82dc9a9d->m_frame.f_lineno = 1;
        {
            PyObject *hard_module = IMPORT_HARD_OS();
            tmp_expression_name_1 = LOOKUP_ATTRIBUTE(hard_module, mod_consts[9]);
        }

        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[10]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_1 = module_filename_obj;
        frame_0ccde8493c20ca10d261180f82dc9a9d->m_frame.f_lineno = 1;
        tmp_list_element_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        Py_DECREF(tmp_called_name_1);
        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = PyList_New(3);
        {
            PyObject *tmp_called_name_2;
            PyObject *tmp_expression_name_2;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_called_instance_2;
            PyList_SET_ITEM(tmp_assign_source_3, 0, tmp_list_element_1);
            frame_0ccde8493c20ca10d261180f82dc9a9d->m_frame.f_lineno = 1;
            {
                PyObject *hard_module = IMPORT_HARD_OS();
                tmp_expression_name_2 = LOOKUP_ATTRIBUTE(hard_module, mod_consts[9]);
            }

            if (tmp_expression_name_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1;

                goto list_build_exception_1;
            }
            tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[11]);
            if (tmp_called_name_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1;

                goto list_build_exception_1;
            }
            frame_0ccde8493c20ca10d261180f82dc9a9d->m_frame.f_lineno = 1;
            {
                PyObject *hard_module = IMPORT_HARD_OS();
                tmp_called_instance_1 = LOOKUP_ATTRIBUTE(hard_module, mod_consts[12]);
            }

            if (tmp_called_instance_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_2);

                exception_lineno = 1;

                goto list_build_exception_1;
            }
            frame_0ccde8493c20ca10d261180f82dc9a9d->m_frame.f_lineno = 1;
            tmp_args_element_name_2 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[13],
                &PyTuple_GET_ITEM(mod_consts[14], 0)
            );

            if (tmp_args_element_name_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_2);

                exception_lineno = 1;

                goto list_build_exception_1;
            }
            tmp_args_element_name_3 = mod_consts[15];
            frame_0ccde8493c20ca10d261180f82dc9a9d->m_frame.f_lineno = 1;
            {
                PyObject *call_args[] = {tmp_args_element_name_2, tmp_args_element_name_3};
                tmp_list_element_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_2, call_args);
            }

            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_args_element_name_2);
            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1;

                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_assign_source_3, 1, tmp_list_element_1);
            frame_0ccde8493c20ca10d261180f82dc9a9d->m_frame.f_lineno = 1;
            {
                PyObject *hard_module = IMPORT_HARD_OS();
                tmp_called_instance_2 = LOOKUP_ATTRIBUTE(hard_module, mod_consts[12]);
            }

            if (tmp_called_instance_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1;

                goto list_build_exception_1;
            }
            frame_0ccde8493c20ca10d261180f82dc9a9d->m_frame.f_lineno = 1;
            tmp_list_element_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_2,
                mod_consts[13],
                &PyTuple_GET_ITEM(mod_consts[16], 0)
            );

            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1;

                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_assign_source_3, 2, tmp_list_element_1);
        }
        goto list_build_noexception_1;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_assign_source_3);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_1:;
        UPDATE_STRING_DICT1(moduledict_gevent$testing, (Nuitka_StringObject *)mod_consts[17], tmp_assign_source_3);
    }
    {
        PyObject *tmp_expression_name_3;
        PyObject *tmp_subscript_name_1;
        tmp_dictset_value = Nuitka_Loader_New(loader_entry);
        tmp_dictset_dict = PySys_GetObject((char *)"path_importer_cache");
        if (tmp_dictset_dict == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_3 = GET_STRING_DICT_VALUE(moduledict_gevent$testing, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_expression_name_3 == NULL)) {
            tmp_expression_name_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        assert(!(tmp_expression_name_3 == NULL));
        tmp_subscript_name_1 = mod_consts[1];
        tmp_dictset_key = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_3, tmp_subscript_name_1, 0);
        if (tmp_dictset_key == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);
        Py_DECREF(tmp_dictset_key);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_gevent$testing, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[19], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_gevent$testing, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[20], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        tmp_assattr_value_3 = GET_STRING_DICT_VALUE(moduledict_gevent$testing, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_assattr_value_3 == NULL)) {
            tmp_assattr_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_assattr_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_3 = GET_STRING_DICT_VALUE(moduledict_gevent$testing, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_assattr_target_3 == NULL)) {
            tmp_assattr_target_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        assert(!(tmp_assattr_target_3 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[21], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = Py_None;
        UPDATE_STRING_DICT0(moduledict_gevent$testing, (Nuitka_StringObject *)mod_consts[22], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_arg_name_1;
        PyObject *tmp_locals_arg_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = mod_consts[5];
        tmp_globals_arg_name_1 = (PyObject *)moduledict_gevent$testing;
        tmp_locals_arg_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = mod_consts[1];
        frame_0ccde8493c20ca10d261180f82dc9a9d->m_frame.f_lineno = 24;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_arg_name_1, tmp_locals_arg_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gevent$testing, (Nuitka_StringObject *)mod_consts[5], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_arg_name_2;
        PyObject *tmp_locals_arg_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = mod_consts[23];
        tmp_globals_arg_name_2 = (PyObject *)moduledict_gevent$testing;
        tmp_locals_arg_name_2 = Py_None;
        tmp_fromlist_name_2 = mod_consts[24];
        tmp_level_name_2 = mod_consts[25];
        frame_0ccde8493c20ca10d261180f82dc9a9d->m_frame.f_lineno = 33;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_name_2, tmp_globals_arg_name_2, tmp_locals_arg_name_2, tmp_fromlist_name_2, tmp_level_name_2);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_gevent$testing,
                mod_consts[26],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[26]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gevent$testing, (Nuitka_StringObject *)mod_consts[26], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_arg_name_3;
        PyObject *tmp_locals_arg_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = mod_consts[27];
        tmp_globals_arg_name_3 = (PyObject *)moduledict_gevent$testing;
        tmp_locals_arg_name_3 = Py_None;
        tmp_fromlist_name_3 = Py_None;
        tmp_level_name_3 = mod_consts[1];
        frame_0ccde8493c20ca10d261180f82dc9a9d->m_frame.f_lineno = 34;
        tmp_assign_source_7 = IMPORT_MODULE5(tmp_name_name_3, tmp_globals_arg_name_3, tmp_locals_arg_name_3, tmp_fromlist_name_3, tmp_level_name_3);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gevent$testing, (Nuitka_StringObject *)mod_consts[28], tmp_assign_source_7);
    }
    {
        PyObject *tmp_called_name_3;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_4;
        tmp_expression_name_5 = GET_STRING_DICT_VALUE(moduledict_gevent$testing, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_expression_name_5 == NULL)) {
            tmp_expression_name_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
        }

        assert(!(tmp_expression_name_5 == NULL));
        tmp_expression_name_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, mod_consts[23]);
        if (tmp_expression_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        tmp_called_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[29]);
        Py_DECREF(tmp_expression_name_4);
        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_4 = GET_STRING_DICT_VALUE(moduledict_gevent$testing, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_args_element_name_4 == NULL)) {
            tmp_args_element_name_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        if (tmp_args_element_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_3);

            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        frame_0ccde8493c20ca10d261180f82dc9a9d->m_frame.f_lineno = 35;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_3, tmp_args_element_name_4);
        Py_DECREF(tmp_called_name_3);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_arg_name_4;
        PyObject *tmp_locals_arg_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = mod_consts[30];
        tmp_globals_arg_name_4 = (PyObject *)moduledict_gevent$testing;
        tmp_locals_arg_name_4 = Py_None;
        tmp_fromlist_name_4 = Py_None;
        tmp_level_name_4 = mod_consts[1];
        frame_0ccde8493c20ca10d261180f82dc9a9d->m_frame.f_lineno = 38;
        tmp_assign_source_8 = IMPORT_MODULE5(tmp_name_name_4, tmp_globals_arg_name_4, tmp_locals_arg_name_4, tmp_fromlist_name_4, tmp_level_name_4);
        assert(!(tmp_assign_source_8 == NULL));
        UPDATE_STRING_DICT1(moduledict_gevent$testing, (Nuitka_StringObject *)mod_consts[30], tmp_assign_source_8);
    }
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_2;
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_gevent$testing, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        assert(!(tmp_called_instance_3 == NULL));
        frame_0ccde8493c20ca10d261180f82dc9a9d->m_frame.f_lineno = 45;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[31]);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        nuitka_bool tmp_assign_source_9;
        tmp_assign_source_9 = NUITKA_BOOL_TRUE;
        tmp_try_except_2__unhandled_indicator = tmp_assign_source_9;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_arg_name_5;
        PyObject *tmp_locals_arg_name_5;
        PyObject *tmp_fromlist_name_5;
        PyObject *tmp_level_name_5;
        tmp_name_name_5 = mod_consts[32];
        tmp_globals_arg_name_5 = (PyObject *)moduledict_gevent$testing;
        tmp_locals_arg_name_5 = Py_None;
        tmp_fromlist_name_5 = mod_consts[33];
        tmp_level_name_5 = mod_consts[1];
        frame_0ccde8493c20ca10d261180f82dc9a9d->m_frame.f_lineno = 48;
        tmp_import_name_from_2 = IMPORT_MODULE5(tmp_name_name_5, tmp_globals_arg_name_5, tmp_locals_arg_name_5, tmp_fromlist_name_5, tmp_level_name_5);
        if (tmp_import_name_from_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto try_except_handler_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_gevent$testing,
                mod_consts[34],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[34]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_gevent$testing, (Nuitka_StringObject *)mod_consts[34], tmp_assign_source_10);
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

    {
        nuitka_bool tmp_assign_source_11;
        tmp_assign_source_11 = NUITKA_BOOL_FALSE;
        tmp_try_except_2__unhandled_indicator = tmp_assign_source_11;
    }
    // Preserve existing published exception id 2.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_2, &exception_preserved_value_2, &exception_preserved_tb_2);

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_0ccde8493c20ca10d261180f82dc9a9d, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_0ccde8493c20ca10d261180f82dc9a9d, exception_keeper_lineno_1);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_1, exception_keeper_tb_1);
    PUBLISH_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_1 = PyExc_ImportError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_1, tmp_compexpr_right_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_1 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 47;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_0ccde8493c20ca10d261180f82dc9a9d->m_frame) frame_0ccde8493c20ca10d261180f82dc9a9d->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_2;
    branch_no_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2);

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2);

    goto try_end_1;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_1:;
    {
        bool tmp_condition_result_2;
        nuitka_bool tmp_compexpr_left_2;
        nuitka_bool tmp_compexpr_right_2;
        assert(tmp_try_except_2__unhandled_indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_compexpr_left_2 = tmp_try_except_2__unhandled_indicator;
        tmp_compexpr_right_2 = NUITKA_BOOL_TRUE;
        tmp_condition_result_2 = (tmp_compexpr_left_2 == tmp_compexpr_right_2) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_called_instance_4;
        PyObject *tmp_expression_name_6;
        PyObject *tmp_call_result_3;
        tmp_expression_name_6 = GET_STRING_DICT_VALUE(moduledict_gevent$testing, (Nuitka_StringObject *)mod_consts[34]);

        if (unlikely(tmp_expression_name_6 == NULL)) {
            tmp_expression_name_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[34]);
        }

        if (tmp_expression_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;

            goto frame_exception_exit_1;
        }
        tmp_called_instance_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_6, mod_consts[35]);
        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;

            goto frame_exception_exit_1;
        }
        frame_0ccde8493c20ca10d261180f82dc9a9d->m_frame.f_lineno = 52;
        tmp_call_result_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_4, mod_consts[36]);
        Py_DECREF(tmp_called_instance_4);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    tmp_res = PyDict_DelItem((PyObject *)moduledict_gevent$testing, mod_consts[34]);
    tmp_result = tmp_res != -1;
    if (tmp_result == false) CLEAR_ERROR_OCCURRED();

    if (unlikely(tmp_result == false)) {

        FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[34]);
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 53;

        goto frame_exception_exit_1;
    }

    branch_no_2:;
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_name_6;
        PyObject *tmp_globals_arg_name_6;
        PyObject *tmp_locals_arg_name_6;
        PyObject *tmp_fromlist_name_6;
        PyObject *tmp_level_name_6;
        tmp_name_name_6 = mod_consts[37];
        tmp_globals_arg_name_6 = (PyObject *)moduledict_gevent$testing;
        tmp_locals_arg_name_6 = Py_None;
        tmp_fromlist_name_6 = mod_consts[38];
        tmp_level_name_6 = mod_consts[25];
        frame_0ccde8493c20ca10d261180f82dc9a9d->m_frame.f_lineno = 55;
        tmp_import_name_from_3 = IMPORT_MODULE5(tmp_name_name_6, tmp_globals_arg_name_6, tmp_locals_arg_name_6, tmp_fromlist_name_6, tmp_level_name_6);
        if (tmp_import_name_from_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_gevent$testing,
                mod_consts[39],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[39]);
        }

        Py_DECREF(tmp_import_name_from_3);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gevent$testing, (Nuitka_StringObject *)mod_consts[39], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_name_7;
        PyObject *tmp_globals_arg_name_7;
        PyObject *tmp_locals_arg_name_7;
        PyObject *tmp_fromlist_name_7;
        PyObject *tmp_level_name_7;
        tmp_name_name_7 = mod_consts[37];
        tmp_globals_arg_name_7 = (PyObject *)moduledict_gevent$testing;
        tmp_locals_arg_name_7 = Py_None;
        tmp_fromlist_name_7 = mod_consts[40];
        tmp_level_name_7 = mod_consts[25];
        frame_0ccde8493c20ca10d261180f82dc9a9d->m_frame.f_lineno = 56;
        tmp_import_name_from_4 = IMPORT_MODULE5(tmp_name_name_7, tmp_globals_arg_name_7, tmp_locals_arg_name_7, tmp_fromlist_name_7, tmp_level_name_7);
        if (tmp_import_name_from_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_gevent$testing,
                mod_consts[41],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME(tmp_import_name_from_4, mod_consts[41]);
        }

        Py_DECREF(tmp_import_name_from_4);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gevent$testing, (Nuitka_StringObject *)mod_consts[41], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_name_8;
        PyObject *tmp_globals_arg_name_8;
        PyObject *tmp_locals_arg_name_8;
        PyObject *tmp_fromlist_name_8;
        PyObject *tmp_level_name_8;
        tmp_name_name_8 = mod_consts[37];
        tmp_globals_arg_name_8 = (PyObject *)moduledict_gevent$testing;
        tmp_locals_arg_name_8 = Py_None;
        tmp_fromlist_name_8 = mod_consts[42];
        tmp_level_name_8 = mod_consts[25];
        frame_0ccde8493c20ca10d261180f82dc9a9d->m_frame.f_lineno = 57;
        tmp_import_name_from_5 = IMPORT_MODULE5(tmp_name_name_8, tmp_globals_arg_name_8, tmp_locals_arg_name_8, tmp_fromlist_name_8, tmp_level_name_8);
        if (tmp_import_name_from_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_gevent$testing,
                mod_consts[43],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME(tmp_import_name_from_5, mod_consts[43]);
        }

        Py_DECREF(tmp_import_name_from_5);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gevent$testing, (Nuitka_StringObject *)mod_consts[43], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_6;
        PyObject *tmp_name_name_9;
        PyObject *tmp_globals_arg_name_9;
        PyObject *tmp_locals_arg_name_9;
        PyObject *tmp_fromlist_name_9;
        PyObject *tmp_level_name_9;
        tmp_name_name_9 = mod_consts[37];
        tmp_globals_arg_name_9 = (PyObject *)moduledict_gevent$testing;
        tmp_locals_arg_name_9 = Py_None;
        tmp_fromlist_name_9 = mod_consts[44];
        tmp_level_name_9 = mod_consts[25];
        frame_0ccde8493c20ca10d261180f82dc9a9d->m_frame.f_lineno = 58;
        tmp_import_name_from_6 = IMPORT_MODULE5(tmp_name_name_9, tmp_globals_arg_name_9, tmp_locals_arg_name_9, tmp_fromlist_name_9, tmp_level_name_9);
        if (tmp_import_name_from_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_gevent$testing,
                mod_consts[45],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME(tmp_import_name_from_6, mod_consts[45]);
        }

        Py_DECREF(tmp_import_name_from_6);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gevent$testing, (Nuitka_StringObject *)mod_consts[45], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_7;
        PyObject *tmp_name_name_10;
        PyObject *tmp_globals_arg_name_10;
        PyObject *tmp_locals_arg_name_10;
        PyObject *tmp_fromlist_name_10;
        PyObject *tmp_level_name_10;
        tmp_name_name_10 = mod_consts[37];
        tmp_globals_arg_name_10 = (PyObject *)moduledict_gevent$testing;
        tmp_locals_arg_name_10 = Py_None;
        tmp_fromlist_name_10 = mod_consts[46];
        tmp_level_name_10 = mod_consts[25];
        frame_0ccde8493c20ca10d261180f82dc9a9d->m_frame.f_lineno = 59;
        tmp_import_name_from_7 = IMPORT_MODULE5(tmp_name_name_10, tmp_globals_arg_name_10, tmp_locals_arg_name_10, tmp_fromlist_name_10, tmp_level_name_10);
        if (tmp_import_name_from_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_gevent$testing,
                mod_consts[47],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME(tmp_import_name_from_7, mod_consts[47]);
        }

        Py_DECREF(tmp_import_name_from_7);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gevent$testing, (Nuitka_StringObject *)mod_consts[47], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_8;
        PyObject *tmp_name_name_11;
        PyObject *tmp_globals_arg_name_11;
        PyObject *tmp_locals_arg_name_11;
        PyObject *tmp_fromlist_name_11;
        PyObject *tmp_level_name_11;
        tmp_name_name_11 = mod_consts[37];
        tmp_globals_arg_name_11 = (PyObject *)moduledict_gevent$testing;
        tmp_locals_arg_name_11 = Py_None;
        tmp_fromlist_name_11 = mod_consts[48];
        tmp_level_name_11 = mod_consts[25];
        frame_0ccde8493c20ca10d261180f82dc9a9d->m_frame.f_lineno = 60;
        tmp_import_name_from_8 = IMPORT_MODULE5(tmp_name_name_11, tmp_globals_arg_name_11, tmp_locals_arg_name_11, tmp_fromlist_name_11, tmp_level_name_11);
        if (tmp_import_name_from_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_gevent$testing,
                mod_consts[49],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME(tmp_import_name_from_8, mod_consts[49]);
        }

        Py_DECREF(tmp_import_name_from_8);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gevent$testing, (Nuitka_StringObject *)mod_consts[49], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_9;
        PyObject *tmp_name_name_12;
        PyObject *tmp_globals_arg_name_12;
        PyObject *tmp_locals_arg_name_12;
        PyObject *tmp_fromlist_name_12;
        PyObject *tmp_level_name_12;
        tmp_name_name_12 = mod_consts[37];
        tmp_globals_arg_name_12 = (PyObject *)moduledict_gevent$testing;
        tmp_locals_arg_name_12 = Py_None;
        tmp_fromlist_name_12 = mod_consts[50];
        tmp_level_name_12 = mod_consts[25];
        frame_0ccde8493c20ca10d261180f82dc9a9d->m_frame.f_lineno = 61;
        tmp_import_name_from_9 = IMPORT_MODULE5(tmp_name_name_12, tmp_globals_arg_name_12, tmp_locals_arg_name_12, tmp_fromlist_name_12, tmp_level_name_12);
        if (tmp_import_name_from_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_9,
                (PyObject *)moduledict_gevent$testing,
                mod_consts[51],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_18 = IMPORT_NAME(tmp_import_name_from_9, mod_consts[51]);
        }

        Py_DECREF(tmp_import_name_from_9);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gevent$testing, (Nuitka_StringObject *)mod_consts[51], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_10;
        PyObject *tmp_name_name_13;
        PyObject *tmp_globals_arg_name_13;
        PyObject *tmp_locals_arg_name_13;
        PyObject *tmp_fromlist_name_13;
        PyObject *tmp_level_name_13;
        tmp_name_name_13 = mod_consts[37];
        tmp_globals_arg_name_13 = (PyObject *)moduledict_gevent$testing;
        tmp_locals_arg_name_13 = Py_None;
        tmp_fromlist_name_13 = mod_consts[52];
        tmp_level_name_13 = mod_consts[25];
        frame_0ccde8493c20ca10d261180f82dc9a9d->m_frame.f_lineno = 62;
        tmp_import_name_from_10 = IMPORT_MODULE5(tmp_name_name_13, tmp_globals_arg_name_13, tmp_locals_arg_name_13, tmp_fromlist_name_13, tmp_level_name_13);
        if (tmp_import_name_from_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_10)) {
            tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_10,
                (PyObject *)moduledict_gevent$testing,
                mod_consts[53],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_19 = IMPORT_NAME(tmp_import_name_from_10, mod_consts[53]);
        }

        Py_DECREF(tmp_import_name_from_10);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gevent$testing, (Nuitka_StringObject *)mod_consts[53], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_import_name_from_11;
        PyObject *tmp_name_name_14;
        PyObject *tmp_globals_arg_name_14;
        PyObject *tmp_locals_arg_name_14;
        PyObject *tmp_fromlist_name_14;
        PyObject *tmp_level_name_14;
        tmp_name_name_14 = mod_consts[37];
        tmp_globals_arg_name_14 = (PyObject *)moduledict_gevent$testing;
        tmp_locals_arg_name_14 = Py_None;
        tmp_fromlist_name_14 = mod_consts[54];
        tmp_level_name_14 = mod_consts[25];
        frame_0ccde8493c20ca10d261180f82dc9a9d->m_frame.f_lineno = 63;
        tmp_import_name_from_11 = IMPORT_MODULE5(tmp_name_name_14, tmp_globals_arg_name_14, tmp_locals_arg_name_14, tmp_fromlist_name_14, tmp_level_name_14);
        if (tmp_import_name_from_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_11)) {
            tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_11,
                (PyObject *)moduledict_gevent$testing,
                mod_consts[55],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_20 = IMPORT_NAME(tmp_import_name_from_11, mod_consts[55]);
        }

        Py_DECREF(tmp_import_name_from_11);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gevent$testing, (Nuitka_StringObject *)mod_consts[55], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_import_name_from_12;
        PyObject *tmp_name_name_15;
        PyObject *tmp_globals_arg_name_15;
        PyObject *tmp_locals_arg_name_15;
        PyObject *tmp_fromlist_name_15;
        PyObject *tmp_level_name_15;
        tmp_name_name_15 = mod_consts[37];
        tmp_globals_arg_name_15 = (PyObject *)moduledict_gevent$testing;
        tmp_locals_arg_name_15 = Py_None;
        tmp_fromlist_name_15 = mod_consts[56];
        tmp_level_name_15 = mod_consts[25];
        frame_0ccde8493c20ca10d261180f82dc9a9d->m_frame.f_lineno = 65;
        tmp_import_name_from_12 = IMPORT_MODULE5(tmp_name_name_15, tmp_globals_arg_name_15, tmp_locals_arg_name_15, tmp_fromlist_name_15, tmp_level_name_15);
        if (tmp_import_name_from_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_12)) {
            tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_12,
                (PyObject *)moduledict_gevent$testing,
                mod_consts[57],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_21 = IMPORT_NAME(tmp_import_name_from_12, mod_consts[57]);
        }

        Py_DECREF(tmp_import_name_from_12);
        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gevent$testing, (Nuitka_StringObject *)mod_consts[57], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_import_name_from_13;
        PyObject *tmp_name_name_16;
        PyObject *tmp_globals_arg_name_16;
        PyObject *tmp_locals_arg_name_16;
        PyObject *tmp_fromlist_name_16;
        PyObject *tmp_level_name_16;
        tmp_name_name_16 = mod_consts[37];
        tmp_globals_arg_name_16 = (PyObject *)moduledict_gevent$testing;
        tmp_locals_arg_name_16 = Py_None;
        tmp_fromlist_name_16 = mod_consts[58];
        tmp_level_name_16 = mod_consts[25];
        frame_0ccde8493c20ca10d261180f82dc9a9d->m_frame.f_lineno = 66;
        tmp_import_name_from_13 = IMPORT_MODULE5(tmp_name_name_16, tmp_globals_arg_name_16, tmp_locals_arg_name_16, tmp_fromlist_name_16, tmp_level_name_16);
        if (tmp_import_name_from_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_13)) {
            tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_13,
                (PyObject *)moduledict_gevent$testing,
                mod_consts[59],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_22 = IMPORT_NAME(tmp_import_name_from_13, mod_consts[59]);
        }

        Py_DECREF(tmp_import_name_from_13);
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gevent$testing, (Nuitka_StringObject *)mod_consts[59], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_import_name_from_14;
        PyObject *tmp_name_name_17;
        PyObject *tmp_globals_arg_name_17;
        PyObject *tmp_locals_arg_name_17;
        PyObject *tmp_fromlist_name_17;
        PyObject *tmp_level_name_17;
        tmp_name_name_17 = mod_consts[37];
        tmp_globals_arg_name_17 = (PyObject *)moduledict_gevent$testing;
        tmp_locals_arg_name_17 = Py_None;
        tmp_fromlist_name_17 = mod_consts[60];
        tmp_level_name_17 = mod_consts[25];
        frame_0ccde8493c20ca10d261180f82dc9a9d->m_frame.f_lineno = 67;
        tmp_import_name_from_14 = IMPORT_MODULE5(tmp_name_name_17, tmp_globals_arg_name_17, tmp_locals_arg_name_17, tmp_fromlist_name_17, tmp_level_name_17);
        if (tmp_import_name_from_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_14)) {
            tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_14,
                (PyObject *)moduledict_gevent$testing,
                mod_consts[61],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_23 = IMPORT_NAME(tmp_import_name_from_14, mod_consts[61]);
        }

        Py_DECREF(tmp_import_name_from_14);
        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gevent$testing, (Nuitka_StringObject *)mod_consts[61], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_import_name_from_15;
        PyObject *tmp_name_name_18;
        PyObject *tmp_globals_arg_name_18;
        PyObject *tmp_locals_arg_name_18;
        PyObject *tmp_fromlist_name_18;
        PyObject *tmp_level_name_18;
        tmp_name_name_18 = mod_consts[37];
        tmp_globals_arg_name_18 = (PyObject *)moduledict_gevent$testing;
        tmp_locals_arg_name_18 = Py_None;
        tmp_fromlist_name_18 = mod_consts[62];
        tmp_level_name_18 = mod_consts[25];
        frame_0ccde8493c20ca10d261180f82dc9a9d->m_frame.f_lineno = 68;
        tmp_import_name_from_15 = IMPORT_MODULE5(tmp_name_name_18, tmp_globals_arg_name_18, tmp_locals_arg_name_18, tmp_fromlist_name_18, tmp_level_name_18);
        if (tmp_import_name_from_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_15)) {
            tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_15,
                (PyObject *)moduledict_gevent$testing,
                mod_consts[63],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_24 = IMPORT_NAME(tmp_import_name_from_15, mod_consts[63]);
        }

        Py_DECREF(tmp_import_name_from_15);
        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gevent$testing, (Nuitka_StringObject *)mod_consts[63], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_import_name_from_16;
        PyObject *tmp_name_name_19;
        PyObject *tmp_globals_arg_name_19;
        PyObject *tmp_locals_arg_name_19;
        PyObject *tmp_fromlist_name_19;
        PyObject *tmp_level_name_19;
        tmp_name_name_19 = mod_consts[37];
        tmp_globals_arg_name_19 = (PyObject *)moduledict_gevent$testing;
        tmp_locals_arg_name_19 = Py_None;
        tmp_fromlist_name_19 = mod_consts[64];
        tmp_level_name_19 = mod_consts[25];
        frame_0ccde8493c20ca10d261180f82dc9a9d->m_frame.f_lineno = 70;
        tmp_import_name_from_16 = IMPORT_MODULE5(tmp_name_name_19, tmp_globals_arg_name_19, tmp_locals_arg_name_19, tmp_fromlist_name_19, tmp_level_name_19);
        if (tmp_import_name_from_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_16)) {
            tmp_assign_source_25 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_16,
                (PyObject *)moduledict_gevent$testing,
                mod_consts[2],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_25 = IMPORT_NAME(tmp_import_name_from_16, mod_consts[2]);
        }

        Py_DECREF(tmp_import_name_from_16);
        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gevent$testing, (Nuitka_StringObject *)mod_consts[2], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_import_name_from_17;
        PyObject *tmp_name_name_20;
        PyObject *tmp_globals_arg_name_20;
        PyObject *tmp_locals_arg_name_20;
        PyObject *tmp_fromlist_name_20;
        PyObject *tmp_level_name_20;
        tmp_name_name_20 = mod_consts[37];
        tmp_globals_arg_name_20 = (PyObject *)moduledict_gevent$testing;
        tmp_locals_arg_name_20 = Py_None;
        tmp_fromlist_name_20 = mod_consts[65];
        tmp_level_name_20 = mod_consts[25];
        frame_0ccde8493c20ca10d261180f82dc9a9d->m_frame.f_lineno = 71;
        tmp_import_name_from_17 = IMPORT_MODULE5(tmp_name_name_20, tmp_globals_arg_name_20, tmp_locals_arg_name_20, tmp_fromlist_name_20, tmp_level_name_20);
        if (tmp_import_name_from_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_17)) {
            tmp_assign_source_26 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_17,
                (PyObject *)moduledict_gevent$testing,
                mod_consts[66],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_26 = IMPORT_NAME(tmp_import_name_from_17, mod_consts[66]);
        }

        Py_DECREF(tmp_import_name_from_17);
        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gevent$testing, (Nuitka_StringObject *)mod_consts[66], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_import_name_from_18;
        PyObject *tmp_name_name_21;
        PyObject *tmp_globals_arg_name_21;
        PyObject *tmp_locals_arg_name_21;
        PyObject *tmp_fromlist_name_21;
        PyObject *tmp_level_name_21;
        tmp_name_name_21 = mod_consts[37];
        tmp_globals_arg_name_21 = (PyObject *)moduledict_gevent$testing;
        tmp_locals_arg_name_21 = Py_None;
        tmp_fromlist_name_21 = mod_consts[67];
        tmp_level_name_21 = mod_consts[25];
        frame_0ccde8493c20ca10d261180f82dc9a9d->m_frame.f_lineno = 72;
        tmp_import_name_from_18 = IMPORT_MODULE5(tmp_name_name_21, tmp_globals_arg_name_21, tmp_locals_arg_name_21, tmp_fromlist_name_21, tmp_level_name_21);
        if (tmp_import_name_from_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_18)) {
            tmp_assign_source_27 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_18,
                (PyObject *)moduledict_gevent$testing,
                mod_consts[68],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_27 = IMPORT_NAME(tmp_import_name_from_18, mod_consts[68]);
        }

        Py_DECREF(tmp_import_name_from_18);
        if (tmp_assign_source_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gevent$testing, (Nuitka_StringObject *)mod_consts[68], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_import_name_from_19;
        PyObject *tmp_name_name_22;
        PyObject *tmp_globals_arg_name_22;
        PyObject *tmp_locals_arg_name_22;
        PyObject *tmp_fromlist_name_22;
        PyObject *tmp_level_name_22;
        tmp_name_name_22 = mod_consts[37];
        tmp_globals_arg_name_22 = (PyObject *)moduledict_gevent$testing;
        tmp_locals_arg_name_22 = Py_None;
        tmp_fromlist_name_22 = mod_consts[69];
        tmp_level_name_22 = mod_consts[25];
        frame_0ccde8493c20ca10d261180f82dc9a9d->m_frame.f_lineno = 74;
        tmp_import_name_from_19 = IMPORT_MODULE5(tmp_name_name_22, tmp_globals_arg_name_22, tmp_locals_arg_name_22, tmp_fromlist_name_22, tmp_level_name_22);
        if (tmp_import_name_from_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_19)) {
            tmp_assign_source_28 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_19,
                (PyObject *)moduledict_gevent$testing,
                mod_consts[70],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_28 = IMPORT_NAME(tmp_import_name_from_19, mod_consts[70]);
        }

        Py_DECREF(tmp_import_name_from_19);
        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gevent$testing, (Nuitka_StringObject *)mod_consts[70], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_import_name_from_20;
        PyObject *tmp_name_name_23;
        PyObject *tmp_globals_arg_name_23;
        PyObject *tmp_locals_arg_name_23;
        PyObject *tmp_fromlist_name_23;
        PyObject *tmp_level_name_23;
        tmp_name_name_23 = mod_consts[37];
        tmp_globals_arg_name_23 = (PyObject *)moduledict_gevent$testing;
        tmp_locals_arg_name_23 = Py_None;
        tmp_fromlist_name_23 = mod_consts[71];
        tmp_level_name_23 = mod_consts[25];
        frame_0ccde8493c20ca10d261180f82dc9a9d->m_frame.f_lineno = 75;
        tmp_import_name_from_20 = IMPORT_MODULE5(tmp_name_name_23, tmp_globals_arg_name_23, tmp_locals_arg_name_23, tmp_fromlist_name_23, tmp_level_name_23);
        if (tmp_import_name_from_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_20)) {
            tmp_assign_source_29 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_20,
                (PyObject *)moduledict_gevent$testing,
                mod_consts[72],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_29 = IMPORT_NAME(tmp_import_name_from_20, mod_consts[72]);
        }

        Py_DECREF(tmp_import_name_from_20);
        if (tmp_assign_source_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gevent$testing, (Nuitka_StringObject *)mod_consts[72], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_import_name_from_21;
        PyObject *tmp_name_name_24;
        PyObject *tmp_globals_arg_name_24;
        PyObject *tmp_locals_arg_name_24;
        PyObject *tmp_fromlist_name_24;
        PyObject *tmp_level_name_24;
        tmp_name_name_24 = mod_consts[37];
        tmp_globals_arg_name_24 = (PyObject *)moduledict_gevent$testing;
        tmp_locals_arg_name_24 = Py_None;
        tmp_fromlist_name_24 = mod_consts[73];
        tmp_level_name_24 = mod_consts[25];
        frame_0ccde8493c20ca10d261180f82dc9a9d->m_frame.f_lineno = 76;
        tmp_import_name_from_21 = IMPORT_MODULE5(tmp_name_name_24, tmp_globals_arg_name_24, tmp_locals_arg_name_24, tmp_fromlist_name_24, tmp_level_name_24);
        if (tmp_import_name_from_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_21)) {
            tmp_assign_source_30 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_21,
                (PyObject *)moduledict_gevent$testing,
                mod_consts[74],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_30 = IMPORT_NAME(tmp_import_name_from_21, mod_consts[74]);
        }

        Py_DECREF(tmp_import_name_from_21);
        if (tmp_assign_source_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gevent$testing, (Nuitka_StringObject *)mod_consts[74], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_import_name_from_22;
        PyObject *tmp_name_name_25;
        PyObject *tmp_globals_arg_name_25;
        PyObject *tmp_locals_arg_name_25;
        PyObject *tmp_fromlist_name_25;
        PyObject *tmp_level_name_25;
        tmp_name_name_25 = mod_consts[37];
        tmp_globals_arg_name_25 = (PyObject *)moduledict_gevent$testing;
        tmp_locals_arg_name_25 = Py_None;
        tmp_fromlist_name_25 = mod_consts[75];
        tmp_level_name_25 = mod_consts[25];
        frame_0ccde8493c20ca10d261180f82dc9a9d->m_frame.f_lineno = 78;
        tmp_import_name_from_22 = IMPORT_MODULE5(tmp_name_name_25, tmp_globals_arg_name_25, tmp_locals_arg_name_25, tmp_fromlist_name_25, tmp_level_name_25);
        if (tmp_import_name_from_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_22)) {
            tmp_assign_source_31 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_22,
                (PyObject *)moduledict_gevent$testing,
                mod_consts[76],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_31 = IMPORT_NAME(tmp_import_name_from_22, mod_consts[76]);
        }

        Py_DECREF(tmp_import_name_from_22);
        if (tmp_assign_source_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gevent$testing, (Nuitka_StringObject *)mod_consts[76], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_import_name_from_23;
        PyObject *tmp_name_name_26;
        PyObject *tmp_globals_arg_name_26;
        PyObject *tmp_locals_arg_name_26;
        PyObject *tmp_fromlist_name_26;
        PyObject *tmp_level_name_26;
        tmp_name_name_26 = mod_consts[37];
        tmp_globals_arg_name_26 = (PyObject *)moduledict_gevent$testing;
        tmp_locals_arg_name_26 = Py_None;
        tmp_fromlist_name_26 = mod_consts[77];
        tmp_level_name_26 = mod_consts[25];
        frame_0ccde8493c20ca10d261180f82dc9a9d->m_frame.f_lineno = 79;
        tmp_import_name_from_23 = IMPORT_MODULE5(tmp_name_name_26, tmp_globals_arg_name_26, tmp_locals_arg_name_26, tmp_fromlist_name_26, tmp_level_name_26);
        if (tmp_import_name_from_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_23)) {
            tmp_assign_source_32 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_23,
                (PyObject *)moduledict_gevent$testing,
                mod_consts[78],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_32 = IMPORT_NAME(tmp_import_name_from_23, mod_consts[78]);
        }

        Py_DECREF(tmp_import_name_from_23);
        if (tmp_assign_source_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gevent$testing, (Nuitka_StringObject *)mod_consts[78], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_import_name_from_24;
        PyObject *tmp_name_name_27;
        PyObject *tmp_globals_arg_name_27;
        PyObject *tmp_locals_arg_name_27;
        PyObject *tmp_fromlist_name_27;
        PyObject *tmp_level_name_27;
        tmp_name_name_27 = mod_consts[37];
        tmp_globals_arg_name_27 = (PyObject *)moduledict_gevent$testing;
        tmp_locals_arg_name_27 = Py_None;
        tmp_fromlist_name_27 = mod_consts[79];
        tmp_level_name_27 = mod_consts[25];
        frame_0ccde8493c20ca10d261180f82dc9a9d->m_frame.f_lineno = 80;
        tmp_import_name_from_24 = IMPORT_MODULE5(tmp_name_name_27, tmp_globals_arg_name_27, tmp_locals_arg_name_27, tmp_fromlist_name_27, tmp_level_name_27);
        if (tmp_import_name_from_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_24)) {
            tmp_assign_source_33 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_24,
                (PyObject *)moduledict_gevent$testing,
                mod_consts[80],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_33 = IMPORT_NAME(tmp_import_name_from_24, mod_consts[80]);
        }

        Py_DECREF(tmp_import_name_from_24);
        if (tmp_assign_source_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gevent$testing, (Nuitka_StringObject *)mod_consts[80], tmp_assign_source_33);
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_import_name_from_25;
        PyObject *tmp_name_name_28;
        PyObject *tmp_globals_arg_name_28;
        PyObject *tmp_locals_arg_name_28;
        PyObject *tmp_fromlist_name_28;
        PyObject *tmp_level_name_28;
        tmp_name_name_28 = mod_consts[37];
        tmp_globals_arg_name_28 = (PyObject *)moduledict_gevent$testing;
        tmp_locals_arg_name_28 = Py_None;
        tmp_fromlist_name_28 = mod_consts[81];
        tmp_level_name_28 = mod_consts[25];
        frame_0ccde8493c20ca10d261180f82dc9a9d->m_frame.f_lineno = 82;
        tmp_import_name_from_25 = IMPORT_MODULE5(tmp_name_name_28, tmp_globals_arg_name_28, tmp_locals_arg_name_28, tmp_fromlist_name_28, tmp_level_name_28);
        if (tmp_import_name_from_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_25)) {
            tmp_assign_source_34 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_25,
                (PyObject *)moduledict_gevent$testing,
                mod_consts[82],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_34 = IMPORT_NAME(tmp_import_name_from_25, mod_consts[82]);
        }

        Py_DECREF(tmp_import_name_from_25);
        if (tmp_assign_source_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gevent$testing, (Nuitka_StringObject *)mod_consts[82], tmp_assign_source_34);
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_import_name_from_26;
        PyObject *tmp_name_name_29;
        PyObject *tmp_globals_arg_name_29;
        PyObject *tmp_locals_arg_name_29;
        PyObject *tmp_fromlist_name_29;
        PyObject *tmp_level_name_29;
        tmp_name_name_29 = mod_consts[37];
        tmp_globals_arg_name_29 = (PyObject *)moduledict_gevent$testing;
        tmp_locals_arg_name_29 = Py_None;
        tmp_fromlist_name_29 = mod_consts[83];
        tmp_level_name_29 = mod_consts[25];
        frame_0ccde8493c20ca10d261180f82dc9a9d->m_frame.f_lineno = 83;
        tmp_import_name_from_26 = IMPORT_MODULE5(tmp_name_name_29, tmp_globals_arg_name_29, tmp_locals_arg_name_29, tmp_fromlist_name_29, tmp_level_name_29);
        if (tmp_import_name_from_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_26)) {
            tmp_assign_source_35 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_26,
                (PyObject *)moduledict_gevent$testing,
                mod_consts[84],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_35 = IMPORT_NAME(tmp_import_name_from_26, mod_consts[84]);
        }

        Py_DECREF(tmp_import_name_from_26);
        if (tmp_assign_source_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gevent$testing, (Nuitka_StringObject *)mod_consts[84], tmp_assign_source_35);
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_import_name_from_27;
        PyObject *tmp_name_name_30;
        PyObject *tmp_globals_arg_name_30;
        PyObject *tmp_locals_arg_name_30;
        PyObject *tmp_fromlist_name_30;
        PyObject *tmp_level_name_30;
        tmp_name_name_30 = mod_consts[37];
        tmp_globals_arg_name_30 = (PyObject *)moduledict_gevent$testing;
        tmp_locals_arg_name_30 = Py_None;
        tmp_fromlist_name_30 = mod_consts[85];
        tmp_level_name_30 = mod_consts[25];
        frame_0ccde8493c20ca10d261180f82dc9a9d->m_frame.f_lineno = 84;
        tmp_import_name_from_27 = IMPORT_MODULE5(tmp_name_name_30, tmp_globals_arg_name_30, tmp_locals_arg_name_30, tmp_fromlist_name_30, tmp_level_name_30);
        if (tmp_import_name_from_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_27)) {
            tmp_assign_source_36 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_27,
                (PyObject *)moduledict_gevent$testing,
                mod_consts[86],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_36 = IMPORT_NAME(tmp_import_name_from_27, mod_consts[86]);
        }

        Py_DECREF(tmp_import_name_from_27);
        if (tmp_assign_source_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gevent$testing, (Nuitka_StringObject *)mod_consts[86], tmp_assign_source_36);
    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_import_name_from_28;
        PyObject *tmp_name_name_31;
        PyObject *tmp_globals_arg_name_31;
        PyObject *tmp_locals_arg_name_31;
        PyObject *tmp_fromlist_name_31;
        PyObject *tmp_level_name_31;
        tmp_name_name_31 = mod_consts[37];
        tmp_globals_arg_name_31 = (PyObject *)moduledict_gevent$testing;
        tmp_locals_arg_name_31 = Py_None;
        tmp_fromlist_name_31 = mod_consts[87];
        tmp_level_name_31 = mod_consts[25];
        frame_0ccde8493c20ca10d261180f82dc9a9d->m_frame.f_lineno = 85;
        tmp_import_name_from_28 = IMPORT_MODULE5(tmp_name_name_31, tmp_globals_arg_name_31, tmp_locals_arg_name_31, tmp_fromlist_name_31, tmp_level_name_31);
        if (tmp_import_name_from_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_28)) {
            tmp_assign_source_37 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_28,
                (PyObject *)moduledict_gevent$testing,
                mod_consts[88],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_37 = IMPORT_NAME(tmp_import_name_from_28, mod_consts[88]);
        }

        Py_DECREF(tmp_import_name_from_28);
        if (tmp_assign_source_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gevent$testing, (Nuitka_StringObject *)mod_consts[88], tmp_assign_source_37);
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_import_name_from_29;
        PyObject *tmp_name_name_32;
        PyObject *tmp_globals_arg_name_32;
        PyObject *tmp_locals_arg_name_32;
        PyObject *tmp_fromlist_name_32;
        PyObject *tmp_level_name_32;
        tmp_name_name_32 = mod_consts[37];
        tmp_globals_arg_name_32 = (PyObject *)moduledict_gevent$testing;
        tmp_locals_arg_name_32 = Py_None;
        tmp_fromlist_name_32 = mod_consts[89];
        tmp_level_name_32 = mod_consts[25];
        frame_0ccde8493c20ca10d261180f82dc9a9d->m_frame.f_lineno = 87;
        tmp_import_name_from_29 = IMPORT_MODULE5(tmp_name_name_32, tmp_globals_arg_name_32, tmp_locals_arg_name_32, tmp_fromlist_name_32, tmp_level_name_32);
        if (tmp_import_name_from_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_29)) {
            tmp_assign_source_38 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_29,
                (PyObject *)moduledict_gevent$testing,
                mod_consts[90],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_38 = IMPORT_NAME(tmp_import_name_from_29, mod_consts[90]);
        }

        Py_DECREF(tmp_import_name_from_29);
        if (tmp_assign_source_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gevent$testing, (Nuitka_StringObject *)mod_consts[90], tmp_assign_source_38);
    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_import_name_from_30;
        PyObject *tmp_name_name_33;
        PyObject *tmp_globals_arg_name_33;
        PyObject *tmp_locals_arg_name_33;
        PyObject *tmp_fromlist_name_33;
        PyObject *tmp_level_name_33;
        tmp_name_name_33 = mod_consts[37];
        tmp_globals_arg_name_33 = (PyObject *)moduledict_gevent$testing;
        tmp_locals_arg_name_33 = Py_None;
        tmp_fromlist_name_33 = mod_consts[91];
        tmp_level_name_33 = mod_consts[25];
        frame_0ccde8493c20ca10d261180f82dc9a9d->m_frame.f_lineno = 89;
        tmp_import_name_from_30 = IMPORT_MODULE5(tmp_name_name_33, tmp_globals_arg_name_33, tmp_locals_arg_name_33, tmp_fromlist_name_33, tmp_level_name_33);
        if (tmp_import_name_from_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_30)) {
            tmp_assign_source_39 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_30,
                (PyObject *)moduledict_gevent$testing,
                mod_consts[92],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_39 = IMPORT_NAME(tmp_import_name_from_30, mod_consts[92]);
        }

        Py_DECREF(tmp_import_name_from_30);
        if (tmp_assign_source_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gevent$testing, (Nuitka_StringObject *)mod_consts[92], tmp_assign_source_39);
    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_import_name_from_31;
        PyObject *tmp_name_name_34;
        PyObject *tmp_globals_arg_name_34;
        PyObject *tmp_locals_arg_name_34;
        PyObject *tmp_fromlist_name_34;
        PyObject *tmp_level_name_34;
        tmp_name_name_34 = mod_consts[93];
        tmp_globals_arg_name_34 = (PyObject *)moduledict_gevent$testing;
        tmp_locals_arg_name_34 = Py_None;
        tmp_fromlist_name_34 = mod_consts[94];
        tmp_level_name_34 = mod_consts[25];
        frame_0ccde8493c20ca10d261180f82dc9a9d->m_frame.f_lineno = 91;
        tmp_import_name_from_31 = IMPORT_MODULE5(tmp_name_name_34, tmp_globals_arg_name_34, tmp_locals_arg_name_34, tmp_fromlist_name_34, tmp_level_name_34);
        if (tmp_import_name_from_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_31)) {
            tmp_assign_source_40 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_31,
                (PyObject *)moduledict_gevent$testing,
                mod_consts[95],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_40 = IMPORT_NAME(tmp_import_name_from_31, mod_consts[95]);
        }

        Py_DECREF(tmp_import_name_from_31);
        if (tmp_assign_source_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gevent$testing, (Nuitka_StringObject *)mod_consts[95], tmp_assign_source_40);
    }
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_import_name_from_32;
        PyObject *tmp_name_name_35;
        PyObject *tmp_globals_arg_name_35;
        PyObject *tmp_locals_arg_name_35;
        PyObject *tmp_fromlist_name_35;
        PyObject *tmp_level_name_35;
        tmp_name_name_35 = mod_consts[93];
        tmp_globals_arg_name_35 = (PyObject *)moduledict_gevent$testing;
        tmp_locals_arg_name_35 = Py_None;
        tmp_fromlist_name_35 = mod_consts[96];
        tmp_level_name_35 = mod_consts[25];
        frame_0ccde8493c20ca10d261180f82dc9a9d->m_frame.f_lineno = 92;
        tmp_import_name_from_32 = IMPORT_MODULE5(tmp_name_name_35, tmp_globals_arg_name_35, tmp_locals_arg_name_35, tmp_fromlist_name_35, tmp_level_name_35);
        if (tmp_import_name_from_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_32)) {
            tmp_assign_source_41 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_32,
                (PyObject *)moduledict_gevent$testing,
                mod_consts[97],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_41 = IMPORT_NAME(tmp_import_name_from_32, mod_consts[97]);
        }

        Py_DECREF(tmp_import_name_from_32);
        if (tmp_assign_source_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gevent$testing, (Nuitka_StringObject *)mod_consts[97], tmp_assign_source_41);
    }
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_import_name_from_33;
        PyObject *tmp_name_name_36;
        PyObject *tmp_globals_arg_name_36;
        PyObject *tmp_locals_arg_name_36;
        PyObject *tmp_fromlist_name_36;
        PyObject *tmp_level_name_36;
        tmp_name_name_36 = mod_consts[93];
        tmp_globals_arg_name_36 = (PyObject *)moduledict_gevent$testing;
        tmp_locals_arg_name_36 = Py_None;
        tmp_fromlist_name_36 = mod_consts[98];
        tmp_level_name_36 = mod_consts[25];
        frame_0ccde8493c20ca10d261180f82dc9a9d->m_frame.f_lineno = 93;
        tmp_import_name_from_33 = IMPORT_MODULE5(tmp_name_name_36, tmp_globals_arg_name_36, tmp_locals_arg_name_36, tmp_fromlist_name_36, tmp_level_name_36);
        if (tmp_import_name_from_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_33)) {
            tmp_assign_source_42 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_33,
                (PyObject *)moduledict_gevent$testing,
                mod_consts[99],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_42 = IMPORT_NAME(tmp_import_name_from_33, mod_consts[99]);
        }

        Py_DECREF(tmp_import_name_from_33);
        if (tmp_assign_source_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gevent$testing, (Nuitka_StringObject *)mod_consts[99], tmp_assign_source_42);
    }
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_import_name_from_34;
        PyObject *tmp_name_name_37;
        PyObject *tmp_globals_arg_name_37;
        PyObject *tmp_locals_arg_name_37;
        PyObject *tmp_fromlist_name_37;
        PyObject *tmp_level_name_37;
        tmp_name_name_37 = mod_consts[93];
        tmp_globals_arg_name_37 = (PyObject *)moduledict_gevent$testing;
        tmp_locals_arg_name_37 = Py_None;
        tmp_fromlist_name_37 = mod_consts[100];
        tmp_level_name_37 = mod_consts[25];
        frame_0ccde8493c20ca10d261180f82dc9a9d->m_frame.f_lineno = 94;
        tmp_import_name_from_34 = IMPORT_MODULE5(tmp_name_name_37, tmp_globals_arg_name_37, tmp_locals_arg_name_37, tmp_fromlist_name_37, tmp_level_name_37);
        if (tmp_import_name_from_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_34)) {
            tmp_assign_source_43 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_34,
                (PyObject *)moduledict_gevent$testing,
                mod_consts[101],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_43 = IMPORT_NAME(tmp_import_name_from_34, mod_consts[101]);
        }

        Py_DECREF(tmp_import_name_from_34);
        if (tmp_assign_source_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gevent$testing, (Nuitka_StringObject *)mod_consts[101], tmp_assign_source_43);
    }
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_import_name_from_35;
        PyObject *tmp_name_name_38;
        PyObject *tmp_globals_arg_name_38;
        PyObject *tmp_locals_arg_name_38;
        PyObject *tmp_fromlist_name_38;
        PyObject *tmp_level_name_38;
        tmp_name_name_38 = mod_consts[93];
        tmp_globals_arg_name_38 = (PyObject *)moduledict_gevent$testing;
        tmp_locals_arg_name_38 = Py_None;
        tmp_fromlist_name_38 = mod_consts[102];
        tmp_level_name_38 = mod_consts[25];
        frame_0ccde8493c20ca10d261180f82dc9a9d->m_frame.f_lineno = 95;
        tmp_import_name_from_35 = IMPORT_MODULE5(tmp_name_name_38, tmp_globals_arg_name_38, tmp_locals_arg_name_38, tmp_fromlist_name_38, tmp_level_name_38);
        if (tmp_import_name_from_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_35)) {
            tmp_assign_source_44 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_35,
                (PyObject *)moduledict_gevent$testing,
                mod_consts[103],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_44 = IMPORT_NAME(tmp_import_name_from_35, mod_consts[103]);
        }

        Py_DECREF(tmp_import_name_from_35);
        if (tmp_assign_source_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gevent$testing, (Nuitka_StringObject *)mod_consts[103], tmp_assign_source_44);
    }
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_import_name_from_36;
        PyObject *tmp_name_name_39;
        PyObject *tmp_globals_arg_name_39;
        PyObject *tmp_locals_arg_name_39;
        PyObject *tmp_fromlist_name_39;
        PyObject *tmp_level_name_39;
        tmp_name_name_39 = mod_consts[93];
        tmp_globals_arg_name_39 = (PyObject *)moduledict_gevent$testing;
        tmp_locals_arg_name_39 = Py_None;
        tmp_fromlist_name_39 = mod_consts[104];
        tmp_level_name_39 = mod_consts[25];
        frame_0ccde8493c20ca10d261180f82dc9a9d->m_frame.f_lineno = 96;
        tmp_import_name_from_36 = IMPORT_MODULE5(tmp_name_name_39, tmp_globals_arg_name_39, tmp_locals_arg_name_39, tmp_fromlist_name_39, tmp_level_name_39);
        if (tmp_import_name_from_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_36)) {
            tmp_assign_source_45 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_36,
                (PyObject *)moduledict_gevent$testing,
                mod_consts[105],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_45 = IMPORT_NAME(tmp_import_name_from_36, mod_consts[105]);
        }

        Py_DECREF(tmp_import_name_from_36);
        if (tmp_assign_source_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gevent$testing, (Nuitka_StringObject *)mod_consts[105], tmp_assign_source_45);
    }
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_import_name_from_37;
        PyObject *tmp_name_name_40;
        PyObject *tmp_globals_arg_name_40;
        PyObject *tmp_locals_arg_name_40;
        PyObject *tmp_fromlist_name_40;
        PyObject *tmp_level_name_40;
        tmp_name_name_40 = mod_consts[93];
        tmp_globals_arg_name_40 = (PyObject *)moduledict_gevent$testing;
        tmp_locals_arg_name_40 = Py_None;
        tmp_fromlist_name_40 = mod_consts[106];
        tmp_level_name_40 = mod_consts[25];
        frame_0ccde8493c20ca10d261180f82dc9a9d->m_frame.f_lineno = 97;
        tmp_import_name_from_37 = IMPORT_MODULE5(tmp_name_name_40, tmp_globals_arg_name_40, tmp_locals_arg_name_40, tmp_fromlist_name_40, tmp_level_name_40);
        if (tmp_import_name_from_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_37)) {
            tmp_assign_source_46 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_37,
                (PyObject *)moduledict_gevent$testing,
                mod_consts[107],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_46 = IMPORT_NAME(tmp_import_name_from_37, mod_consts[107]);
        }

        Py_DECREF(tmp_import_name_from_37);
        if (tmp_assign_source_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gevent$testing, (Nuitka_StringObject *)mod_consts[107], tmp_assign_source_46);
    }
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_import_name_from_38;
        PyObject *tmp_name_name_41;
        PyObject *tmp_globals_arg_name_41;
        PyObject *tmp_locals_arg_name_41;
        PyObject *tmp_fromlist_name_41;
        PyObject *tmp_level_name_41;
        tmp_name_name_41 = mod_consts[93];
        tmp_globals_arg_name_41 = (PyObject *)moduledict_gevent$testing;
        tmp_locals_arg_name_41 = Py_None;
        tmp_fromlist_name_41 = mod_consts[108];
        tmp_level_name_41 = mod_consts[25];
        frame_0ccde8493c20ca10d261180f82dc9a9d->m_frame.f_lineno = 98;
        tmp_import_name_from_38 = IMPORT_MODULE5(tmp_name_name_41, tmp_globals_arg_name_41, tmp_locals_arg_name_41, tmp_fromlist_name_41, tmp_level_name_41);
        if (tmp_import_name_from_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_38)) {
            tmp_assign_source_47 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_38,
                (PyObject *)moduledict_gevent$testing,
                mod_consts[109],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_47 = IMPORT_NAME(tmp_import_name_from_38, mod_consts[109]);
        }

        Py_DECREF(tmp_import_name_from_38);
        if (tmp_assign_source_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gevent$testing, (Nuitka_StringObject *)mod_consts[109], tmp_assign_source_47);
    }
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_import_name_from_39;
        PyObject *tmp_name_name_42;
        PyObject *tmp_globals_arg_name_42;
        PyObject *tmp_locals_arg_name_42;
        PyObject *tmp_fromlist_name_42;
        PyObject *tmp_level_name_42;
        tmp_name_name_42 = mod_consts[93];
        tmp_globals_arg_name_42 = (PyObject *)moduledict_gevent$testing;
        tmp_locals_arg_name_42 = Py_None;
        tmp_fromlist_name_42 = mod_consts[110];
        tmp_level_name_42 = mod_consts[25];
        frame_0ccde8493c20ca10d261180f82dc9a9d->m_frame.f_lineno = 99;
        tmp_import_name_from_39 = IMPORT_MODULE5(tmp_name_name_42, tmp_globals_arg_name_42, tmp_locals_arg_name_42, tmp_fromlist_name_42, tmp_level_name_42);
        if (tmp_import_name_from_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_39)) {
            tmp_assign_source_48 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_39,
                (PyObject *)moduledict_gevent$testing,
                mod_consts[111],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_48 = IMPORT_NAME(tmp_import_name_from_39, mod_consts[111]);
        }

        Py_DECREF(tmp_import_name_from_39);
        if (tmp_assign_source_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gevent$testing, (Nuitka_StringObject *)mod_consts[111], tmp_assign_source_48);
    }
    {
        PyObject *tmp_assign_source_49;
        PyObject *tmp_import_name_from_40;
        PyObject *tmp_name_name_43;
        PyObject *tmp_globals_arg_name_43;
        PyObject *tmp_locals_arg_name_43;
        PyObject *tmp_fromlist_name_43;
        PyObject *tmp_level_name_43;
        tmp_name_name_43 = mod_consts[93];
        tmp_globals_arg_name_43 = (PyObject *)moduledict_gevent$testing;
        tmp_locals_arg_name_43 = Py_None;
        tmp_fromlist_name_43 = mod_consts[112];
        tmp_level_name_43 = mod_consts[25];
        frame_0ccde8493c20ca10d261180f82dc9a9d->m_frame.f_lineno = 100;
        tmp_import_name_from_40 = IMPORT_MODULE5(tmp_name_name_43, tmp_globals_arg_name_43, tmp_locals_arg_name_43, tmp_fromlist_name_43, tmp_level_name_43);
        if (tmp_import_name_from_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_40)) {
            tmp_assign_source_49 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_40,
                (PyObject *)moduledict_gevent$testing,
                mod_consts[113],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_49 = IMPORT_NAME(tmp_import_name_from_40, mod_consts[113]);
        }

        Py_DECREF(tmp_import_name_from_40);
        if (tmp_assign_source_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gevent$testing, (Nuitka_StringObject *)mod_consts[113], tmp_assign_source_49);
    }
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_import_name_from_41;
        PyObject *tmp_name_name_44;
        PyObject *tmp_globals_arg_name_44;
        PyObject *tmp_locals_arg_name_44;
        PyObject *tmp_fromlist_name_44;
        PyObject *tmp_level_name_44;
        tmp_name_name_44 = mod_consts[93];
        tmp_globals_arg_name_44 = (PyObject *)moduledict_gevent$testing;
        tmp_locals_arg_name_44 = Py_None;
        tmp_fromlist_name_44 = mod_consts[114];
        tmp_level_name_44 = mod_consts[25];
        frame_0ccde8493c20ca10d261180f82dc9a9d->m_frame.f_lineno = 101;
        tmp_import_name_from_41 = IMPORT_MODULE5(tmp_name_name_44, tmp_globals_arg_name_44, tmp_locals_arg_name_44, tmp_fromlist_name_44, tmp_level_name_44);
        if (tmp_import_name_from_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_41)) {
            tmp_assign_source_50 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_41,
                (PyObject *)moduledict_gevent$testing,
                mod_consts[115],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_50 = IMPORT_NAME(tmp_import_name_from_41, mod_consts[115]);
        }

        Py_DECREF(tmp_import_name_from_41);
        if (tmp_assign_source_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gevent$testing, (Nuitka_StringObject *)mod_consts[115], tmp_assign_source_50);
    }
    {
        PyObject *tmp_assign_source_51;
        PyObject *tmp_import_name_from_42;
        PyObject *tmp_name_name_45;
        PyObject *tmp_globals_arg_name_45;
        PyObject *tmp_locals_arg_name_45;
        PyObject *tmp_fromlist_name_45;
        PyObject *tmp_level_name_45;
        tmp_name_name_45 = mod_consts[93];
        tmp_globals_arg_name_45 = (PyObject *)moduledict_gevent$testing;
        tmp_locals_arg_name_45 = Py_None;
        tmp_fromlist_name_45 = mod_consts[116];
        tmp_level_name_45 = mod_consts[25];
        frame_0ccde8493c20ca10d261180f82dc9a9d->m_frame.f_lineno = 102;
        tmp_import_name_from_42 = IMPORT_MODULE5(tmp_name_name_45, tmp_globals_arg_name_45, tmp_locals_arg_name_45, tmp_fromlist_name_45, tmp_level_name_45);
        if (tmp_import_name_from_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_42)) {
            tmp_assign_source_51 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_42,
                (PyObject *)moduledict_gevent$testing,
                mod_consts[117],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_51 = IMPORT_NAME(tmp_import_name_from_42, mod_consts[117]);
        }

        Py_DECREF(tmp_import_name_from_42);
        if (tmp_assign_source_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gevent$testing, (Nuitka_StringObject *)mod_consts[117], tmp_assign_source_51);
    }
    {
        PyObject *tmp_assign_source_52;
        PyObject *tmp_import_name_from_43;
        PyObject *tmp_name_name_46;
        PyObject *tmp_globals_arg_name_46;
        PyObject *tmp_locals_arg_name_46;
        PyObject *tmp_fromlist_name_46;
        PyObject *tmp_level_name_46;
        tmp_name_name_46 = mod_consts[93];
        tmp_globals_arg_name_46 = (PyObject *)moduledict_gevent$testing;
        tmp_locals_arg_name_46 = Py_None;
        tmp_fromlist_name_46 = mod_consts[118];
        tmp_level_name_46 = mod_consts[25];
        frame_0ccde8493c20ca10d261180f82dc9a9d->m_frame.f_lineno = 103;
        tmp_import_name_from_43 = IMPORT_MODULE5(tmp_name_name_46, tmp_globals_arg_name_46, tmp_locals_arg_name_46, tmp_fromlist_name_46, tmp_level_name_46);
        if (tmp_import_name_from_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_43)) {
            tmp_assign_source_52 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_43,
                (PyObject *)moduledict_gevent$testing,
                mod_consts[119],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_52 = IMPORT_NAME(tmp_import_name_from_43, mod_consts[119]);
        }

        Py_DECREF(tmp_import_name_from_43);
        if (tmp_assign_source_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gevent$testing, (Nuitka_StringObject *)mod_consts[119], tmp_assign_source_52);
    }
    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_import_name_from_44;
        PyObject *tmp_name_name_47;
        PyObject *tmp_globals_arg_name_47;
        PyObject *tmp_locals_arg_name_47;
        PyObject *tmp_fromlist_name_47;
        PyObject *tmp_level_name_47;
        tmp_name_name_47 = mod_consts[93];
        tmp_globals_arg_name_47 = (PyObject *)moduledict_gevent$testing;
        tmp_locals_arg_name_47 = Py_None;
        tmp_fromlist_name_47 = mod_consts[120];
        tmp_level_name_47 = mod_consts[25];
        frame_0ccde8493c20ca10d261180f82dc9a9d->m_frame.f_lineno = 104;
        tmp_import_name_from_44 = IMPORT_MODULE5(tmp_name_name_47, tmp_globals_arg_name_47, tmp_locals_arg_name_47, tmp_fromlist_name_47, tmp_level_name_47);
        if (tmp_import_name_from_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_44)) {
            tmp_assign_source_53 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_44,
                (PyObject *)moduledict_gevent$testing,
                mod_consts[121],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_53 = IMPORT_NAME(tmp_import_name_from_44, mod_consts[121]);
        }

        Py_DECREF(tmp_import_name_from_44);
        if (tmp_assign_source_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gevent$testing, (Nuitka_StringObject *)mod_consts[121], tmp_assign_source_53);
    }
    {
        PyObject *tmp_assign_source_54;
        PyObject *tmp_import_name_from_45;
        PyObject *tmp_name_name_48;
        PyObject *tmp_globals_arg_name_48;
        PyObject *tmp_locals_arg_name_48;
        PyObject *tmp_fromlist_name_48;
        PyObject *tmp_level_name_48;
        tmp_name_name_48 = mod_consts[93];
        tmp_globals_arg_name_48 = (PyObject *)moduledict_gevent$testing;
        tmp_locals_arg_name_48 = Py_None;
        tmp_fromlist_name_48 = mod_consts[122];
        tmp_level_name_48 = mod_consts[25];
        frame_0ccde8493c20ca10d261180f82dc9a9d->m_frame.f_lineno = 105;
        tmp_import_name_from_45 = IMPORT_MODULE5(tmp_name_name_48, tmp_globals_arg_name_48, tmp_locals_arg_name_48, tmp_fromlist_name_48, tmp_level_name_48);
        if (tmp_import_name_from_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_45)) {
            tmp_assign_source_54 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_45,
                (PyObject *)moduledict_gevent$testing,
                mod_consts[123],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_54 = IMPORT_NAME(tmp_import_name_from_45, mod_consts[123]);
        }

        Py_DECREF(tmp_import_name_from_45);
        if (tmp_assign_source_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gevent$testing, (Nuitka_StringObject *)mod_consts[123], tmp_assign_source_54);
    }
    {
        PyObject *tmp_assign_source_55;
        PyObject *tmp_import_name_from_46;
        PyObject *tmp_name_name_49;
        PyObject *tmp_globals_arg_name_49;
        PyObject *tmp_locals_arg_name_49;
        PyObject *tmp_fromlist_name_49;
        PyObject *tmp_level_name_49;
        tmp_name_name_49 = mod_consts[93];
        tmp_globals_arg_name_49 = (PyObject *)moduledict_gevent$testing;
        tmp_locals_arg_name_49 = Py_None;
        tmp_fromlist_name_49 = mod_consts[124];
        tmp_level_name_49 = mod_consts[25];
        frame_0ccde8493c20ca10d261180f82dc9a9d->m_frame.f_lineno = 106;
        tmp_import_name_from_46 = IMPORT_MODULE5(tmp_name_name_49, tmp_globals_arg_name_49, tmp_locals_arg_name_49, tmp_fromlist_name_49, tmp_level_name_49);
        if (tmp_import_name_from_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_46)) {
            tmp_assign_source_55 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_46,
                (PyObject *)moduledict_gevent$testing,
                mod_consts[125],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_55 = IMPORT_NAME(tmp_import_name_from_46, mod_consts[125]);
        }

        Py_DECREF(tmp_import_name_from_46);
        if (tmp_assign_source_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gevent$testing, (Nuitka_StringObject *)mod_consts[125], tmp_assign_source_55);
    }
    {
        PyObject *tmp_assign_source_56;
        PyObject *tmp_import_name_from_47;
        PyObject *tmp_name_name_50;
        PyObject *tmp_globals_arg_name_50;
        PyObject *tmp_locals_arg_name_50;
        PyObject *tmp_fromlist_name_50;
        PyObject *tmp_level_name_50;
        tmp_name_name_50 = mod_consts[93];
        tmp_globals_arg_name_50 = (PyObject *)moduledict_gevent$testing;
        tmp_locals_arg_name_50 = Py_None;
        tmp_fromlist_name_50 = mod_consts[126];
        tmp_level_name_50 = mod_consts[25];
        frame_0ccde8493c20ca10d261180f82dc9a9d->m_frame.f_lineno = 107;
        tmp_import_name_from_47 = IMPORT_MODULE5(tmp_name_name_50, tmp_globals_arg_name_50, tmp_locals_arg_name_50, tmp_fromlist_name_50, tmp_level_name_50);
        if (tmp_import_name_from_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_47)) {
            tmp_assign_source_56 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_47,
                (PyObject *)moduledict_gevent$testing,
                mod_consts[127],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_56 = IMPORT_NAME(tmp_import_name_from_47, mod_consts[127]);
        }

        Py_DECREF(tmp_import_name_from_47);
        if (tmp_assign_source_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gevent$testing, (Nuitka_StringObject *)mod_consts[127], tmp_assign_source_56);
    }
    {
        PyObject *tmp_assign_source_57;
        PyObject *tmp_import_name_from_48;
        PyObject *tmp_name_name_51;
        PyObject *tmp_globals_arg_name_51;
        PyObject *tmp_locals_arg_name_51;
        PyObject *tmp_fromlist_name_51;
        PyObject *tmp_level_name_51;
        tmp_name_name_51 = mod_consts[93];
        tmp_globals_arg_name_51 = (PyObject *)moduledict_gevent$testing;
        tmp_locals_arg_name_51 = Py_None;
        tmp_fromlist_name_51 = mod_consts[128];
        tmp_level_name_51 = mod_consts[25];
        frame_0ccde8493c20ca10d261180f82dc9a9d->m_frame.f_lineno = 108;
        tmp_import_name_from_48 = IMPORT_MODULE5(tmp_name_name_51, tmp_globals_arg_name_51, tmp_locals_arg_name_51, tmp_fromlist_name_51, tmp_level_name_51);
        if (tmp_import_name_from_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_48)) {
            tmp_assign_source_57 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_48,
                (PyObject *)moduledict_gevent$testing,
                mod_consts[129],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_57 = IMPORT_NAME(tmp_import_name_from_48, mod_consts[129]);
        }

        Py_DECREF(tmp_import_name_from_48);
        if (tmp_assign_source_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gevent$testing, (Nuitka_StringObject *)mod_consts[129], tmp_assign_source_57);
    }
    {
        PyObject *tmp_assign_source_58;
        PyObject *tmp_import_name_from_49;
        PyObject *tmp_name_name_52;
        PyObject *tmp_globals_arg_name_52;
        PyObject *tmp_locals_arg_name_52;
        PyObject *tmp_fromlist_name_52;
        PyObject *tmp_level_name_52;
        tmp_name_name_52 = mod_consts[93];
        tmp_globals_arg_name_52 = (PyObject *)moduledict_gevent$testing;
        tmp_locals_arg_name_52 = Py_None;
        tmp_fromlist_name_52 = mod_consts[130];
        tmp_level_name_52 = mod_consts[25];
        frame_0ccde8493c20ca10d261180f82dc9a9d->m_frame.f_lineno = 109;
        tmp_import_name_from_49 = IMPORT_MODULE5(tmp_name_name_52, tmp_globals_arg_name_52, tmp_locals_arg_name_52, tmp_fromlist_name_52, tmp_level_name_52);
        if (tmp_import_name_from_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_49)) {
            tmp_assign_source_58 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_49,
                (PyObject *)moduledict_gevent$testing,
                mod_consts[131],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_58 = IMPORT_NAME(tmp_import_name_from_49, mod_consts[131]);
        }

        Py_DECREF(tmp_import_name_from_49);
        if (tmp_assign_source_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gevent$testing, (Nuitka_StringObject *)mod_consts[131], tmp_assign_source_58);
    }
    {
        PyObject *tmp_assign_source_59;
        PyObject *tmp_import_name_from_50;
        PyObject *tmp_name_name_53;
        PyObject *tmp_globals_arg_name_53;
        PyObject *tmp_locals_arg_name_53;
        PyObject *tmp_fromlist_name_53;
        PyObject *tmp_level_name_53;
        tmp_name_name_53 = mod_consts[93];
        tmp_globals_arg_name_53 = (PyObject *)moduledict_gevent$testing;
        tmp_locals_arg_name_53 = Py_None;
        tmp_fromlist_name_53 = mod_consts[132];
        tmp_level_name_53 = mod_consts[25];
        frame_0ccde8493c20ca10d261180f82dc9a9d->m_frame.f_lineno = 110;
        tmp_import_name_from_50 = IMPORT_MODULE5(tmp_name_name_53, tmp_globals_arg_name_53, tmp_locals_arg_name_53, tmp_fromlist_name_53, tmp_level_name_53);
        if (tmp_import_name_from_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_50)) {
            tmp_assign_source_59 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_50,
                (PyObject *)moduledict_gevent$testing,
                mod_consts[133],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_59 = IMPORT_NAME(tmp_import_name_from_50, mod_consts[133]);
        }

        Py_DECREF(tmp_import_name_from_50);
        if (tmp_assign_source_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gevent$testing, (Nuitka_StringObject *)mod_consts[133], tmp_assign_source_59);
    }
    {
        PyObject *tmp_assign_source_60;
        PyObject *tmp_import_name_from_51;
        PyObject *tmp_name_name_54;
        PyObject *tmp_globals_arg_name_54;
        PyObject *tmp_locals_arg_name_54;
        PyObject *tmp_fromlist_name_54;
        PyObject *tmp_level_name_54;
        tmp_name_name_54 = mod_consts[93];
        tmp_globals_arg_name_54 = (PyObject *)moduledict_gevent$testing;
        tmp_locals_arg_name_54 = Py_None;
        tmp_fromlist_name_54 = mod_consts[134];
        tmp_level_name_54 = mod_consts[25];
        frame_0ccde8493c20ca10d261180f82dc9a9d->m_frame.f_lineno = 111;
        tmp_import_name_from_51 = IMPORT_MODULE5(tmp_name_name_54, tmp_globals_arg_name_54, tmp_locals_arg_name_54, tmp_fromlist_name_54, tmp_level_name_54);
        if (tmp_import_name_from_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_51)) {
            tmp_assign_source_60 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_51,
                (PyObject *)moduledict_gevent$testing,
                mod_consts[135],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_60 = IMPORT_NAME(tmp_import_name_from_51, mod_consts[135]);
        }

        Py_DECREF(tmp_import_name_from_51);
        if (tmp_assign_source_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gevent$testing, (Nuitka_StringObject *)mod_consts[135], tmp_assign_source_60);
    }
    {
        PyObject *tmp_assign_source_61;
        PyObject *tmp_import_name_from_52;
        PyObject *tmp_name_name_55;
        PyObject *tmp_globals_arg_name_55;
        PyObject *tmp_locals_arg_name_55;
        PyObject *tmp_fromlist_name_55;
        PyObject *tmp_level_name_55;
        tmp_name_name_55 = mod_consts[93];
        tmp_globals_arg_name_55 = (PyObject *)moduledict_gevent$testing;
        tmp_locals_arg_name_55 = Py_None;
        tmp_fromlist_name_55 = mod_consts[136];
        tmp_level_name_55 = mod_consts[25];
        frame_0ccde8493c20ca10d261180f82dc9a9d->m_frame.f_lineno = 112;
        tmp_import_name_from_52 = IMPORT_MODULE5(tmp_name_name_55, tmp_globals_arg_name_55, tmp_locals_arg_name_55, tmp_fromlist_name_55, tmp_level_name_55);
        if (tmp_import_name_from_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_52)) {
            tmp_assign_source_61 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_52,
                (PyObject *)moduledict_gevent$testing,
                mod_consts[137],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_61 = IMPORT_NAME(tmp_import_name_from_52, mod_consts[137]);
        }

        Py_DECREF(tmp_import_name_from_52);
        if (tmp_assign_source_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gevent$testing, (Nuitka_StringObject *)mod_consts[137], tmp_assign_source_61);
    }
    {
        PyObject *tmp_assign_source_62;
        PyObject *tmp_import_name_from_53;
        PyObject *tmp_name_name_56;
        PyObject *tmp_globals_arg_name_56;
        PyObject *tmp_locals_arg_name_56;
        PyObject *tmp_fromlist_name_56;
        PyObject *tmp_level_name_56;
        tmp_name_name_56 = mod_consts[93];
        tmp_globals_arg_name_56 = (PyObject *)moduledict_gevent$testing;
        tmp_locals_arg_name_56 = Py_None;
        tmp_fromlist_name_56 = mod_consts[138];
        tmp_level_name_56 = mod_consts[25];
        frame_0ccde8493c20ca10d261180f82dc9a9d->m_frame.f_lineno = 113;
        tmp_import_name_from_53 = IMPORT_MODULE5(tmp_name_name_56, tmp_globals_arg_name_56, tmp_locals_arg_name_56, tmp_fromlist_name_56, tmp_level_name_56);
        if (tmp_import_name_from_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_53)) {
            tmp_assign_source_62 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_53,
                (PyObject *)moduledict_gevent$testing,
                mod_consts[139],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_62 = IMPORT_NAME(tmp_import_name_from_53, mod_consts[139]);
        }

        Py_DECREF(tmp_import_name_from_53);
        if (tmp_assign_source_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gevent$testing, (Nuitka_StringObject *)mod_consts[139], tmp_assign_source_62);
    }
    {
        PyObject *tmp_assign_source_63;
        PyObject *tmp_import_name_from_54;
        PyObject *tmp_name_name_57;
        PyObject *tmp_globals_arg_name_57;
        PyObject *tmp_locals_arg_name_57;
        PyObject *tmp_fromlist_name_57;
        PyObject *tmp_level_name_57;
        tmp_name_name_57 = mod_consts[93];
        tmp_globals_arg_name_57 = (PyObject *)moduledict_gevent$testing;
        tmp_locals_arg_name_57 = Py_None;
        tmp_fromlist_name_57 = mod_consts[140];
        tmp_level_name_57 = mod_consts[25];
        frame_0ccde8493c20ca10d261180f82dc9a9d->m_frame.f_lineno = 114;
        tmp_import_name_from_54 = IMPORT_MODULE5(tmp_name_name_57, tmp_globals_arg_name_57, tmp_locals_arg_name_57, tmp_fromlist_name_57, tmp_level_name_57);
        if (tmp_import_name_from_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_54)) {
            tmp_assign_source_63 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_54,
                (PyObject *)moduledict_gevent$testing,
                mod_consts[141],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_63 = IMPORT_NAME(tmp_import_name_from_54, mod_consts[141]);
        }

        Py_DECREF(tmp_import_name_from_54);
        if (tmp_assign_source_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gevent$testing, (Nuitka_StringObject *)mod_consts[141], tmp_assign_source_63);
    }
    {
        PyObject *tmp_assign_source_64;
        PyObject *tmp_import_name_from_55;
        PyObject *tmp_name_name_58;
        PyObject *tmp_globals_arg_name_58;
        PyObject *tmp_locals_arg_name_58;
        PyObject *tmp_fromlist_name_58;
        PyObject *tmp_level_name_58;
        tmp_name_name_58 = mod_consts[93];
        tmp_globals_arg_name_58 = (PyObject *)moduledict_gevent$testing;
        tmp_locals_arg_name_58 = Py_None;
        tmp_fromlist_name_58 = mod_consts[142];
        tmp_level_name_58 = mod_consts[25];
        frame_0ccde8493c20ca10d261180f82dc9a9d->m_frame.f_lineno = 115;
        tmp_import_name_from_55 = IMPORT_MODULE5(tmp_name_name_58, tmp_globals_arg_name_58, tmp_locals_arg_name_58, tmp_fromlist_name_58, tmp_level_name_58);
        if (tmp_import_name_from_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_55)) {
            tmp_assign_source_64 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_55,
                (PyObject *)moduledict_gevent$testing,
                mod_consts[143],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_64 = IMPORT_NAME(tmp_import_name_from_55, mod_consts[143]);
        }

        Py_DECREF(tmp_import_name_from_55);
        if (tmp_assign_source_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gevent$testing, (Nuitka_StringObject *)mod_consts[143], tmp_assign_source_64);
    }
    {
        PyObject *tmp_assign_source_65;
        PyObject *tmp_import_name_from_56;
        PyObject *tmp_name_name_59;
        PyObject *tmp_globals_arg_name_59;
        PyObject *tmp_locals_arg_name_59;
        PyObject *tmp_fromlist_name_59;
        PyObject *tmp_level_name_59;
        tmp_name_name_59 = mod_consts[93];
        tmp_globals_arg_name_59 = (PyObject *)moduledict_gevent$testing;
        tmp_locals_arg_name_59 = Py_None;
        tmp_fromlist_name_59 = mod_consts[144];
        tmp_level_name_59 = mod_consts[25];
        frame_0ccde8493c20ca10d261180f82dc9a9d->m_frame.f_lineno = 116;
        tmp_import_name_from_56 = IMPORT_MODULE5(tmp_name_name_59, tmp_globals_arg_name_59, tmp_locals_arg_name_59, tmp_fromlist_name_59, tmp_level_name_59);
        if (tmp_import_name_from_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_56)) {
            tmp_assign_source_65 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_56,
                (PyObject *)moduledict_gevent$testing,
                mod_consts[145],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_65 = IMPORT_NAME(tmp_import_name_from_56, mod_consts[145]);
        }

        Py_DECREF(tmp_import_name_from_56);
        if (tmp_assign_source_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gevent$testing, (Nuitka_StringObject *)mod_consts[145], tmp_assign_source_65);
    }
    {
        PyObject *tmp_assign_source_66;
        PyObject *tmp_import_name_from_57;
        PyObject *tmp_name_name_60;
        PyObject *tmp_globals_arg_name_60;
        PyObject *tmp_locals_arg_name_60;
        PyObject *tmp_fromlist_name_60;
        PyObject *tmp_level_name_60;
        tmp_name_name_60 = mod_consts[93];
        tmp_globals_arg_name_60 = (PyObject *)moduledict_gevent$testing;
        tmp_locals_arg_name_60 = Py_None;
        tmp_fromlist_name_60 = mod_consts[146];
        tmp_level_name_60 = mod_consts[25];
        frame_0ccde8493c20ca10d261180f82dc9a9d->m_frame.f_lineno = 117;
        tmp_import_name_from_57 = IMPORT_MODULE5(tmp_name_name_60, tmp_globals_arg_name_60, tmp_locals_arg_name_60, tmp_fromlist_name_60, tmp_level_name_60);
        if (tmp_import_name_from_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_57)) {
            tmp_assign_source_66 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_57,
                (PyObject *)moduledict_gevent$testing,
                mod_consts[147],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_66 = IMPORT_NAME(tmp_import_name_from_57, mod_consts[147]);
        }

        Py_DECREF(tmp_import_name_from_57);
        if (tmp_assign_source_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gevent$testing, (Nuitka_StringObject *)mod_consts[147], tmp_assign_source_66);
    }
    {
        PyObject *tmp_assign_source_67;
        PyObject *tmp_import_name_from_58;
        PyObject *tmp_name_name_61;
        PyObject *tmp_globals_arg_name_61;
        PyObject *tmp_locals_arg_name_61;
        PyObject *tmp_fromlist_name_61;
        PyObject *tmp_level_name_61;
        tmp_name_name_61 = mod_consts[148];
        tmp_globals_arg_name_61 = (PyObject *)moduledict_gevent$testing;
        tmp_locals_arg_name_61 = Py_None;
        tmp_fromlist_name_61 = mod_consts[149];
        tmp_level_name_61 = mod_consts[25];
        frame_0ccde8493c20ca10d261180f82dc9a9d->m_frame.f_lineno = 119;
        tmp_import_name_from_58 = IMPORT_MODULE5(tmp_name_name_61, tmp_globals_arg_name_61, tmp_locals_arg_name_61, tmp_fromlist_name_61, tmp_level_name_61);
        if (tmp_import_name_from_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_58)) {
            tmp_assign_source_67 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_58,
                (PyObject *)moduledict_gevent$testing,
                mod_consts[150],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_67 = IMPORT_NAME(tmp_import_name_from_58, mod_consts[150]);
        }

        Py_DECREF(tmp_import_name_from_58);
        if (tmp_assign_source_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gevent$testing, (Nuitka_StringObject *)mod_consts[150], tmp_assign_source_67);
    }
    {
        PyObject *tmp_assign_source_68;
        PyObject *tmp_import_name_from_59;
        PyObject *tmp_name_name_62;
        PyObject *tmp_globals_arg_name_62;
        PyObject *tmp_locals_arg_name_62;
        PyObject *tmp_fromlist_name_62;
        PyObject *tmp_level_name_62;
        tmp_name_name_62 = mod_consts[151];
        tmp_globals_arg_name_62 = (PyObject *)moduledict_gevent$testing;
        tmp_locals_arg_name_62 = Py_None;
        tmp_fromlist_name_62 = mod_consts[152];
        tmp_level_name_62 = mod_consts[25];
        frame_0ccde8493c20ca10d261180f82dc9a9d->m_frame.f_lineno = 122;
        tmp_import_name_from_59 = IMPORT_MODULE5(tmp_name_name_62, tmp_globals_arg_name_62, tmp_locals_arg_name_62, tmp_fromlist_name_62, tmp_level_name_62);
        if (tmp_import_name_from_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_59)) {
            tmp_assign_source_68 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_59,
                (PyObject *)moduledict_gevent$testing,
                mod_consts[153],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_68 = IMPORT_NAME(tmp_import_name_from_59, mod_consts[153]);
        }

        Py_DECREF(tmp_import_name_from_59);
        if (tmp_assign_source_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gevent$testing, (Nuitka_StringObject *)mod_consts[153], tmp_assign_source_68);
    }
    {
        PyObject *tmp_assign_source_69;
        PyObject *tmp_import_name_from_60;
        PyObject *tmp_name_name_63;
        PyObject *tmp_globals_arg_name_63;
        PyObject *tmp_locals_arg_name_63;
        PyObject *tmp_fromlist_name_63;
        PyObject *tmp_level_name_63;
        tmp_name_name_63 = mod_consts[154];
        tmp_globals_arg_name_63 = (PyObject *)moduledict_gevent$testing;
        tmp_locals_arg_name_63 = Py_None;
        tmp_fromlist_name_63 = mod_consts[155];
        tmp_level_name_63 = mod_consts[25];
        frame_0ccde8493c20ca10d261180f82dc9a9d->m_frame.f_lineno = 125;
        tmp_import_name_from_60 = IMPORT_MODULE5(tmp_name_name_63, tmp_globals_arg_name_63, tmp_locals_arg_name_63, tmp_fromlist_name_63, tmp_level_name_63);
        if (tmp_import_name_from_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_60)) {
            tmp_assign_source_69 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_60,
                (PyObject *)moduledict_gevent$testing,
                mod_consts[156],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_69 = IMPORT_NAME(tmp_import_name_from_60, mod_consts[156]);
        }

        Py_DECREF(tmp_import_name_from_60);
        if (tmp_assign_source_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gevent$testing, (Nuitka_StringObject *)mod_consts[156], tmp_assign_source_69);
    }
    {
        PyObject *tmp_assign_source_70;
        PyObject *tmp_import_name_from_61;
        PyObject *tmp_name_name_64;
        PyObject *tmp_globals_arg_name_64;
        PyObject *tmp_locals_arg_name_64;
        PyObject *tmp_fromlist_name_64;
        PyObject *tmp_level_name_64;
        tmp_name_name_64 = mod_consts[154];
        tmp_globals_arg_name_64 = (PyObject *)moduledict_gevent$testing;
        tmp_locals_arg_name_64 = Py_None;
        tmp_fromlist_name_64 = mod_consts[157];
        tmp_level_name_64 = mod_consts[25];
        frame_0ccde8493c20ca10d261180f82dc9a9d->m_frame.f_lineno = 126;
        tmp_import_name_from_61 = IMPORT_MODULE5(tmp_name_name_64, tmp_globals_arg_name_64, tmp_locals_arg_name_64, tmp_fromlist_name_64, tmp_level_name_64);
        if (tmp_import_name_from_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_61)) {
            tmp_assign_source_70 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_61,
                (PyObject *)moduledict_gevent$testing,
                mod_consts[158],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_70 = IMPORT_NAME(tmp_import_name_from_61, mod_consts[158]);
        }

        Py_DECREF(tmp_import_name_from_61);
        if (tmp_assign_source_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gevent$testing, (Nuitka_StringObject *)mod_consts[158], tmp_assign_source_70);
    }
    {
        PyObject *tmp_assign_source_71;
        PyObject *tmp_import_name_from_62;
        PyObject *tmp_name_name_65;
        PyObject *tmp_globals_arg_name_65;
        PyObject *tmp_locals_arg_name_65;
        PyObject *tmp_fromlist_name_65;
        PyObject *tmp_level_name_65;
        tmp_name_name_65 = mod_consts[154];
        tmp_globals_arg_name_65 = (PyObject *)moduledict_gevent$testing;
        tmp_locals_arg_name_65 = Py_None;
        tmp_fromlist_name_65 = mod_consts[159];
        tmp_level_name_65 = mod_consts[25];
        frame_0ccde8493c20ca10d261180f82dc9a9d->m_frame.f_lineno = 127;
        tmp_import_name_from_62 = IMPORT_MODULE5(tmp_name_name_65, tmp_globals_arg_name_65, tmp_locals_arg_name_65, tmp_fromlist_name_65, tmp_level_name_65);
        if (tmp_import_name_from_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_62)) {
            tmp_assign_source_71 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_62,
                (PyObject *)moduledict_gevent$testing,
                mod_consts[160],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_71 = IMPORT_NAME(tmp_import_name_from_62, mod_consts[160]);
        }

        Py_DECREF(tmp_import_name_from_62);
        if (tmp_assign_source_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gevent$testing, (Nuitka_StringObject *)mod_consts[160], tmp_assign_source_71);
    }
    {
        PyObject *tmp_assign_source_72;
        PyObject *tmp_import_name_from_63;
        PyObject *tmp_name_name_66;
        PyObject *tmp_globals_arg_name_66;
        PyObject *tmp_locals_arg_name_66;
        PyObject *tmp_fromlist_name_66;
        PyObject *tmp_level_name_66;
        tmp_name_name_66 = mod_consts[154];
        tmp_globals_arg_name_66 = (PyObject *)moduledict_gevent$testing;
        tmp_locals_arg_name_66 = Py_None;
        tmp_fromlist_name_66 = mod_consts[161];
        tmp_level_name_66 = mod_consts[25];
        frame_0ccde8493c20ca10d261180f82dc9a9d->m_frame.f_lineno = 128;
        tmp_import_name_from_63 = IMPORT_MODULE5(tmp_name_name_66, tmp_globals_arg_name_66, tmp_locals_arg_name_66, tmp_fromlist_name_66, tmp_level_name_66);
        if (tmp_import_name_from_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_63)) {
            tmp_assign_source_72 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_63,
                (PyObject *)moduledict_gevent$testing,
                mod_consts[162],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_72 = IMPORT_NAME(tmp_import_name_from_63, mod_consts[162]);
        }

        Py_DECREF(tmp_import_name_from_63);
        if (tmp_assign_source_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gevent$testing, (Nuitka_StringObject *)mod_consts[162], tmp_assign_source_72);
    }
    {
        PyObject *tmp_assign_source_73;
        PyObject *tmp_import_name_from_64;
        PyObject *tmp_name_name_67;
        PyObject *tmp_globals_arg_name_67;
        PyObject *tmp_locals_arg_name_67;
        PyObject *tmp_fromlist_name_67;
        PyObject *tmp_level_name_67;
        tmp_name_name_67 = mod_consts[154];
        tmp_globals_arg_name_67 = (PyObject *)moduledict_gevent$testing;
        tmp_locals_arg_name_67 = Py_None;
        tmp_fromlist_name_67 = mod_consts[163];
        tmp_level_name_67 = mod_consts[25];
        frame_0ccde8493c20ca10d261180f82dc9a9d->m_frame.f_lineno = 129;
        tmp_import_name_from_64 = IMPORT_MODULE5(tmp_name_name_67, tmp_globals_arg_name_67, tmp_locals_arg_name_67, tmp_fromlist_name_67, tmp_level_name_67);
        if (tmp_import_name_from_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_64)) {
            tmp_assign_source_73 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_64,
                (PyObject *)moduledict_gevent$testing,
                mod_consts[164],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_73 = IMPORT_NAME(tmp_import_name_from_64, mod_consts[164]);
        }

        Py_DECREF(tmp_import_name_from_64);
        if (tmp_assign_source_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gevent$testing, (Nuitka_StringObject *)mod_consts[164], tmp_assign_source_73);
    }
    {
        PyObject *tmp_assign_source_74;
        PyObject *tmp_import_name_from_65;
        PyObject *tmp_name_name_68;
        PyObject *tmp_globals_arg_name_68;
        PyObject *tmp_locals_arg_name_68;
        PyObject *tmp_fromlist_name_68;
        PyObject *tmp_level_name_68;
        tmp_name_name_68 = mod_consts[154];
        tmp_globals_arg_name_68 = (PyObject *)moduledict_gevent$testing;
        tmp_locals_arg_name_68 = Py_None;
        tmp_fromlist_name_68 = mod_consts[165];
        tmp_level_name_68 = mod_consts[25];
        frame_0ccde8493c20ca10d261180f82dc9a9d->m_frame.f_lineno = 130;
        tmp_import_name_from_65 = IMPORT_MODULE5(tmp_name_name_68, tmp_globals_arg_name_68, tmp_locals_arg_name_68, tmp_fromlist_name_68, tmp_level_name_68);
        if (tmp_import_name_from_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_65)) {
            tmp_assign_source_74 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_65,
                (PyObject *)moduledict_gevent$testing,
                mod_consts[166],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_74 = IMPORT_NAME(tmp_import_name_from_65, mod_consts[166]);
        }

        Py_DECREF(tmp_import_name_from_65);
        if (tmp_assign_source_74 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gevent$testing, (Nuitka_StringObject *)mod_consts[166], tmp_assign_source_74);
    }
    {
        PyObject *tmp_assign_source_75;
        PyObject *tmp_import_name_from_66;
        PyObject *tmp_name_name_69;
        PyObject *tmp_globals_arg_name_69;
        PyObject *tmp_locals_arg_name_69;
        PyObject *tmp_fromlist_name_69;
        PyObject *tmp_level_name_69;
        tmp_name_name_69 = mod_consts[154];
        tmp_globals_arg_name_69 = (PyObject *)moduledict_gevent$testing;
        tmp_locals_arg_name_69 = Py_None;
        tmp_fromlist_name_69 = mod_consts[167];
        tmp_level_name_69 = mod_consts[25];
        frame_0ccde8493c20ca10d261180f82dc9a9d->m_frame.f_lineno = 133;
        tmp_import_name_from_66 = IMPORT_MODULE5(tmp_name_name_69, tmp_globals_arg_name_69, tmp_locals_arg_name_69, tmp_fromlist_name_69, tmp_level_name_69);
        if (tmp_import_name_from_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_66)) {
            tmp_assign_source_75 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_66,
                (PyObject *)moduledict_gevent$testing,
                mod_consts[168],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_75 = IMPORT_NAME(tmp_import_name_from_66, mod_consts[168]);
        }

        Py_DECREF(tmp_import_name_from_66);
        if (tmp_assign_source_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gevent$testing, (Nuitka_StringObject *)mod_consts[168], tmp_assign_source_75);
    }
    {
        PyObject *tmp_assign_source_76;
        PyObject *tmp_import_name_from_67;
        PyObject *tmp_name_name_70;
        PyObject *tmp_globals_arg_name_70;
        PyObject *tmp_locals_arg_name_70;
        PyObject *tmp_fromlist_name_70;
        PyObject *tmp_level_name_70;
        tmp_name_name_70 = mod_consts[154];
        tmp_globals_arg_name_70 = (PyObject *)moduledict_gevent$testing;
        tmp_locals_arg_name_70 = Py_None;
        tmp_fromlist_name_70 = mod_consts[169];
        tmp_level_name_70 = mod_consts[25];
        frame_0ccde8493c20ca10d261180f82dc9a9d->m_frame.f_lineno = 134;
        tmp_import_name_from_67 = IMPORT_MODULE5(tmp_name_name_70, tmp_globals_arg_name_70, tmp_locals_arg_name_70, tmp_fromlist_name_70, tmp_level_name_70);
        if (tmp_import_name_from_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_67)) {
            tmp_assign_source_76 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_67,
                (PyObject *)moduledict_gevent$testing,
                mod_consts[170],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_76 = IMPORT_NAME(tmp_import_name_from_67, mod_consts[170]);
        }

        Py_DECREF(tmp_import_name_from_67);
        if (tmp_assign_source_76 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gevent$testing, (Nuitka_StringObject *)mod_consts[170], tmp_assign_source_76);
    }
    {
        PyObject *tmp_assign_source_77;
        PyObject *tmp_expression_name_7;
        tmp_expression_name_7 = GET_STRING_DICT_VALUE(moduledict_gevent$testing, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_name_7 == NULL)) {
            tmp_expression_name_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_77 = LOOKUP_ATTRIBUTE(tmp_expression_name_7, mod_consts[171]);
        if (tmp_assign_source_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gevent$testing, (Nuitka_StringObject *)mod_consts[171], tmp_assign_source_77);
    }
    {
        PyObject *tmp_assign_source_78;
        PyObject *tmp_expression_name_8;
        tmp_expression_name_8 = GET_STRING_DICT_VALUE(moduledict_gevent$testing, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_name_8 == NULL)) {
            tmp_expression_name_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_78 = LOOKUP_ATTRIBUTE(tmp_expression_name_8, mod_consts[172]);
        if (tmp_assign_source_78 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gevent$testing, (Nuitka_StringObject *)mod_consts[172], tmp_assign_source_78);
    }
    {
        PyObject *tmp_assign_source_79;
        PyObject *tmp_import_name_from_68;
        PyObject *tmp_name_name_71;
        PyObject *tmp_globals_arg_name_71;
        PyObject *tmp_locals_arg_name_71;
        PyObject *tmp_fromlist_name_71;
        PyObject *tmp_level_name_71;
        tmp_name_name_71 = mod_consts[173];
        tmp_globals_arg_name_71 = (PyObject *)moduledict_gevent$testing;
        tmp_locals_arg_name_71 = Py_None;
        tmp_fromlist_name_71 = mod_consts[174];
        tmp_level_name_71 = mod_consts[25];
        frame_0ccde8493c20ca10d261180f82dc9a9d->m_frame.f_lineno = 142;
        tmp_import_name_from_68 = IMPORT_MODULE5(tmp_name_name_71, tmp_globals_arg_name_71, tmp_locals_arg_name_71, tmp_fromlist_name_71, tmp_level_name_71);
        if (tmp_import_name_from_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_68)) {
            tmp_assign_source_79 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_68,
                (PyObject *)moduledict_gevent$testing,
                mod_consts[175],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_79 = IMPORT_NAME(tmp_import_name_from_68, mod_consts[175]);
        }

        Py_DECREF(tmp_import_name_from_68);
        if (tmp_assign_source_79 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gevent$testing, (Nuitka_StringObject *)mod_consts[175], tmp_assign_source_79);
    }
    {
        PyObject *tmp_assign_source_80;
        PyObject *tmp_import_name_from_69;
        PyObject *tmp_name_name_72;
        PyObject *tmp_globals_arg_name_72;
        PyObject *tmp_locals_arg_name_72;
        PyObject *tmp_fromlist_name_72;
        PyObject *tmp_level_name_72;
        tmp_name_name_72 = mod_consts[173];
        tmp_globals_arg_name_72 = (PyObject *)moduledict_gevent$testing;
        tmp_locals_arg_name_72 = Py_None;
        tmp_fromlist_name_72 = mod_consts[176];
        tmp_level_name_72 = mod_consts[25];
        frame_0ccde8493c20ca10d261180f82dc9a9d->m_frame.f_lineno = 143;
        tmp_import_name_from_69 = IMPORT_MODULE5(tmp_name_name_72, tmp_globals_arg_name_72, tmp_locals_arg_name_72, tmp_fromlist_name_72, tmp_level_name_72);
        if (tmp_import_name_from_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_69)) {
            tmp_assign_source_80 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_69,
                (PyObject *)moduledict_gevent$testing,
                mod_consts[177],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_80 = IMPORT_NAME(tmp_import_name_from_69, mod_consts[177]);
        }

        Py_DECREF(tmp_import_name_from_69);
        if (tmp_assign_source_80 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gevent$testing, (Nuitka_StringObject *)mod_consts[177], tmp_assign_source_80);
    }
    {
        PyObject *tmp_assign_source_81;
        PyObject *tmp_import_name_from_70;
        PyObject *tmp_name_name_73;
        PyObject *tmp_globals_arg_name_73;
        PyObject *tmp_locals_arg_name_73;
        PyObject *tmp_fromlist_name_73;
        PyObject *tmp_level_name_73;
        tmp_name_name_73 = mod_consts[178];
        tmp_globals_arg_name_73 = (PyObject *)moduledict_gevent$testing;
        tmp_locals_arg_name_73 = Py_None;
        tmp_fromlist_name_73 = mod_consts[179];
        tmp_level_name_73 = mod_consts[25];
        frame_0ccde8493c20ca10d261180f82dc9a9d->m_frame.f_lineno = 145;
        tmp_import_name_from_70 = IMPORT_MODULE5(tmp_name_name_73, tmp_globals_arg_name_73, tmp_locals_arg_name_73, tmp_fromlist_name_73, tmp_level_name_73);
        if (tmp_import_name_from_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_70)) {
            tmp_assign_source_81 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_70,
                (PyObject *)moduledict_gevent$testing,
                mod_consts[180],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_81 = IMPORT_NAME(tmp_import_name_from_70, mod_consts[180]);
        }

        Py_DECREF(tmp_import_name_from_70);
        if (tmp_assign_source_81 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gevent$testing, (Nuitka_StringObject *)mod_consts[180], tmp_assign_source_81);
    }
    {
        PyObject *tmp_assign_source_82;
        PyObject *tmp_import_name_from_71;
        PyObject *tmp_name_name_74;
        PyObject *tmp_globals_arg_name_74;
        PyObject *tmp_locals_arg_name_74;
        PyObject *tmp_fromlist_name_74;
        PyObject *tmp_level_name_74;
        tmp_name_name_74 = mod_consts[178];
        tmp_globals_arg_name_74 = (PyObject *)moduledict_gevent$testing;
        tmp_locals_arg_name_74 = Py_None;
        tmp_fromlist_name_74 = mod_consts[181];
        tmp_level_name_74 = mod_consts[25];
        frame_0ccde8493c20ca10d261180f82dc9a9d->m_frame.f_lineno = 146;
        tmp_import_name_from_71 = IMPORT_MODULE5(tmp_name_name_74, tmp_globals_arg_name_74, tmp_locals_arg_name_74, tmp_fromlist_name_74, tmp_level_name_74);
        if (tmp_import_name_from_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_71)) {
            tmp_assign_source_82 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_71,
                (PyObject *)moduledict_gevent$testing,
                mod_consts[182],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_82 = IMPORT_NAME(tmp_import_name_from_71, mod_consts[182]);
        }

        Py_DECREF(tmp_import_name_from_71);
        if (tmp_assign_source_82 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gevent$testing, (Nuitka_StringObject *)mod_consts[182], tmp_assign_source_82);
    }
    {
        PyObject *tmp_assign_source_83;
        PyObject *tmp_import_name_from_72;
        PyObject *tmp_name_name_75;
        PyObject *tmp_globals_arg_name_75;
        PyObject *tmp_locals_arg_name_75;
        PyObject *tmp_fromlist_name_75;
        PyObject *tmp_level_name_75;
        tmp_name_name_75 = mod_consts[183];
        tmp_globals_arg_name_75 = (PyObject *)moduledict_gevent$testing;
        tmp_locals_arg_name_75 = Py_None;
        tmp_fromlist_name_75 = mod_consts[184];
        tmp_level_name_75 = mod_consts[25];
        frame_0ccde8493c20ca10d261180f82dc9a9d->m_frame.f_lineno = 148;
        tmp_import_name_from_72 = IMPORT_MODULE5(tmp_name_name_75, tmp_globals_arg_name_75, tmp_locals_arg_name_75, tmp_fromlist_name_75, tmp_level_name_75);
        if (tmp_import_name_from_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_72)) {
            tmp_assign_source_83 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_72,
                (PyObject *)moduledict_gevent$testing,
                mod_consts[185],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_83 = IMPORT_NAME(tmp_import_name_from_72, mod_consts[185]);
        }

        Py_DECREF(tmp_import_name_from_72);
        if (tmp_assign_source_83 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gevent$testing, (Nuitka_StringObject *)mod_consts[185], tmp_assign_source_83);
    }
    {
        PyObject *tmp_assign_source_84;
        PyObject *tmp_import_name_from_73;
        PyObject *tmp_name_name_76;
        PyObject *tmp_globals_arg_name_76;
        PyObject *tmp_locals_arg_name_76;
        PyObject *tmp_fromlist_name_76;
        PyObject *tmp_level_name_76;
        tmp_name_name_76 = mod_consts[186];
        tmp_globals_arg_name_76 = (PyObject *)moduledict_gevent$testing;
        tmp_locals_arg_name_76 = Py_None;
        tmp_fromlist_name_76 = mod_consts[187];
        tmp_level_name_76 = mod_consts[25];
        frame_0ccde8493c20ca10d261180f82dc9a9d->m_frame.f_lineno = 150;
        tmp_import_name_from_73 = IMPORT_MODULE5(tmp_name_name_76, tmp_globals_arg_name_76, tmp_locals_arg_name_76, tmp_fromlist_name_76, tmp_level_name_76);
        if (tmp_import_name_from_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_73)) {
            tmp_assign_source_84 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_73,
                (PyObject *)moduledict_gevent$testing,
                mod_consts[188],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_84 = IMPORT_NAME(tmp_import_name_from_73, mod_consts[188]);
        }

        Py_DECREF(tmp_import_name_from_73);
        if (tmp_assign_source_84 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gevent$testing, (Nuitka_StringObject *)mod_consts[188], tmp_assign_source_84);
    }
    {
        PyObject *tmp_assign_source_85;
        PyObject *tmp_expression_name_9;
        tmp_expression_name_9 = GET_STRING_DICT_VALUE(moduledict_gevent$testing, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_name_9 == NULL)) {
            tmp_expression_name_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_85 = LOOKUP_ATTRIBUTE(tmp_expression_name_9, mod_consts[185]);
        if (tmp_assign_source_85 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gevent$testing, (Nuitka_StringObject *)mod_consts[189], tmp_assign_source_85);
    }
    {
        PyObject *tmp_assign_source_86;
        PyObject *tmp_import_name_from_74;
        PyObject *tmp_name_name_77;
        PyObject *tmp_globals_arg_name_77;
        PyObject *tmp_locals_arg_name_77;
        PyObject *tmp_fromlist_name_77;
        PyObject *tmp_level_name_77;
        tmp_name_name_77 = mod_consts[190];
        tmp_globals_arg_name_77 = (PyObject *)moduledict_gevent$testing;
        tmp_locals_arg_name_77 = Py_None;
        tmp_fromlist_name_77 = mod_consts[191];
        tmp_level_name_77 = mod_consts[25];
        frame_0ccde8493c20ca10d261180f82dc9a9d->m_frame.f_lineno = 154;
        tmp_import_name_from_74 = IMPORT_MODULE5(tmp_name_name_77, tmp_globals_arg_name_77, tmp_locals_arg_name_77, tmp_fromlist_name_77, tmp_level_name_77);
        if (tmp_import_name_from_74 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_74)) {
            tmp_assign_source_86 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_74,
                (PyObject *)moduledict_gevent$testing,
                mod_consts[192],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_86 = IMPORT_NAME(tmp_import_name_from_74, mod_consts[192]);
        }

        Py_DECREF(tmp_import_name_from_74);
        if (tmp_assign_source_86 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gevent$testing, (Nuitka_StringObject *)mod_consts[192], tmp_assign_source_86);
    }
    {
        PyObject *tmp_assign_source_87;
        PyObject *tmp_import_name_from_75;
        PyObject *tmp_name_name_78;
        PyObject *tmp_globals_arg_name_78;
        PyObject *tmp_locals_arg_name_78;
        PyObject *tmp_fromlist_name_78;
        PyObject *tmp_level_name_78;
        tmp_name_name_78 = mod_consts[190];
        tmp_globals_arg_name_78 = (PyObject *)moduledict_gevent$testing;
        tmp_locals_arg_name_78 = Py_None;
        tmp_fromlist_name_78 = mod_consts[193];
        tmp_level_name_78 = mod_consts[25];
        frame_0ccde8493c20ca10d261180f82dc9a9d->m_frame.f_lineno = 155;
        tmp_import_name_from_75 = IMPORT_MODULE5(tmp_name_name_78, tmp_globals_arg_name_78, tmp_locals_arg_name_78, tmp_fromlist_name_78, tmp_level_name_78);
        if (tmp_import_name_from_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_75)) {
            tmp_assign_source_87 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_75,
                (PyObject *)moduledict_gevent$testing,
                mod_consts[194],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_87 = IMPORT_NAME(tmp_import_name_from_75, mod_consts[194]);
        }

        Py_DECREF(tmp_import_name_from_75);
        if (tmp_assign_source_87 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gevent$testing, (Nuitka_StringObject *)mod_consts[194], tmp_assign_source_87);
    }
    {
        PyObject *tmp_assign_source_88;
        PyObject *tmp_import_name_from_76;
        PyObject *tmp_name_name_79;
        PyObject *tmp_globals_arg_name_79;
        PyObject *tmp_locals_arg_name_79;
        PyObject *tmp_fromlist_name_79;
        PyObject *tmp_level_name_79;
        tmp_name_name_79 = mod_consts[190];
        tmp_globals_arg_name_79 = (PyObject *)moduledict_gevent$testing;
        tmp_locals_arg_name_79 = Py_None;
        tmp_fromlist_name_79 = mod_consts[195];
        tmp_level_name_79 = mod_consts[25];
        frame_0ccde8493c20ca10d261180f82dc9a9d->m_frame.f_lineno = 156;
        tmp_import_name_from_76 = IMPORT_MODULE5(tmp_name_name_79, tmp_globals_arg_name_79, tmp_locals_arg_name_79, tmp_fromlist_name_79, tmp_level_name_79);
        if (tmp_import_name_from_76 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_76)) {
            tmp_assign_source_88 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_76,
                (PyObject *)moduledict_gevent$testing,
                mod_consts[196],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_88 = IMPORT_NAME(tmp_import_name_from_76, mod_consts[196]);
        }

        Py_DECREF(tmp_import_name_from_76);
        if (tmp_assign_source_88 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gevent$testing, (Nuitka_StringObject *)mod_consts[196], tmp_assign_source_88);
    }
    {
        PyObject *tmp_assign_source_89;
        PyObject *tmp_import_name_from_77;
        PyObject *tmp_name_name_80;
        PyObject *tmp_globals_arg_name_80;
        PyObject *tmp_locals_arg_name_80;
        PyObject *tmp_fromlist_name_80;
        PyObject *tmp_level_name_80;
        tmp_name_name_80 = mod_consts[190];
        tmp_globals_arg_name_80 = (PyObject *)moduledict_gevent$testing;
        tmp_locals_arg_name_80 = Py_None;
        tmp_fromlist_name_80 = mod_consts[197];
        tmp_level_name_80 = mod_consts[25];
        frame_0ccde8493c20ca10d261180f82dc9a9d->m_frame.f_lineno = 157;
        tmp_import_name_from_77 = IMPORT_MODULE5(tmp_name_name_80, tmp_globals_arg_name_80, tmp_locals_arg_name_80, tmp_fromlist_name_80, tmp_level_name_80);
        if (tmp_import_name_from_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_77)) {
            tmp_assign_source_89 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_77,
                (PyObject *)moduledict_gevent$testing,
                mod_consts[198],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_89 = IMPORT_NAME(tmp_import_name_from_77, mod_consts[198]);
        }

        Py_DECREF(tmp_import_name_from_77);
        if (tmp_assign_source_89 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gevent$testing, (Nuitka_StringObject *)mod_consts[198], tmp_assign_source_89);
    }
    {
        PyObject *tmp_assign_source_90;


        tmp_assign_source_90 = MAKE_FUNCTION_gevent$testing$$$function__1_gc_collect_if_needed();

        UPDATE_STRING_DICT1(moduledict_gevent$testing, (Nuitka_StringObject *)mod_consts[199], tmp_assign_source_90);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_91;
        PyObject *tmp_import_name_from_78;
        PyObject *tmp_name_name_81;
        PyObject *tmp_globals_arg_name_81;
        PyObject *tmp_locals_arg_name_81;
        PyObject *tmp_fromlist_name_81;
        PyObject *tmp_level_name_81;
        tmp_name_name_81 = mod_consts[5];
        tmp_globals_arg_name_81 = (PyObject *)moduledict_gevent$testing;
        tmp_locals_arg_name_81 = Py_None;
        tmp_fromlist_name_81 = mod_consts[200];
        tmp_level_name_81 = mod_consts[1];
        frame_0ccde8493c20ca10d261180f82dc9a9d->m_frame.f_lineno = 169;
        tmp_import_name_from_78 = IMPORT_MODULE5(tmp_name_name_81, tmp_globals_arg_name_81, tmp_locals_arg_name_81, tmp_fromlist_name_81, tmp_level_name_81);
        if (tmp_import_name_from_78 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;

            goto try_except_handler_3;
        }
        if (PyModule_Check(tmp_import_name_from_78)) {
            tmp_assign_source_91 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_78,
                (PyObject *)moduledict_gevent$testing,
                mod_consts[201],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_91 = IMPORT_NAME(tmp_import_name_from_78, mod_consts[201]);
        }

        Py_DECREF(tmp_import_name_from_78);
        if (tmp_assign_source_91 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_gevent$testing, (Nuitka_StringObject *)mod_consts[201], tmp_assign_source_91);
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 4.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_4, &exception_preserved_value_4, &exception_preserved_tb_4);

    if (exception_keeper_tb_3 == NULL) {
        exception_keeper_tb_3 = MAKE_TRACEBACK(frame_0ccde8493c20ca10d261180f82dc9a9d, exception_keeper_lineno_3);
    } else if (exception_keeper_lineno_3 != 0) {
        exception_keeper_tb_3 = ADD_TRACEBACK(exception_keeper_tb_3, frame_0ccde8493c20ca10d261180f82dc9a9d, exception_keeper_lineno_3);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_3, exception_keeper_tb_3);
    PUBLISH_EXCEPTION(&exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3);
    // Tried code:
    {
        bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        tmp_compexpr_left_3 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_3 = PyExc_ImportError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_3, tmp_compexpr_right_3);
        assert(!(tmp_res == -1));
        tmp_condition_result_3 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    // Tried code:
    {
        PyObject *tmp_assign_source_92;
        PyObject *tmp_name_name_82;
        PyObject *tmp_globals_arg_name_82;
        PyObject *tmp_locals_arg_name_82;
        PyObject *tmp_fromlist_name_82;
        PyObject *tmp_level_name_82;
        tmp_name_name_82 = mod_consts[201];
        tmp_globals_arg_name_82 = (PyObject *)moduledict_gevent$testing;
        tmp_locals_arg_name_82 = Py_None;
        tmp_fromlist_name_82 = Py_None;
        tmp_level_name_82 = mod_consts[1];
        frame_0ccde8493c20ca10d261180f82dc9a9d->m_frame.f_lineno = 172;
        tmp_assign_source_92 = IMPORT_MODULE5(tmp_name_name_82, tmp_globals_arg_name_82, tmp_locals_arg_name_82, tmp_fromlist_name_82, tmp_level_name_82);
        if (tmp_assign_source_92 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_gevent$testing, (Nuitka_StringObject *)mod_consts[201], tmp_assign_source_92);
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 3.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_3, &exception_preserved_value_3, &exception_preserved_tb_3);

    if (exception_keeper_tb_4 == NULL) {
        exception_keeper_tb_4 = MAKE_TRACEBACK(frame_0ccde8493c20ca10d261180f82dc9a9d, exception_keeper_lineno_4);
    } else if (exception_keeper_lineno_4 != 0) {
        exception_keeper_tb_4 = ADD_TRACEBACK(exception_keeper_tb_4, frame_0ccde8493c20ca10d261180f82dc9a9d, exception_keeper_lineno_4);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_4, &exception_keeper_value_4, &exception_keeper_tb_4);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_4, exception_keeper_tb_4);
    PUBLISH_EXCEPTION(&exception_keeper_type_4, &exception_keeper_value_4, &exception_keeper_tb_4);
    // Tried code:
    {
        bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        tmp_compexpr_left_4 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_4 = PyExc_ImportError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_4, tmp_compexpr_right_4);
        assert(!(tmp_res == -1));
        tmp_condition_result_4 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_93;
        tmp_assign_source_93 = mod_consts[202];
        assert(tmp_class_creation_1__bases_orig == NULL);
        Py_INCREF(tmp_assign_source_93);
        tmp_class_creation_1__bases_orig = tmp_assign_source_93;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_94;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_94 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_94 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_94;
    }
    {
        PyObject *tmp_assign_source_95;
        tmp_assign_source_95 = PyDict_New();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_95;
    }
    {
        PyObject *tmp_assign_source_96;
        PyObject *tmp_metaclass_name_1;
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_key_name_1;
        PyObject *tmp_dict_arg_name_1;
        PyObject *tmp_dict_arg_name_2;
        PyObject *tmp_key_name_2;
        nuitka_bool tmp_condition_result_6;
        int tmp_truth_name_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_expression_name_10;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_bases_name_1;
        tmp_key_name_1 = mod_consts[203];
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_dict_arg_name_1 = tmp_class_creation_1__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_1, tmp_key_name_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_5 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_dict_arg_name_2 = tmp_class_creation_1__class_decl_dict;
        tmp_key_name_2 = mod_consts[203];
        tmp_metaclass_name_1 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_arg_name_2, tmp_key_name_2);
        if (tmp_metaclass_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;

            goto try_except_handler_7;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_1__bases);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;

            goto try_except_handler_7;
        }
        tmp_condition_result_6 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_expression_name_10 = tmp_class_creation_1__bases;
        tmp_subscript_name_2 = mod_consts[1];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_10, tmp_subscript_name_2, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;

            goto try_except_handler_7;
        }
        tmp_metaclass_name_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;

            goto try_except_handler_7;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_metaclass_name_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_name_1);
        condexpr_end_2:;
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_name_1 = tmp_class_creation_1__bases;
        tmp_assign_source_96 = SELECT_METACLASS(tmp_metaclass_name_1, tmp_bases_name_1);
        Py_DECREF(tmp_metaclass_name_1);
        if (tmp_assign_source_96 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_96;
    }
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_key_name_3;
        PyObject *tmp_dict_arg_name_3;
        tmp_key_name_3 = mod_consts[203];
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_dict_arg_name_3 = tmp_class_creation_1__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_3, tmp_key_name_3);
        assert(!(tmp_res == -1));
        tmp_condition_result_7 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_1__class_decl_dict;
    tmp_dictdel_key = mod_consts[203];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 175;

        goto try_except_handler_7;
    }
    branch_no_5:;
    {
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_expression_name_11;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_name_11 = tmp_class_creation_1__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_11, mod_consts[204]);
        tmp_condition_result_8 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_assign_source_97;
        PyObject *tmp_called_name_4;
        PyObject *tmp_expression_name_12;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_name_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_name_12 = tmp_class_creation_1__metaclass;
        tmp_called_name_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_12, mod_consts[204]);
        if (tmp_called_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;

            goto try_except_handler_7;
        }
        tmp_tuple_element_1 = mod_consts[201];
        tmp_args_name_1 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_name_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_1 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_name_1, 1, tmp_tuple_element_1);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_name_1 = tmp_class_creation_1__class_decl_dict;
        frame_0ccde8493c20ca10d261180f82dc9a9d->m_frame.f_lineno = 175;
        tmp_assign_source_97 = CALL_FUNCTION(tmp_called_name_4, tmp_args_name_1, tmp_kwargs_name_1);
        Py_DECREF(tmp_called_name_4);
        Py_DECREF(tmp_args_name_1);
        if (tmp_assign_source_97 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_97;
    }
    {
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_expression_name_13;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_name_13 = tmp_class_creation_1__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_13, mod_consts[205]);
        tmp_operand_name_1 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;

            goto try_except_handler_7;
        }
        tmp_condition_result_9 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_raise_value_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_left_name_1 = mod_consts[206];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
        tmp_getattr_attr_1 = mod_consts[207];
        tmp_getattr_default_1 = mod_consts[208];
        tmp_tuple_element_2 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;

            goto try_except_handler_7;
        }
        tmp_right_name_1 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_14;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_right_name_1, 0, tmp_tuple_element_2);
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_type_arg_2 = tmp_class_creation_1__prepared;
            tmp_expression_name_14 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_name_14 == NULL));
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_14, mod_consts[207]);
            Py_DECREF(tmp_expression_name_14);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 175;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_right_name_1, 1, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_right_name_1);
        goto try_except_handler_7;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_right_name_1);
        if (tmp_raise_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;

            goto try_except_handler_7;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 175;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_7;
    }
    branch_no_7:;
    goto branch_end_6;
    branch_no_6:;
    {
        PyObject *tmp_assign_source_98;
        tmp_assign_source_98 = PyDict_New();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_98;
    }
    branch_end_6:;
    {
        PyObject *tmp_assign_source_99;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_gevent$testing$$$class__1_mock_175 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[209];
        tmp_res = PyObject_SetItem(locals_gevent$testing$$$class__1_mock_175, mod_consts[210], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;

            goto try_except_handler_9;
        }
        tmp_dictset_value = mod_consts[201];
        tmp_res = PyObject_SetItem(locals_gevent$testing$$$class__1_mock_175, mod_consts[211], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;

            goto try_except_handler_9;
        }
        if (isFrameUnusable(cache_frame_164b1be14ad887f016e1b89617febd6c_2)) {
            Py_XDECREF(cache_frame_164b1be14ad887f016e1b89617febd6c_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_164b1be14ad887f016e1b89617febd6c_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_164b1be14ad887f016e1b89617febd6c_2 = MAKE_FUNCTION_FRAME(codeobj_164b1be14ad887f016e1b89617febd6c, module_gevent$testing, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_164b1be14ad887f016e1b89617febd6c_2->m_type_description == NULL);
        frame_164b1be14ad887f016e1b89617febd6c_2 = cache_frame_164b1be14ad887f016e1b89617febd6c_2;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_164b1be14ad887f016e1b89617febd6c_2);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_164b1be14ad887f016e1b89617febd6c_2) == 2); // Frame stack

        // Framed code:
        {
            nuitka_bool tmp_condition_result_10;
            PyObject *tmp_called_name_5;
            PyObject *tmp_args_element_name_5;
            PyObject *tmp_staticmethod_arg_1;
            tmp_res = MAPPING_HAS_ITEM(locals_gevent$testing$$$class__1_mock_175, mod_consts[212]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 177;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_10 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_3;
            } else {
                goto condexpr_false_3;
            }
            condexpr_true_3:;
            tmp_called_name_5 = PyObject_GetItem(locals_gevent$testing$$$class__1_mock_175, mod_consts[212]);

            if (unlikely(tmp_called_name_5 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[212]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 177;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_name_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 177;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_name_5 = MAKE_FUNCTION_gevent$testing$$$function__2_patch();

            frame_164b1be14ad887f016e1b89617febd6c_2->m_frame.f_lineno = 177;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_5, tmp_args_element_name_5);
            Py_DECREF(tmp_called_name_5);
            Py_DECREF(tmp_args_element_name_5);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 177;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_3;
            condexpr_false_3:;


            tmp_staticmethod_arg_1 = MAKE_FUNCTION_gevent$testing$$$function__2_patch();

            tmp_dictset_value = BUILTIN_STATICMETHOD(tmp_staticmethod_arg_1);
            Py_DECREF(tmp_staticmethod_arg_1);
            assert(!(tmp_dictset_value == NULL));
            condexpr_end_3:;
            tmp_res = PyObject_SetItem(locals_gevent$testing$$$class__1_mock_175, mod_consts[213], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 178;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_164b1be14ad887f016e1b89617febd6c_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_164b1be14ad887f016e1b89617febd6c_2);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_164b1be14ad887f016e1b89617febd6c_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_164b1be14ad887f016e1b89617febd6c_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_164b1be14ad887f016e1b89617febd6c_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_164b1be14ad887f016e1b89617febd6c_2,
            type_description_2,
            outline_0_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_164b1be14ad887f016e1b89617febd6c_2 == cache_frame_164b1be14ad887f016e1b89617febd6c_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_164b1be14ad887f016e1b89617febd6c_2);
            cache_frame_164b1be14ad887f016e1b89617febd6c_2 = NULL;
        }

        assertFrameObject(frame_164b1be14ad887f016e1b89617febd6c_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_9;
        skip_nested_handling_1:;
        {
            nuitka_bool tmp_condition_result_11;
            PyObject *tmp_compexpr_left_5;
            PyObject *tmp_compexpr_right_5;
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_compexpr_left_5 = tmp_class_creation_1__bases;
            CHECK_OBJECT(tmp_class_creation_1__bases_orig);
            tmp_compexpr_right_5 = tmp_class_creation_1__bases_orig;
            tmp_condition_result_11 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_compexpr_left_5, tmp_compexpr_right_5);
            if (tmp_condition_result_11 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 175;

                goto try_except_handler_9;
            }
            if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
                goto branch_yes_8;
            } else {
                goto branch_no_8;
            }
            assert(tmp_condition_result_11 != NUITKA_BOOL_UNASSIGNED);
        }
        branch_yes_8:;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dictset_value = tmp_class_creation_1__bases_orig;
        tmp_res = PyObject_SetItem(locals_gevent$testing$$$class__1_mock_175, mod_consts[215], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;

            goto try_except_handler_9;
        }
        branch_no_8:;
        {
            PyObject *tmp_assign_source_100;
            PyObject *tmp_called_name_6;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_kwargs_name_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_name_6 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_3 = mod_consts[201];
            tmp_args_name_2 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_name_2, 0, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_3 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_name_2, 1, tmp_tuple_element_3);
            tmp_tuple_element_3 = locals_gevent$testing$$$class__1_mock_175;
            PyTuple_SET_ITEM0(tmp_args_name_2, 2, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_name_2 = tmp_class_creation_1__class_decl_dict;
            frame_0ccde8493c20ca10d261180f82dc9a9d->m_frame.f_lineno = 175;
            tmp_assign_source_100 = CALL_FUNCTION(tmp_called_name_6, tmp_args_name_2, tmp_kwargs_name_2);
            Py_DECREF(tmp_args_name_2);
            if (tmp_assign_source_100 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 175;

                goto try_except_handler_9;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_100;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_99 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_99);
        goto try_return_handler_9;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_9:;
        Py_DECREF(locals_gevent$testing$$$class__1_mock_175);
        locals_gevent$testing$$$class__1_mock_175 = NULL;
        goto try_return_handler_8;
        // Exception handler code:
        try_except_handler_9:;
        exception_keeper_type_5 = exception_type;
        exception_keeper_value_5 = exception_value;
        exception_keeper_tb_5 = exception_tb;
        exception_keeper_lineno_5 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_gevent$testing$$$class__1_mock_175);
        locals_gevent$testing$$$class__1_mock_175 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto try_except_handler_8;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_8:;
        CHECK_OBJECT(outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_8:;
        exception_keeper_type_6 = exception_type;
        exception_keeper_value_6 = exception_value;
        exception_keeper_tb_6 = exception_tb;
        exception_keeper_lineno_6 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;
        exception_lineno = exception_keeper_lineno_6;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 175;
        goto try_except_handler_7;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_gevent$testing, (Nuitka_StringObject *)mod_consts[201], tmp_assign_source_99);
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_class_creation_1__bases_orig);
    Py_DECREF(tmp_class_creation_1__bases_orig);
    tmp_class_creation_1__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;
    Py_XDECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto try_except_handler_6;
    // End of try:
    try_end_5:;
    CHECK_OBJECT(tmp_class_creation_1__bases_orig);
    Py_DECREF(tmp_class_creation_1__bases_orig);
    tmp_class_creation_1__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;
    Py_XDECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    goto branch_end_4;
    branch_no_4:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 171;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_0ccde8493c20ca10d261180f82dc9a9d->m_frame) frame_0ccde8493c20ca10d261180f82dc9a9d->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_6;
    branch_end_4:;
    goto try_end_6;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 3.
    SET_CURRENT_EXCEPTION(exception_preserved_type_3, exception_preserved_value_3, exception_preserved_tb_3);

    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto try_except_handler_4;
    // End of try:
    try_end_6:;
    // Restore previous exception id 3.
    SET_CURRENT_EXCEPTION(exception_preserved_type_3, exception_preserved_value_3, exception_preserved_tb_3);

    goto try_end_4;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_4:;
    goto branch_end_3;
    branch_no_3:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 168;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_0ccde8493c20ca10d261180f82dc9a9d->m_frame) frame_0ccde8493c20ca10d261180f82dc9a9d->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_4;
    branch_end_3:;
    goto try_end_7;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 4.
    SET_CURRENT_EXCEPTION(exception_preserved_type_4, exception_preserved_value_4, exception_preserved_tb_4);

    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
    // Restore previous exception id 4.
    SET_CURRENT_EXCEPTION(exception_preserved_type_4, exception_preserved_value_4, exception_preserved_tb_4);

    goto try_end_3;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_3:;
    {
        PyObject *tmp_assign_source_101;
        tmp_assign_source_101 = GET_STRING_DICT_VALUE(moduledict_gevent$testing, (Nuitka_StringObject *)mod_consts[201]);

        if (unlikely(tmp_assign_source_101 == NULL)) {
            tmp_assign_source_101 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[201]);
        }

        if (tmp_assign_source_101 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_gevent$testing, (Nuitka_StringObject *)mod_consts[201], tmp_assign_source_101);
    }
    {
        PyObject *tmp_assign_source_102;
        PyObject *tmp_import_name_from_79;
        PyObject *tmp_name_name_83;
        PyObject *tmp_globals_arg_name_83;
        PyObject *tmp_locals_arg_name_83;
        PyObject *tmp_fromlist_name_83;
        PyObject *tmp_level_name_83;
        tmp_name_name_83 = mod_consts[216];
        tmp_globals_arg_name_83 = (PyObject *)moduledict_gevent$testing;
        tmp_locals_arg_name_83 = Py_None;
        tmp_fromlist_name_83 = mod_consts[217];
        tmp_level_name_83 = mod_consts[1];
        frame_0ccde8493c20ca10d261180f82dc9a9d->m_frame.f_lineno = 185;
        tmp_import_name_from_79 = IMPORT_MODULE5(tmp_name_name_83, tmp_globals_arg_name_83, tmp_locals_arg_name_83, tmp_fromlist_name_83, tmp_level_name_83);
        if (tmp_import_name_from_79 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_79)) {
            tmp_assign_source_102 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_79,
                (PyObject *)moduledict_gevent$testing,
                mod_consts[218],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_102 = IMPORT_NAME(tmp_import_name_from_79, mod_consts[218]);
        }

        Py_DECREF(tmp_import_name_from_79);
        if (tmp_assign_source_102 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gevent$testing, (Nuitka_StringObject *)mod_consts[218], tmp_assign_source_102);
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_0ccde8493c20ca10d261180f82dc9a9d);
#endif
    popFrameStack();

    assertFrameObject(frame_0ccde8493c20ca10d261180f82dc9a9d);

    goto frame_no_exception_2;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_0ccde8493c20ca10d261180f82dc9a9d);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0ccde8493c20ca10d261180f82dc9a9d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0ccde8493c20ca10d261180f82dc9a9d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0ccde8493c20ca10d261180f82dc9a9d, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_2:;

    return module_gevent$testing;
    module_exception_exit:
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
