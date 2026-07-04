/* Runtime dump - CDAttributeOccurrence
 * Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface CDAttributeOccurrence : NSObject
{
    NSDate * _date;
    NSObject * _value;
}

@property (readonly) NSDate * date;
@property (readonly) NSObject * value;

+ (CDAttributeOccurrence *)attributeOccurrenceWithValue:(NSObject *)arg0 date:(NSDate *)arg1;

- (NSDate *)date;
- (NSObject *)value;
- (void).cxx_destruct;
- (CDAttributeOccurrence *)initWithValue:(NSObject *)arg0 date:(NSDate *)arg1;

@end
