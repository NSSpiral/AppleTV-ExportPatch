/* Runtime dump - BLAlertAction
 * Image: /System/Library/PrivateFrameworks/iPhotoMigrationSupport.framework/iPhotoMigrationSupport
 */

@interface BLAlertAction : NSObject
{
    id _block;
    NSString * _name;
}

@property (readonly) id block;
@property (readonly) NSString * name;

+ (UIAlertAction *)cancelAction;
+ (NSString *)actionWithName:(NSString *)arg0 andBlock:(id /* block */)arg1;

- (NSString *)name;
- (void).cxx_destruct;
- (id /* block */)block;
- (BLAlertAction *)initWithName:(NSString *)arg0 andBlock:(id /* block */)arg1;

@end
