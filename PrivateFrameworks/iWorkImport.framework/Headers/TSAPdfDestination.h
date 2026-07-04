/* Runtime dump - TSAPdfDestination
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSAPdfDestination : NSObject
{
    NSString * _name;
    struct CGPoint _point;
}

@property (readonly, nonatomic) NSString * name;
@property (readonly, nonatomic) struct CGPoint point;

+ (NSString *)pdfDestinationWithName:(NSString *)arg0 point:(struct CGPoint)arg1;

- (TSAPdfDestination *)initWithName:(NSString *)arg0 point:(struct CGPoint)arg1;
- (void)dealloc;
- (NSString *)name;
- (struct CGPoint)point;

@end
