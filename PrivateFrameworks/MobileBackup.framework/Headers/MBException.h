/* Runtime dump - MBException
 * Image: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

@interface MBException : NSException

- (MBException *)initWithCode:(int)arg0 format:(NSString *)arg1 args:(void *)arg2;
- (NSError *)error;
- (MBException *)initWithCode:(int)arg0 format:(NSString *)arg1;
- (int)errorCode;

@end
