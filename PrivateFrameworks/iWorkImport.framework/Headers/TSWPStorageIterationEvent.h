/* Runtime dump - TSWPStorageIterationEvent
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPStorageIterationEvent : NSObject
{
    NSString * _providerIdentifier;
    int _type;
    NSObject * _object;
    TSWPStorage * _storage;
    struct _NSRange _range;
}

@property (readonly, nonatomic) struct _NSRange range;
@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) NSString * identifier;
@property (readonly, nonatomic) NSObject * object;
@property (nonatomic) TSWPStorage * storage;

+ (NSObject *)eventWithType:(int)arg0 providerIdentifier:(NSString *)arg1 range:(struct _NSRange)arg2 object:(NSObject *)arg3;
+ (NSObject *)characterEventWithRange:(struct _NSRange)arg0;

- (void)setStorage:(TSWPStorage *)arg0;
- (TSWPStorageIterationEvent *)initWithType:(int)arg0 providerIdentifier:(NSString *)arg1 range:(struct _NSRange)arg2 object:(NSObject *)arg3;
- (TSWPStorageIterationEvent *)initWithCharacterRange:(struct _NSRange)arg0;
- (char)isRangeEnd;
- (void)dealloc;
- (NSString *)description;
- (NSString *)identifier;
- (int)type;
- (NSObject *)object;
- (struct _NSRange)range;
- (void).cxx_construct;
- (TSWPStorage *)storage;

@end
