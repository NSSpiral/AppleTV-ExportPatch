/* Runtime dump - IKFormatting
 * Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKFormatting : NSObject
{
    NSMutableDictionary * _dateFormatters;
    NSMutableDictionary * _numberFormatters;
    NSNumberFormatter * _durationFormatter;
    NSNumberFormatter * _durationPaddedFormatter;
}

+ (IKFormatting *)sharedInstance;
+ (NSObject *)isoDateFormatter;
+ (NSObject *)rfc1123DateFormatter;

- (IKFormatting *)init;
- (void).cxx_destruct;
- (NSDate *)formatDate:(NSDate *)arg0 format:(NSString *)arg1;
- (NSNumber *)formatDuration:(id)arg0;
- (NSNumber *)formatNumber:(NSNumber *)arg0 style:(NSObject *)arg1 postiveFormat:(NSString *)arg2 negativeFormat:(NSString *)arg3;

@end
