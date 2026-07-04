/* Runtime dump - TLVibrationPersistenceUtilities
 * Image: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

@interface TLVibrationPersistenceUtilities : NSObject

+ (char)_validateObjectWithError:(id *)arg0 validationBlock:(id /* block */)arg1;
+ (char)_objectIsValidUserGeneratedVibrationPattern:(NSObject *)arg0 error:(id *)arg1;
+ (char)objectIsValidUserGeneratedVibrationPatternsDictionary:(NSDictionary *)arg0 error:(id *)arg1;
+ (NSURL *)userGeneratedVibrationStoreFileURL;

@end
