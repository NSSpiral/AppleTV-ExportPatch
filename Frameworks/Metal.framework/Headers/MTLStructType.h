/* Runtime dump - MTLStructType
 * Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLStructType : NSObject
{
    NSDictionary * _dictionary;
    NSArray * _members;
}

@property (readonly) NSArray * members;

- (id)describe;
- (MTLStructType *)initWithMembers:(id *)arg0 count:(unsigned int)arg1;
- (NSString *)memberByName:(NSString *)arg0;
- (void)dealloc;
- (NSString *)description;
- (NSArray *)members;

@end
