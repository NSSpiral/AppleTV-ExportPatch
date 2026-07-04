/* Runtime dump - TSKCOAddress
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSKCOAddress : NSObject
{
    TSKCOAddress * mParent;
    NSArray * mAllPathElements;
}

@property (readonly, nonatomic) TSKCOAddress * parent;
@property (readonly, nonatomic) NSString * pathElement;
@property (readonly, nonatomic) NSArray * allPathElements;

+ (void)registerClass:(Class)arg0 forExtensionNumber:(unsigned int)arg1;
+ (TSKCOAddress *)typeRegistry;
+ (TSKCOAddress *)newObjectForUnarchiver:(TSPUnknownObjectUnarchiver *)arg0 message:(struct Message *)arg1;

- (void)saveToArchiver:(NSObject *)arg0 message:(struct Address *)arg1;
- (NSString *)pathElement;
- (char)equals:(id)arg0;
- (NSArray *)allPathElements;
- (TSKCOAddress *)initWithUnarchiver:(NSUnarchiver *)arg0 message:(struct Address *)arg1;
- (char)hasSamePrefix:(NSString *)arg0;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (NSString *)path;
- (TSKCOAddress *)parent;
- (char)contains:(id)arg0;
- (TSKCOAddress *)initWithParent:(TSKCOAddress *)arg0;

@end
