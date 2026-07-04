/* Runtime dump - MFDAFolderChangeResult
 * Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFDAFolderChangeResult : NSObject
{
    NSError * _error;
    NSString * _folderID;
    NSString * _folderName;
    int _statusCode;
}

@property (readonly) int statusCode;
@property (readonly) NSError * error;
@property (readonly) NSString * folderID;
@property (readonly) NSString * folderName;

- (void)dealloc;
- (NSString *)description;
- (int)statusCode;
- (NSError *)error;
- (NSString *)folderID;
- (NSString *)folderName;
- (char)wasSuccessful;
- (MFDAFolderChangeResult *)initWithStatusCode:(int)arg0 error:(NSError *)arg1 folderID:(NSString *)arg2 folderName:(NSString *)arg3;

@end
