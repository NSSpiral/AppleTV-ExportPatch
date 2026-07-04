/* Runtime dump - TSPComponentParser
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPComponentParser : NSObject
{
    <TSPComponentParserDelegate> * _delegate;
    unsigned int _state;
    unsigned int _archiveInfoLength;
    struct ArchiveInfo _archiveInfo;
    unsigned int _messagesLength;
}

- (void)readWithChannel:(NSObject *)arg0 completionQueue:(NSObject<OS_dispatch_queue> *)arg1 completion:(id /* block */)arg2;
- (char)readFromStream:(struct DispatchDataInputStream *)arg0 error:(id *)arg1;
- (unsigned int)readArchiveInfoLengthFromStream:(struct DispatchDataInputStream *)arg0 error:(id *)arg1;
- (unsigned int)readArchiveInfoFromStream:(struct DispatchDataInputStream *)arg0 error:(id *)arg1;
- (unsigned int)readArchiveFromStream:(struct DispatchDataInputStream *)arg0 error:(id *)arg1;
- (TSPComponentParser *)init;
- (void).cxx_construct;
- (void).cxx_destruct;
- (TSPComponentParser *)initWithDelegate:(<TSPComponentParserDelegate> *)arg0;

@end
