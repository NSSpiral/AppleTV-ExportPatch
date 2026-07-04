/* Runtime dump - EDPatternFill
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDPatternFill : EDFill
{
    int mType;
    EDColorReference * mBackColorReference;
    EDColorReference * mForeColorReference;
}

+ (NSObject *)patternFillWithType:(int)arg0 resources:(NSArray *)arg1;
+ (NSObject *)patternFillWithType:(int)arg0 foreColor:(float *)arg1 resources:(NSArray *)arg2;
+ (NSObject *)patternFillWithType:(int)arg0 foreColor:(float *)arg1 backColor:(float *)arg2 resources:(NSArray *)arg3;
+ (NSObject *)patternFillWithType:(int)arg0 foreColorReference:(NSObject *)arg1 backColorReference:(NSObject *)arg2 resources:(NSArray *)arg3;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (void)setType:(int)arg0;
- (int)type;
- (EDPatternFill *)copyWithZone:(struct _NSZone *)arg0;
- (BOOL)isEmpty;
- (float *)foreColor;
- (float *)backColor;
- (EDPatternFill *)initWithResources:(NSArray *)arg0;
- (void)setForeColorReference:(NSObject *)arg0;
- (void)setBackColorReference:(NSObject *)arg0;
- (NSObject *)foreColorReference;
- (NSObject *)backColorReference;
- (void)setForeColor:(float *)arg0;
- (void)setBackColor:(float *)arg0;
- (char)isEqualToPatternFill:(id)arg0;
- (EDPatternFill *)initWithType:(int)arg0 foreColor:(float *)arg1 backColor:(float *)arg2 resources:(NSArray *)arg3;
- (EDPatternFill *)initWithType:(int)arg0 foreColorReference:(NSObject *)arg1 backColorReference:(NSObject *)arg2 resources:(NSArray *)arg3;

@end
