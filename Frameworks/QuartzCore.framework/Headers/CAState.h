/* Runtime dump - CAState
 * Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CAState : NSObject <NSCoding, NSCopying>
{
    NSString * _name;
    NSString * _basedOn;
    NSMutableArray * _elements;
    double _nextDelay;
    double _previousDelay;
    char _enabled;
    char _locked;
    char _initial;
}

@property (copy, nonatomic) NSString * name;
@property (copy) NSString * basedOn;
@property char enabled;
@property (copy, nonatomic) NSArray * elements;
@property double nextDelay;
@property double previousDelay;
@property (nonatomic) char locked;
@property char initial;

+ (void)CAMLParserStartElement:(NSObject *)arg0;

- (NSString *)basedOn;
- (void)removeElement:(NSObject *)arg0;
- (void)CAMLParser:(NSObject *)arg0 setValue:(NSObject *)arg1 forKey:(NSString *)arg2;
- (void)encodeWithCAMLWriter:(NSObject *)arg0;
- (NSString *)CAMLTypeForKey:(NSString *)arg0;
- (void)setBasedOn:(NSString *)arg0;
- (double)nextDelay;
- (void)setNextDelay:(double)arg0;
- (double)previousDelay;
- (void)setPreviousDelay:(double)arg0;
- (char)isInitial;
- (void)setInitial:(char)arg0;
- (void)dealloc;
- (CAState *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (CAState *)init;
- (NSString *)debugDescription;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (char)isLocked;
- (void)setEnabled:(char)arg0;
- (char)isEnabled;
- (CAState *)copyWithZone:(struct _NSZone *)arg0;
- (void)setLocked:(char)arg0;
- (NSArray *)elements;
- (void)setElements:(NSArray *)arg0;
- (void)foreachLayer:(id)arg0;
- (void)addElement:(NSObject *)arg0;

@end
