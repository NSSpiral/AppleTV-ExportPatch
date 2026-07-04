/* Runtime dump - TSPUnknownField
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPUnknownField : NSObject
{
    struct shared_ptr<google::protobuf::UnknownFieldSet> _fieldSet;
    struct FieldInfo _fieldInfo;
}

+ (NSSet *)unknownFieldWithFieldSet:(struct shared_ptr<google::protobuf::UnknownFieldSet> *)arg0 fieldInfo:(struct __shared_weak_count *)arg1;

- (void)saveToArchiver:(NSObject *)arg0;
- (void)updateMessageInfo:(struct MessageInfo *)arg0;
- (void)loadFromUnarchiver:(id)arg0;
- (TSPUnknownField *)initWithFieldSet:(struct shared_ptr<google::protobuf::UnknownFieldSet> *)arg0 fieldInfo:(struct __shared_weak_count *)arg1;
- (struct FieldInfo *)fieldInfo;
- (void)mergeToUnknownFieldSet:(struct UnknownFieldSet *)arg0;
- (NSString *)debugDescription;
- (void).cxx_construct;
- (void).cxx_destruct;

@end
