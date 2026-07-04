/* Runtime dump - TSDMagicMoveMatchObject
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDMagicMoveMatchObject : NSObject
{
    TSDRep * _rep;
    int _zOrder;
    NSMutableDictionary * _attributes;
    NSString * _stringValue;
    NSString * _name;
    struct CGPoint _position;
    struct _NSRange _stringRange;
}

@property (retain, nonatomic) TSDRep * rep;
@property (nonatomic) struct CGPoint position;
@property (nonatomic) int zOrder;
@property (retain, nonatomic) NSMutableDictionary * attributes;
@property (retain, nonatomic) NSString * stringValue;
@property (nonatomic) struct _NSRange stringRange;
@property (retain, nonatomic) NSString * name;

+ (NSObject *)matchObjectWithTextRep:(NSObject *)arg0 position:(struct CGPoint)arg1 stringValue:(NSString *)arg2 stringRange:(struct _NSRange)arg3;
+ (NSObject *)matchObjectWithRep:(TSDRep *)arg0 position:(struct CGPoint)arg1;

- (void)setRep:(TSDRep *)arg0;
- (TSDRep *)rep;
- (TSDMagicMoveMatchObject *)initWithRep:(TSDRep *)arg0 position:(struct CGPoint)arg1 stringValue:(NSString *)arg2 stringRange:(struct _NSRange)arg3;
- (char)conflictsWithMatchObject:(NSObject *)arg0;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (TSDMagicMoveMatchObject *)copyWithZone:(struct _NSZone *)arg0;
- (void)setPosition:(struct CGPoint)arg0;
- (struct CGPoint)position;
- (NSString *)stringValue;
- (void)setStringValue:(NSString *)arg0;
- (NSMutableDictionary *)attributes;
- (void)setAttributes:(NSMutableDictionary *)arg0;
- (int)zOrder;
- (void)setZOrder:(int)arg0;
- (struct _NSRange)stringRange;
- (void)setStringRange:(struct _NSRange)arg0;

@end
