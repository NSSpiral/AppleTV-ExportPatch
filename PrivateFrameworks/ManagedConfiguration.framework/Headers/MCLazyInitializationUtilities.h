/* Runtime dump - MCLazyInitializationUtilities
 * Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCLazyInitializationUtilities : NSObject

+ (void)loadBundleAtURL:(NSURL *)arg0 completionBlock:(id /* block */)arg1;
+ (void)loadNSBundleAtURL:(NSURL *)arg0 completionBlock:(id /* block */)arg1;
+ (void)initVPNUtilities;
+ (void)initPowerlog;
+ (void)initCoreGraphics;
+ (void)initAppleKeyStore;
+ (void)initAddressBook;
+ (void)initImageIO;
+ (void)initCoreText;
+ (void)initDataAccess;
+ (void)initDAEAS;

@end
