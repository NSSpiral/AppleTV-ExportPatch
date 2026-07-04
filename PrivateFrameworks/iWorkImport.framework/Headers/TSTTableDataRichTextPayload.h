/* Runtime dump - TSTTableDataRichTextPayload
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTTableDataRichTextPayload : TSTTableDataObject
{
    TSTRichTextPayload * mPayload;
}

- (TSTTableDataRichTextPayload *)initObjectWithRichTextPayload:(NSData *)arg0;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;

@end
