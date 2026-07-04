/* Runtime dump - CAStateTransition
 * Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CAStateTransition : NSObject <NSCopying, NSCoding>
{
    NSString * _fromState;
    NSString * _toState;
    NSArray * _elements;
}

@property (copy, nonatomic) NSString * fromState;
@property (copy, nonatomic) NSString * toState;
@property (copy, nonatomic) NSArray * elements;

+ (void)CAMLParserStartElement:(NSObject *)arg0;

- (NSString *)fromState;
- (NSString *)toState;
- (void)CAMLParser:(NSObject *)arg0 setValue:(NSObject *)arg1 forKey:(NSString *)arg2;
- (void)encodeWithCAMLWriter:(NSObject *)arg0;
- (NSString *)CAMLTypeForKey:(NSString *)arg0;
- (void)setFromState:(NSString *)arg0;
- (void)setToState:(NSString *)arg0;
- (void)dealloc;
- (CAStateTransition *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (CAStateTransition *)init;
- (NSString *)debugDescription;
- (double)duration;
- (CAStateTransition *)copyWithZone:(struct _NSZone *)arg0;
- (NSArray *)elements;
- (void)setElements:(NSArray *)arg0;

@end
