/* Runtime dump - PLSecurity
 * Image: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
 */

@interface PLSecurity : NSObject

+ (char)canSkipUserPromptsForProcessWithName:(NSString *)arg0 identifier:(int)arg1;
+ (char)connectionIsEntitledForPhotoKit:(id)arg0;
+ (char)isEntitledForPhotoKit;
+ (char)secTask:(struct __SecTask *)arg0 hasEntitlement:(id)arg1;
+ (char)connection:(NSURLConnection *)arg0 hasEntitlement:(id)arg1;

@end
