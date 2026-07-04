/* Runtime dump - BSDescriptionBuilder
 * Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface BSDescriptionBuilder : NSObject
{
    NSObject * _object;
    NSMutableString * _description;
}

+ (NSObject *)descriptionForObject:(NSObject *)arg0 withObjectsAndNames:(id)arg1;
+ (NSString *)componentSeparator;
+ (NSString *)nameObjectSeparator;
+ (NSObject *)builderWithObject:(NSObject *)arg0;
+ (NSObject *)descriptionForObject:(NSObject *)arg0;

- (PDBuild *)build;
- (void)dealloc;
- (NSString *)appendString:(NSString *)arg0;
- (BSDescriptionBuilder *)initWithObject:(NSObject *)arg0;
- (NSArray *)appendObjectsAndNames:(id)arg0 args:(void *)arg1;
- (NSString *)appendCString:(char *)arg0 withName:(NSString *)arg1;
- (void)tryAppendKey:(NSString *)arg0;
- (id)appendUnsignedInteger:(unsigned int)arg0 withName:(NSString *)arg1;
- (id)appendPointer:(void *)arg0 withName:(NSString *)arg1;
- (NSString *)appendSelector:(SEL)arg0 withName:(NSString *)arg1;
- (NSOperationQueue *)appendQueue:(NSObject *)arg0 withName:(NSString *)arg1;
- (NSObject *)appendSize:(struct CGSize)arg0 withName:(NSString *)arg1;
- (NSArray *)appendObjectsAndNames:(id)arg0;
- (NSArray *)appendKeys:(NSArray *)arg0;
- (NSObject *)appendObject:(NSObject *)arg0 withName:(NSString *)arg1;
- (NSObject *)appendObject:(NSObject *)arg0 withName:(NSString *)arg1 skipIfNil:(char)arg2;
- (NSObject *)appendRect:(struct CGRect)arg0 withName:(struct CGSize)arg1;
- (id)appendBool:(char)arg0 withName:(NSString *)arg1;
- (id)appendInteger:(int)arg0 withName:(NSString *)arg1;
- (id)appendFloat:(float)arg0 withName:(NSString *)arg1;
- (id)appendInt:(int)arg0 withName:(NSString *)arg1;
- (id)appendUnsignedInt:(int)arg0 withName:(NSString *)arg1;
- (id)appendFloat:(float)arg0 withName:(NSString *)arg1 decimalPrecision:(unsigned int)arg2;
- (NSObject *)appendPoint:(struct CGPoint)arg0 withName:(NSString *)arg1;
- (NSString *)appendKey:(NSString *)arg0;

@end
