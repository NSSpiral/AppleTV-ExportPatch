/* Runtime dump - TSCHSemanticTagAndPropertyPair
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHSemanticTagAndPropertyPair : NSObject <NSCopying>
{
    TSCHStyleSemanticTag * mSemanticTag;
    int mProperty;
}

+ (NSString *)pairWithSemanticTag:(TSCHStyleSemanticTag *)arg0 property:(int)arg1;

- (TSCHStyleSemanticTag *)semanticTag;
- (TSCHSemanticTagAndPropertyPair *)initWithSemanticTag:(TSCHStyleSemanticTag *)arg0 property:(int)arg1;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (TSCHSemanticTagAndPropertyPair *)copyWithZone:(struct _NSZone *)arg0;
- (int)property;

@end
