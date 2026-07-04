/* Runtime dump - TSPComponentReader
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPComponentReader : TSPReader <TSPComponentParserDelegate>
{
    <TSUStreamReadChannel> * _readChannel;
    TSPObjectContext * _context;
    struct ? _flags;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (TSPComponentReader *)initWithComponent:(_UIDatePickerComponent *)arg0 finalizeHandlerQueue:(TSPFinalizeHandlerQueue *)arg1 delegate:(NSObject *)arg2 readChannel:(<TSUStreamReadChannel> *)arg3;
- (char)shouldProceedParsingOnFailure;
- (NSString *)newUnarchiverWithObjectIdentifier:(long long)arg0 messageInfo:(struct MessageInfo *)arg1 message:(struct MessageInfo)arg2 messageVersion:(unsigned long long)arg3 strongReferences:(long long)arg4 unknownMessages:(unsigned int)arg5 error:(NSError *)arg6;
- (NSDictionary *)unknownObjectUnarchiverArchiveInfo:(struct ArchiveInfo *)arg0 stream:(struct ArchiveInfo)arg1;
- (NSDictionary *)newUnarchiverWithArchiveInfo:(struct ArchiveInfo *)arg0 stream:(struct ArchiveInfo)arg1 isUnknownObject:(NSObject *)arg2;
- (struct MessageInfo *)unknownObjectMessageInfo;
- (NSDictionary *)unknownMessageFromMessageInfo:(struct MessageInfo *)arg0 stream:(struct MessageInfo)arg1;
- (char)componentParser:(NSObject *)arg0 didReadArchiveInfo:(struct ArchiveInfo *)arg1 stream:(struct ArchiveInfo)arg2 error:(NSError *)arg3;
- (TSPComponentReader *)initWithComponent:(_UIDatePickerComponent *)arg0 delegate:(NSObject *)arg1;
- (void)beginReadingWithCompletionQueue:(NSObject<OS_dispatch_queue> *)arg0 completion:(id /* block */)arg1;
- (void)didUnarchiveObject:(NSObject *)arg0 withUnarchiver:(NSUnarchiver *)arg1;
- (void)dealloc;
- (TSPComponentReader *)init;
- (void).cxx_construct;
- (void).cxx_destruct;

@end
