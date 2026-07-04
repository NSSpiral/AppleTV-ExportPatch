/* Runtime dump - ATVCupidImageFetchRecord
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class ATVCupidAccessObject;
@interface ATVCupidImageFetchRecord : NSObject
{
    char _isActive;
    ATVCupidAccessObject * _accessObject;
    id _imageToken;
    NSString * _assetID;
    int _priority;
    id _completionHandler;
}

@property (readonly, weak, nonatomic) ATVCupidAccessObject * accessObject;
@property (readonly, retain, nonatomic) id imageToken;
@property (readonly, retain, nonatomic) NSString * assetID;
@property (nonatomic) int priority;
@property (copy, nonatomic) id completionHandler;
@property (nonatomic) char isActive;

- (NSString *)assetID;
- (ATVCupidImageFetchRecord *)initWithAccessObject:(ATVCupidAccessObject *)arg0 imageToken:(NSString *)arg1 assetID:(NSString *)arg2;
- (ATVCupidAccessObject *)accessObject;
- (NSString *)imageToken;
- (char)isActive;
- (id /* block */)completionHandler;
- (void)setIsActive:(char)arg0;
- (void)setPriority:(int)arg0;
- (int)priority;
- (void).cxx_destruct;
- (void)setCompletionHandler:(id /* block */)arg0;

@end
