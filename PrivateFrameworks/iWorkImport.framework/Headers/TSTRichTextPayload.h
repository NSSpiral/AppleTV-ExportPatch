/* Runtime dump - TSTRichTextPayload
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTRichTextPayload : TSPObject <TSPCopying>
{
    TSWPStorage * mStorage;
}

@property (retain, nonatomic) TSWPStorage * storage;

+ (TSTRichTextPayload *)payloadWithStorage:(TSWPStorage *)arg0;

- (TSTRichTextPayload *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (void)setStorage:(TSWPStorage *)arg0;
- (NSString *)copyWithContext:(NSObject *)arg0;
- (TSTRichTextPayload *)initWithStorage:(TSWPStorage *)arg0;
- (char)requiresRichText;
- (TSTRichTextPayload *)initWithContext:(NSObject *)arg0 storage:(TSWPStorage *)arg1;
- (void)dealloc;
- (NSString *)string;
- (TSWPStorage *)storage;

@end
