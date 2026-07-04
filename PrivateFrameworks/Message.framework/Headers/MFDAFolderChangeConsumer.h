/* Runtime dump - MFDAFolderChangeConsumer
 * Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFDAFolderChangeConsumer : NSObject <DAFolderChangeConsumer>
{
    MFConditionLock * _conditionLock;
    MFDAFolderChangeResult * _result;
}

- (void)dealloc;
- (MFDAFolderChangeConsumer *)init;
- (NSObject *)waitForResult;
- (void)folderChange:(NSDictionary *)arg0 finishedWithStatus:(int)arg1 error:(NSError *)arg2;

@end
