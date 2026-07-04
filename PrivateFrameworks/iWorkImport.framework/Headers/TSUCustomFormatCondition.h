/* Runtime dump - TSUCustomFormatCondition
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUCustomFormatCondition : NSObject <NSCopying>
{
    int mConditionType;
    double mConditionValue;
    TSUCustomFormatData * mData;
}

@property (readonly, nonatomic) int conditionType;
@property (readonly, nonatomic) double conditionValue;
@property (readonly, nonatomic) TSUCustomFormatData * data;

- (int)conditionType;
- (double)conditionValue;
- (TSUCustomFormatCondition *)initWithType:(int)arg0 value:(double)arg1 data:(TSUCustomFormatData *)arg2;
- (void)dealloc;
- (TSUCustomFormatCondition *)init;
- (char)isEqual:(NSObject *)arg0;
- (TSUCustomFormatCondition *)copyWithZone:(struct _NSZone *)arg0;
- (TSUCustomFormatData *)data;

@end
