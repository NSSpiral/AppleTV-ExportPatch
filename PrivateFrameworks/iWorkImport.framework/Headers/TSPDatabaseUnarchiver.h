/* Runtime dump - TSPDatabaseUnarchiver
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPDatabaseUnarchiver : TSPUnarchiver
{
    unsigned long long _databaseVersion;
}

@property (readonly, nonatomic) unsigned long long preUFFVersion;

- (char)canValidateReferences;
- (TSPDatabaseUnarchiver *)initWithMessageType:(unsigned int)arg0 message:(struct auto_ptr<google::protobuf::Message>)arg1 identifier:(NSString *)arg2 strongReferences:(long long)arg3 databaseVersion:(struct auto_ptr<__gnu_cxx::hash_map<const long long, bool, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, bool> > > >)arg4 objectDelegate:(<TSPObjectDelegate> *)arg5 lazyReferenceDelegate:(unsigned long long)arg6 delegate:(NSObject *)arg7 error:(NSError *)arg8;
- (struct set<long long, std::__1::less<long long>, std::__1::allocator<long long> > *)filterIdentifiers:(struct set<long long, std::__1::less<long long>, std::__1::allocator<long long> > *)arg0;
- (TSPDatabaseUnarchiver *)initWithMessageType:(unsigned int)arg0 message:(struct auto_ptr<google::protobuf::Message>)arg1 identifier:(NSString *)arg2 strongReferences:(long long)arg3 fieldInfos:(struct auto_ptr<__gnu_cxx::hash_map<const long long, bool, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, bool> > > >)arg4 version:(NSString *)arg5 unknownMessages:(struct auto_ptr<TSP::FieldInfoTree>)arg6 ignoreVersionChecking:(id)arg7 objectDelegate:(unsigned long long)arg8 lazyReferenceDelegate:(<TSPLazyReferenceDelegate> *)arg9 delegate:(char)arg10 error:(NSError *)arg11;
- (unsigned long long)preUFFVersion;

@end
