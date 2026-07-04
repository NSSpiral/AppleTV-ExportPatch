/* Runtime dump - TSWPImageBulletProvider
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPImageBulletProvider : NSObject
{
    NSMutableArray * _images;
    NSMutableArray * _filenames;
}

@property (readonly, nonatomic) NSArray * predefinedImages;

+ (TSWPImageBulletProvider *)sharedInstance;

- (NSString *)dataForDefaultImageBulletWithContext:(NSObject *)arg0;
- (NSArray *)p_predefinedImageNames;
- (id)p_pathToPredefinedImages;
- (NSData *)dataForImageBullet:(id)arg0 withContext:(NSObject *)arg1;
- (NSArray *)predefinedImages;

@end
