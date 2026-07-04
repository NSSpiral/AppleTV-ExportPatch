/* Runtime dump - TSWPRuleOffset
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPRuleOffset : NSObject <NSCopying>
{
    float _dX;
    float _dY;
}

@property (readonly, nonatomic) float dX;
@property (readonly, nonatomic) float dY;

+ (TSWPRuleOffset *)ruleOffset;

- (void)saveToArchive:(struct Point *)arg0 archiver:(NSObject *)arg1;
- (TSWPRuleOffset *)initWithArchive:(struct Point *)arg0 unarchiver:(struct Point)arg1;
- (TSWPRuleOffset *)initWithDX:(float)arg0 dY:(float)arg1;
- (float)dX;
- (float)dY;
- (TSWPRuleOffset *)init;
- (char)isEqual:(NSObject *)arg0;
- (NSString *)description;
- (TSWPRuleOffset *)copyWithZone:(struct _NSZone *)arg0;
- (struct CGSize)sizeValue;
- (struct CGPoint)pointValue;

@end
