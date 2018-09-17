/*
 * Copyright (C) 2018 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_ACTIONSMODEL_LIBTEXTCLASSIFIER3_H_
#define FLATBUFFERS_GENERATED_ACTIONSMODEL_LIBTEXTCLASSIFIER3_H_

#include "flatbuffers/flatbuffers.h"

namespace libtextclassifier3 {

struct ActionsSuggestionsModel;
struct ActionsSuggestionsModelT;

struct SmartReplyModel;
struct SmartReplyModelT;

struct ActionsModel;
struct ActionsModelT;

struct ActionsSuggestionsModelT : public flatbuffers::NativeTable {
  typedef ActionsSuggestionsModel TableType;
  std::vector<uint8_t> tflite_model;
  std::vector<std::string> classes;
  float min_confidence;
  ActionsSuggestionsModelT()
      : min_confidence(0.0f) {
  }
};

struct ActionsSuggestionsModel FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef ActionsSuggestionsModelT NativeTableType;
  enum {
    VT_TFLITE_MODEL = 4,
    VT_CLASSES = 6,
    VT_MIN_CONFIDENCE = 8
  };
  const flatbuffers::Vector<uint8_t> *tflite_model() const {
    return GetPointer<const flatbuffers::Vector<uint8_t> *>(VT_TFLITE_MODEL);
  }
  const flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>> *classes() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>> *>(VT_CLASSES);
  }
  float min_confidence() const {
    return GetField<float>(VT_MIN_CONFIDENCE, 0.0f);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_TFLITE_MODEL) &&
           verifier.Verify(tflite_model()) &&
           VerifyOffset(verifier, VT_CLASSES) &&
           verifier.Verify(classes()) &&
           verifier.VerifyVectorOfStrings(classes()) &&
           VerifyField<float>(verifier, VT_MIN_CONFIDENCE) &&
           verifier.EndTable();
  }
  ActionsSuggestionsModelT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  void UnPackTo(ActionsSuggestionsModelT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  static flatbuffers::Offset<ActionsSuggestionsModel> Pack(flatbuffers::FlatBufferBuilder &_fbb, const ActionsSuggestionsModelT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);
};

struct ActionsSuggestionsModelBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_tflite_model(flatbuffers::Offset<flatbuffers::Vector<uint8_t>> tflite_model) {
    fbb_.AddOffset(ActionsSuggestionsModel::VT_TFLITE_MODEL, tflite_model);
  }
  void add_classes(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>>> classes) {
    fbb_.AddOffset(ActionsSuggestionsModel::VT_CLASSES, classes);
  }
  void add_min_confidence(float min_confidence) {
    fbb_.AddElement<float>(ActionsSuggestionsModel::VT_MIN_CONFIDENCE, min_confidence, 0.0f);
  }
  explicit ActionsSuggestionsModelBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ActionsSuggestionsModelBuilder &operator=(const ActionsSuggestionsModelBuilder &);
  flatbuffers::Offset<ActionsSuggestionsModel> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<ActionsSuggestionsModel>(end);
    return o;
  }
};

inline flatbuffers::Offset<ActionsSuggestionsModel> CreateActionsSuggestionsModel(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::Vector<uint8_t>> tflite_model = 0,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>>> classes = 0,
    float min_confidence = 0.0f) {
  ActionsSuggestionsModelBuilder builder_(_fbb);
  builder_.add_min_confidence(min_confidence);
  builder_.add_classes(classes);
  builder_.add_tflite_model(tflite_model);
  return builder_.Finish();
}

inline flatbuffers::Offset<ActionsSuggestionsModel> CreateActionsSuggestionsModelDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const std::vector<uint8_t> *tflite_model = nullptr,
    const std::vector<flatbuffers::Offset<flatbuffers::String>> *classes = nullptr,
    float min_confidence = 0.0f) {
  return libtextclassifier3::CreateActionsSuggestionsModel(
      _fbb,
      tflite_model ? _fbb.CreateVector<uint8_t>(*tflite_model) : 0,
      classes ? _fbb.CreateVector<flatbuffers::Offset<flatbuffers::String>>(*classes) : 0,
      min_confidence);
}

flatbuffers::Offset<ActionsSuggestionsModel> CreateActionsSuggestionsModel(flatbuffers::FlatBufferBuilder &_fbb, const ActionsSuggestionsModelT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

struct SmartReplyModelT : public flatbuffers::NativeTable {
  typedef SmartReplyModel TableType;
  std::vector<uint8_t> tflite_model;
  std::string action_type;
  float min_confidence;
  SmartReplyModelT()
      : min_confidence(0.0f) {
  }
};

struct SmartReplyModel FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef SmartReplyModelT NativeTableType;
  enum {
    VT_TFLITE_MODEL = 4,
    VT_ACTION_TYPE = 6,
    VT_MIN_CONFIDENCE = 8
  };
  const flatbuffers::Vector<uint8_t> *tflite_model() const {
    return GetPointer<const flatbuffers::Vector<uint8_t> *>(VT_TFLITE_MODEL);
  }
  const flatbuffers::String *action_type() const {
    return GetPointer<const flatbuffers::String *>(VT_ACTION_TYPE);
  }
  float min_confidence() const {
    return GetField<float>(VT_MIN_CONFIDENCE, 0.0f);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_TFLITE_MODEL) &&
           verifier.Verify(tflite_model()) &&
           VerifyOffset(verifier, VT_ACTION_TYPE) &&
           verifier.Verify(action_type()) &&
           VerifyField<float>(verifier, VT_MIN_CONFIDENCE) &&
           verifier.EndTable();
  }
  SmartReplyModelT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  void UnPackTo(SmartReplyModelT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  static flatbuffers::Offset<SmartReplyModel> Pack(flatbuffers::FlatBufferBuilder &_fbb, const SmartReplyModelT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);
};

struct SmartReplyModelBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_tflite_model(flatbuffers::Offset<flatbuffers::Vector<uint8_t>> tflite_model) {
    fbb_.AddOffset(SmartReplyModel::VT_TFLITE_MODEL, tflite_model);
  }
  void add_action_type(flatbuffers::Offset<flatbuffers::String> action_type) {
    fbb_.AddOffset(SmartReplyModel::VT_ACTION_TYPE, action_type);
  }
  void add_min_confidence(float min_confidence) {
    fbb_.AddElement<float>(SmartReplyModel::VT_MIN_CONFIDENCE, min_confidence, 0.0f);
  }
  explicit SmartReplyModelBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  SmartReplyModelBuilder &operator=(const SmartReplyModelBuilder &);
  flatbuffers::Offset<SmartReplyModel> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<SmartReplyModel>(end);
    return o;
  }
};

inline flatbuffers::Offset<SmartReplyModel> CreateSmartReplyModel(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::Vector<uint8_t>> tflite_model = 0,
    flatbuffers::Offset<flatbuffers::String> action_type = 0,
    float min_confidence = 0.0f) {
  SmartReplyModelBuilder builder_(_fbb);
  builder_.add_min_confidence(min_confidence);
  builder_.add_action_type(action_type);
  builder_.add_tflite_model(tflite_model);
  return builder_.Finish();
}

inline flatbuffers::Offset<SmartReplyModel> CreateSmartReplyModelDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const std::vector<uint8_t> *tflite_model = nullptr,
    const char *action_type = nullptr,
    float min_confidence = 0.0f) {
  return libtextclassifier3::CreateSmartReplyModel(
      _fbb,
      tflite_model ? _fbb.CreateVector<uint8_t>(*tflite_model) : 0,
      action_type ? _fbb.CreateString(action_type) : 0,
      min_confidence);
}

flatbuffers::Offset<SmartReplyModel> CreateSmartReplyModel(flatbuffers::FlatBufferBuilder &_fbb, const SmartReplyModelT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

struct ActionsModelT : public flatbuffers::NativeTable {
  typedef ActionsModel TableType;
  std::string locales;
  int32_t version;
  std::string name;
  std::unique_ptr<SmartReplyModelT> smart_reply_model;
  std::unique_ptr<ActionsSuggestionsModelT> actions_suggestions_model;
  ActionsModelT()
      : version(0) {
  }
};

struct ActionsModel FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef ActionsModelT NativeTableType;
  enum {
    VT_LOCALES = 4,
    VT_VERSION = 6,
    VT_NAME = 8,
    VT_SMART_REPLY_MODEL = 10,
    VT_ACTIONS_SUGGESTIONS_MODEL = 12
  };
  const flatbuffers::String *locales() const {
    return GetPointer<const flatbuffers::String *>(VT_LOCALES);
  }
  int32_t version() const {
    return GetField<int32_t>(VT_VERSION, 0);
  }
  const flatbuffers::String *name() const {
    return GetPointer<const flatbuffers::String *>(VT_NAME);
  }
  const SmartReplyModel *smart_reply_model() const {
    return GetPointer<const SmartReplyModel *>(VT_SMART_REPLY_MODEL);
  }
  const ActionsSuggestionsModel *actions_suggestions_model() const {
    return GetPointer<const ActionsSuggestionsModel *>(VT_ACTIONS_SUGGESTIONS_MODEL);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_LOCALES) &&
           verifier.Verify(locales()) &&
           VerifyField<int32_t>(verifier, VT_VERSION) &&
           VerifyOffset(verifier, VT_NAME) &&
           verifier.Verify(name()) &&
           VerifyOffset(verifier, VT_SMART_REPLY_MODEL) &&
           verifier.VerifyTable(smart_reply_model()) &&
           VerifyOffset(verifier, VT_ACTIONS_SUGGESTIONS_MODEL) &&
           verifier.VerifyTable(actions_suggestions_model()) &&
           verifier.EndTable();
  }
  ActionsModelT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  void UnPackTo(ActionsModelT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  static flatbuffers::Offset<ActionsModel> Pack(flatbuffers::FlatBufferBuilder &_fbb, const ActionsModelT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);
};

struct ActionsModelBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_locales(flatbuffers::Offset<flatbuffers::String> locales) {
    fbb_.AddOffset(ActionsModel::VT_LOCALES, locales);
  }
  void add_version(int32_t version) {
    fbb_.AddElement<int32_t>(ActionsModel::VT_VERSION, version, 0);
  }
  void add_name(flatbuffers::Offset<flatbuffers::String> name) {
    fbb_.AddOffset(ActionsModel::VT_NAME, name);
  }
  void add_smart_reply_model(flatbuffers::Offset<SmartReplyModel> smart_reply_model) {
    fbb_.AddOffset(ActionsModel::VT_SMART_REPLY_MODEL, smart_reply_model);
  }
  void add_actions_suggestions_model(flatbuffers::Offset<ActionsSuggestionsModel> actions_suggestions_model) {
    fbb_.AddOffset(ActionsModel::VT_ACTIONS_SUGGESTIONS_MODEL, actions_suggestions_model);
  }
  explicit ActionsModelBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ActionsModelBuilder &operator=(const ActionsModelBuilder &);
  flatbuffers::Offset<ActionsModel> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<ActionsModel>(end);
    return o;
  }
};

inline flatbuffers::Offset<ActionsModel> CreateActionsModel(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::String> locales = 0,
    int32_t version = 0,
    flatbuffers::Offset<flatbuffers::String> name = 0,
    flatbuffers::Offset<SmartReplyModel> smart_reply_model = 0,
    flatbuffers::Offset<ActionsSuggestionsModel> actions_suggestions_model = 0) {
  ActionsModelBuilder builder_(_fbb);
  builder_.add_actions_suggestions_model(actions_suggestions_model);
  builder_.add_smart_reply_model(smart_reply_model);
  builder_.add_name(name);
  builder_.add_version(version);
  builder_.add_locales(locales);
  return builder_.Finish();
}

inline flatbuffers::Offset<ActionsModel> CreateActionsModelDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const char *locales = nullptr,
    int32_t version = 0,
    const char *name = nullptr,
    flatbuffers::Offset<SmartReplyModel> smart_reply_model = 0,
    flatbuffers::Offset<ActionsSuggestionsModel> actions_suggestions_model = 0) {
  return libtextclassifier3::CreateActionsModel(
      _fbb,
      locales ? _fbb.CreateString(locales) : 0,
      version,
      name ? _fbb.CreateString(name) : 0,
      smart_reply_model,
      actions_suggestions_model);
}

flatbuffers::Offset<ActionsModel> CreateActionsModel(flatbuffers::FlatBufferBuilder &_fbb, const ActionsModelT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

inline ActionsSuggestionsModelT *ActionsSuggestionsModel::UnPack(const flatbuffers::resolver_function_t *_resolver) const {
  auto _o = new ActionsSuggestionsModelT();
  UnPackTo(_o, _resolver);
  return _o;
}

inline void ActionsSuggestionsModel::UnPackTo(ActionsSuggestionsModelT *_o, const flatbuffers::resolver_function_t *_resolver) const {
  (void)_o;
  (void)_resolver;
  { auto _e = tflite_model(); if (_e) { _o->tflite_model.resize(_e->size()); for (flatbuffers::uoffset_t _i = 0; _i < _e->size(); _i++) { _o->tflite_model[_i] = _e->Get(_i); } } };
  { auto _e = classes(); if (_e) { _o->classes.resize(_e->size()); for (flatbuffers::uoffset_t _i = 0; _i < _e->size(); _i++) { _o->classes[_i] = _e->Get(_i)->str(); } } };
  { auto _e = min_confidence(); _o->min_confidence = _e; };
}

inline flatbuffers::Offset<ActionsSuggestionsModel> ActionsSuggestionsModel::Pack(flatbuffers::FlatBufferBuilder &_fbb, const ActionsSuggestionsModelT* _o, const flatbuffers::rehasher_function_t *_rehasher) {
  return CreateActionsSuggestionsModel(_fbb, _o, _rehasher);
}

inline flatbuffers::Offset<ActionsSuggestionsModel> CreateActionsSuggestionsModel(flatbuffers::FlatBufferBuilder &_fbb, const ActionsSuggestionsModelT *_o, const flatbuffers::rehasher_function_t *_rehasher) {
  (void)_rehasher;
  (void)_o;
  struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const ActionsSuggestionsModelT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;
  auto _tflite_model = _o->tflite_model.size() ? _fbb.CreateVector(_o->tflite_model) : 0;
  auto _classes = _o->classes.size() ? _fbb.CreateVectorOfStrings(_o->classes) : 0;
  auto _min_confidence = _o->min_confidence;
  return libtextclassifier3::CreateActionsSuggestionsModel(
      _fbb,
      _tflite_model,
      _classes,
      _min_confidence);
}

inline SmartReplyModelT *SmartReplyModel::UnPack(const flatbuffers::resolver_function_t *_resolver) const {
  auto _o = new SmartReplyModelT();
  UnPackTo(_o, _resolver);
  return _o;
}

inline void SmartReplyModel::UnPackTo(SmartReplyModelT *_o, const flatbuffers::resolver_function_t *_resolver) const {
  (void)_o;
  (void)_resolver;
  { auto _e = tflite_model(); if (_e) { _o->tflite_model.resize(_e->size()); for (flatbuffers::uoffset_t _i = 0; _i < _e->size(); _i++) { _o->tflite_model[_i] = _e->Get(_i); } } };
  { auto _e = action_type(); if (_e) _o->action_type = _e->str(); };
  { auto _e = min_confidence(); _o->min_confidence = _e; };
}

inline flatbuffers::Offset<SmartReplyModel> SmartReplyModel::Pack(flatbuffers::FlatBufferBuilder &_fbb, const SmartReplyModelT* _o, const flatbuffers::rehasher_function_t *_rehasher) {
  return CreateSmartReplyModel(_fbb, _o, _rehasher);
}

inline flatbuffers::Offset<SmartReplyModel> CreateSmartReplyModel(flatbuffers::FlatBufferBuilder &_fbb, const SmartReplyModelT *_o, const flatbuffers::rehasher_function_t *_rehasher) {
  (void)_rehasher;
  (void)_o;
  struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const SmartReplyModelT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;
  auto _tflite_model = _o->tflite_model.size() ? _fbb.CreateVector(_o->tflite_model) : 0;
  auto _action_type = _o->action_type.empty() ? 0 : _fbb.CreateString(_o->action_type);
  auto _min_confidence = _o->min_confidence;
  return libtextclassifier3::CreateSmartReplyModel(
      _fbb,
      _tflite_model,
      _action_type,
      _min_confidence);
}

inline ActionsModelT *ActionsModel::UnPack(const flatbuffers::resolver_function_t *_resolver) const {
  auto _o = new ActionsModelT();
  UnPackTo(_o, _resolver);
  return _o;
}

inline void ActionsModel::UnPackTo(ActionsModelT *_o, const flatbuffers::resolver_function_t *_resolver) const {
  (void)_o;
  (void)_resolver;
  { auto _e = locales(); if (_e) _o->locales = _e->str(); };
  { auto _e = version(); _o->version = _e; };
  { auto _e = name(); if (_e) _o->name = _e->str(); };
  { auto _e = smart_reply_model(); if (_e) _o->smart_reply_model = std::unique_ptr<SmartReplyModelT>(_e->UnPack(_resolver)); };
  { auto _e = actions_suggestions_model(); if (_e) _o->actions_suggestions_model = std::unique_ptr<ActionsSuggestionsModelT>(_e->UnPack(_resolver)); };
}

inline flatbuffers::Offset<ActionsModel> ActionsModel::Pack(flatbuffers::FlatBufferBuilder &_fbb, const ActionsModelT* _o, const flatbuffers::rehasher_function_t *_rehasher) {
  return CreateActionsModel(_fbb, _o, _rehasher);
}

inline flatbuffers::Offset<ActionsModel> CreateActionsModel(flatbuffers::FlatBufferBuilder &_fbb, const ActionsModelT *_o, const flatbuffers::rehasher_function_t *_rehasher) {
  (void)_rehasher;
  (void)_o;
  struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const ActionsModelT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;
  auto _locales = _o->locales.empty() ? 0 : _fbb.CreateString(_o->locales);
  auto _version = _o->version;
  auto _name = _o->name.empty() ? 0 : _fbb.CreateString(_o->name);
  auto _smart_reply_model = _o->smart_reply_model ? CreateSmartReplyModel(_fbb, _o->smart_reply_model.get(), _rehasher) : 0;
  auto _actions_suggestions_model = _o->actions_suggestions_model ? CreateActionsSuggestionsModel(_fbb, _o->actions_suggestions_model.get(), _rehasher) : 0;
  return libtextclassifier3::CreateActionsModel(
      _fbb,
      _locales,
      _version,
      _name,
      _smart_reply_model,
      _actions_suggestions_model);
}

inline const libtextclassifier3::ActionsModel *GetActionsModel(const void *buf) {
  return flatbuffers::GetRoot<libtextclassifier3::ActionsModel>(buf);
}

inline const char *ActionsModelIdentifier() {
  return "TC3A";
}

inline bool ActionsModelBufferHasIdentifier(const void *buf) {
  return flatbuffers::BufferHasIdentifier(
      buf, ActionsModelIdentifier());
}

inline bool VerifyActionsModelBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<libtextclassifier3::ActionsModel>(ActionsModelIdentifier());
}

inline void FinishActionsModelBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<libtextclassifier3::ActionsModel> root) {
  fbb.Finish(root, ActionsModelIdentifier());
}

inline std::unique_ptr<ActionsModelT> UnPackActionsModel(
    const void *buf,
    const flatbuffers::resolver_function_t *res = nullptr) {
  return std::unique_ptr<ActionsModelT>(GetActionsModel(buf)->UnPack(res));
}

}  // namespace libtextclassifier3

#endif  // FLATBUFFERS_GENERATED_ACTIONSMODEL_LIBTEXTCLASSIFIER3_H_