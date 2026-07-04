/* Runtime dump - UINib
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UINib : NSObject
{
    id storage;
}

+ (UINib *)nibWithNibName:(NSString *)arg0 bundle:(NSObject *)arg1;
+ (UINib *)nibWithData:(NSData *)arg0 bundle:(NSObject *)arg1;

- (void)dealloc;
- (UINib *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (UINib *)initWithContentsOfFile:(NSString *)arg0;
- (NSObject *)instantiateWithOwner:(NSObject *)arg0 options:(NSDictionary *)arg1;
- (UINib *)initWithNibName:(NSString *)arg0 directory:(PLSimpleDCIMDirectory *)arg1 bundle:(NSObject *)arg2;
- (NSString *)identifierForStringsFile;
- (void)setIdentifierForStringsFile:(NSString *)arg0;
- (char)instantiatingForSimulator;
- (void)setInstantiatingForSimulator:(char)arg0;
- (char)captureImplicitLoadingContextOnDecode;
- (void)setCaptureImplicitLoadingContextOnDecode:(char)arg0;
- (UINib *)initWithBundle:(NSBundle *)arg0;
- (void)_registerForMemoryWarningIfNeeded;
- (NSString *)nibDataForPath:(NSString *)arg0;
- (UINib *)initWithData:(NSData *)arg0 bundle:(NSObject *)arg1;
- (void)didReceiveMemoryWarning:(id)arg0;
- (NSBundle *)effectiveBundle;
- (NSString *)bundleResourcePath;
- (NSData *)lazyArchiveData;
- (NSError *)unarchiverForInstantiatingReturningError:(id *)arg0;
- (char)captureEnclosingNIBBundleOnDecode;
- (void)setCaptureEnclosingNIBBundleOnDecode:(char)arg0;

@end
