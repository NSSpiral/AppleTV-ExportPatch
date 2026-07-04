/* Runtime dump - NSProgressValues
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSProgressValues : NSObject <NSSecureCoding>
{
    NSMutableDictionary * _userInfo;
    _NSProgressFraction * _selfFraction;
    _NSProgressFraction * _childFraction;
    NSString * _localizedDescription;
    NSString * _localizedAdditionalDescription;
    char _isCancellable;
    char _isPausable;
    char _isCancelled;
    char _isPaused;
    NSString * _kind;
    char _isPrioritizable;
}

+ (NSArray *)decodableClasses;
+ (NSArray *)_derivedKeys;
+ (char)supportsSecureCoding;

- (NSString *)_indentedDescription:(unsigned int)arg0;
- (NSObject *)overallFraction;
- (void)setFractionCompleted:(double)arg0;
- (void)dealloc;
- (NSProgressValues *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSProgressValues *)init;
- (NSString *)description;
- (NSProgressValues *)copyWithZone:(struct _NSZone *)arg0;
- (char)isIndeterminate;
- (void)setIndeterminate:(char)arg0;
- (double)fractionCompleted;
- (long long)totalUnitCount;
- (long long)completedUnitCount;
- (char)isFinished;
- (void)setFinished:(char)arg0;
- (void)setTotalUnitCount:(long long)arg0;
- (void)setCompletedUnitCount:(long long)arg0;

@end
