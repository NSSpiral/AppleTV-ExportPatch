/* Runtime dump - CKException
 * Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKException : NSException

- (CKException *)initWithName:(NSString *)arg0 format:(NSString *)arg1;
- (CKException *)initWithCode:(int)arg0 format:(NSString *)arg1 args:(void *)arg2;
- (CKException *)initWithName:(NSString *)arg0 format:(NSString *)arg1 args:(void *)arg2;
- (NSError *)error;
- (CKException *)initWithCode:(int)arg0 format:(NSString *)arg1;
- (int)errorCode;

@end
