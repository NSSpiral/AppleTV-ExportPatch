/* Runtime dump - TSPDescriptionComponentReader
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPDescriptionComponentReader : TSPComponentReader
{
    TSPDescriptionGenerator * _descriptionGenerator;
}

- (TSPDescriptionComponentReader *)initWithComponent:(_UIDatePickerComponent *)arg0 readChannel:(NSObject *)arg1 descriptionGenerator:(TSPDescriptionGenerator *)arg2;
- (char)shouldProceedParsingOnFailure;
- (NSString *)newUnarchiverWithObjectIdentifier:(long long)arg0 messageInfo:(struct MessageInfo *)arg1 message:(struct MessageInfo)arg2 messageVersion:(unsigned long long)arg3 strongReferences:(long long)arg4 unknownMessages:(unsigned int)arg5 error:(NSError *)arg6;
- (NSDictionary *)unknownObjectUnarchiverArchiveInfo:(struct ArchiveInfo *)arg0 stream:(struct ArchiveInfo)arg1;
- (TSPDescriptionComponentReader *)init;
- (void).cxx_destruct;
- (void)read;

@end
