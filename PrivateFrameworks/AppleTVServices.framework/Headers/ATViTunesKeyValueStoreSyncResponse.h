/* Runtime dump - ATViTunesKeyValueStoreSyncResponse
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATViTunesKeyValueStoreSyncResponse : NSObject
{
    char _success;
    NSString * _domainVersion;
    NSArray * _peerPutItems;
    NSArray * _putOKKeys;
    NSArray * _rejectedKeys;
}

@property (readonly, nonatomic) char success;
@property (readonly, nonatomic) NSString * domainVersion;
@property (readonly, nonatomic) NSArray * peerPutItems;
@property (readonly, nonatomic) NSArray * putOKKeys;
@property (readonly, nonatomic) NSArray * rejectedKeys;

- (char)success;
- (void).cxx_destruct;
- (ATViTunesKeyValueStoreSyncResponse *)_initWithSuccess:(char)arg0 domainVersion:(NSString *)arg1 peerPutItems:(NSArray *)arg2 putOKKeys:(NSArray *)arg3 rejectedKeys:(NSArray *)arg4;
- (NSString *)domainVersion;
- (NSArray *)peerPutItems;
- (NSArray *)putOKKeys;
- (NSArray *)rejectedKeys;

@end
