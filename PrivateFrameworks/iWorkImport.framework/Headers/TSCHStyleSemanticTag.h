/* Runtime dump - TSCHStyleSemanticTag
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHStyleSemanticTag : NSObject <NSCopying>
{
    int mType;
    unsigned int mIndex;
}

@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) unsigned int index;
@property (readonly, nonatomic) char isSeries;
@property (readonly, nonatomic) char isReferenceLine;

+ (NSObject *)styleSemanticTagWithType:(int)arg0 index:(unsigned int)arg1;

- (TSCHStyleSemanticTag *)initWithType:(int)arg0 index:(unsigned int)arg1;
- (char)isSeries;
- (char)isReferenceLine;
- (Class)styleClass;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (int)type;
- (TSCHStyleSemanticTag *)copyWithZone:(struct _NSZone *)arg0;
- (unsigned int)index;

@end
