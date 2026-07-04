/* Runtime dump - TSWPObjectPlacement
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPObjectPlacement : NSObject
{
    TSUUUIDPath * _uuidPath;
    int _index;
    NSObject * _object;
}

@property (readonly, nonatomic) TSUUUIDPath * uuidPath;
@property (readonly, nonatomic) NSObject * object;
@property (nonatomic) int index;

+ (NSObject *)objectPlacementWithObject:(NSObject *)arg0 uuidPath:(TSUUUIDPath *)arg1 index:(int)arg2;

- (TSWPObjectPlacement *)initWithObject:(NSObject *)arg0 uuidPath:(TSUUUIDPath *)arg1 index:(int)arg2;
- (TSUUUIDPath *)uuidPath;
- (void)dealloc;
- (NSObject *)object;
- (int)index;
- (void)setIndex:(int)arg0;

@end
