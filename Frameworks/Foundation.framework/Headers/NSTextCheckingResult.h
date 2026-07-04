/* Runtime dump - NSTextCheckingResult
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSTextCheckingResult : NSObject <NSCopying, NSCoding>

@property (readonly) unsigned long long resultType;
@property (readonly) struct _NSRange range;

+ (NSObject *)orthographyCheckingResultWithRange:(struct _NSRange)arg0 orthography:(NSString *)arg1;
+ (NSObject *)spellCheckingResultWithRange:(struct _NSRange)arg0;
+ (NSObject *)grammarCheckingResultWithRange:(struct _NSRange)arg0 details:(id *)arg1;
+ (NSObject *)dateCheckingResultWithRange:(struct _NSRange)arg0 date:(NSDate *)arg1;
+ (NSObject *)dateCheckingResultWithRange:(struct _NSRange)arg0 date:(NSDate *)arg1 timeZone:(NSTimeZone *)arg2 duration:(double)arg3;
+ (NSObject *)addressCheckingResultWithRange:(struct _NSRange)arg0 components:(NSArray *)arg1;
+ (NSObject *)linkCheckingResultWithRange:(struct _NSRange)arg0 URL:(NSString *)arg1;
+ (NSObject *)quoteCheckingResultWithRange:(struct _NSRange)arg0 replacementString:(NSString *)arg1;
+ (NSObject *)dashCheckingResultWithRange:(struct _NSRange)arg0 replacementString:(NSString *)arg1;
+ (NSObject *)replacementCheckingResultWithRange:(struct _NSRange)arg0 replacementString:(NSString *)arg1;
+ (NSObject *)correctionCheckingResultWithRange:(struct _NSRange)arg0 replacementString:(NSString *)arg1;
+ (NSObject *)correctionCheckingResultWithRange:(struct _NSRange)arg0 replacementString:(NSString *)arg1 alternativeStrings:(NSArray *)arg2;
+ (NSArray *)regularExpressionCheckingResultWithRanges:(struct _NSRange *)arg0 count:(unsigned int)arg1 regularExpression:(NSRegularExpression *)arg2;
+ (NSObject *)phoneNumberCheckingResultWithRange:(struct _NSRange)arg0 phoneNumber:(NSNumber *)arg1;
+ (NSObject *)transitInformationCheckingResultWithRange:(struct _NSRange)arg0 components:(NSArray *)arg1;
+ (void)initialize;

- (void)encodeRangeWithCoder:(NSCoder *)arg0;
- (struct _NSRange)decodeRangeWithCoder:(NSCoder *)arg0;
- (NSSet *)resultByAdjustingRangesWithOffset:(int)arg0;
- (char)_adjustRangesWithOffset:(int)arg0;
- (NSString *)orthography;
- (id)grammarDetails;
- (NSArray *)addressComponents;
- (NSString *)replacementString;
- (NSRegularExpression *)regularExpression;
- (void *)underlyingResult;
- (NSTextCheckingResult *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (double)duration;
- (NSDate *)date;
- (NSTextCheckingResult *)copyWithZone:(struct _NSZone *)arg0;
- (NSURL *)URL;
- (struct _NSRange)range;
- (NSNumber *)phoneNumber;
- (NSTimeZone *)timeZone;
- (NSArray *)alternativeStrings;
- (NSArray *)components;
- (unsigned int)numberOfRanges;
- (struct _NSRange)rangeAtIndex:(unsigned int)arg0;
- (unsigned long long)resultType;

@end
