/* Runtime dump - GKSavedGame
 * Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKSavedGame : NSObject <NSCopying>
{
    NSString * _name;
    NSString * _deviceName;
    NSDate * _modificationDate;
    NSURL * _fileURL;
}

@property (retain) NSString * name;
@property (retain) NSString * deviceName;
@property (retain) NSDate * modificationDate;
@property (retain) NSURL * fileURL;

- (void)dealloc;
- (NSString *)description;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (GKSavedGame *)copyWithZone:(struct _NSZone *)arg0;
- (NSDate *)modificationDate;
- (NSURL *)fileURL;
- (NSString *)deviceName;
- (void)loadDataWithCompletionHandler:(id /* block */)arg0;
- (void)setModificationDate:(NSDate *)arg0;
- (void)setFileURL:(NSURL *)arg0;
- (void)setDeviceName:(NSString *)arg0;

@end
