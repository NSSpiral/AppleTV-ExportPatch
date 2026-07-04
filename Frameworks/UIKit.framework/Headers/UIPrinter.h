/* Runtime dump - UIPrinter
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIPrinter : NSObject
{
    id _printerInfo;
    NSURL * URL;
}

@property (readonly, copy) NSURL * URL;
@property (readonly, copy) NSString * displayName;
@property (readonly, copy) NSString * displayLocation;
@property (readonly) int supportedJobTypes;
@property (readonly, copy) NSString * makeAndModel;
@property (readonly) char supportsColor;
@property (readonly) char supportsDuplex;

+ (UIPrinter *)printerWithURL:(NSString *)arg0;

- (UIPrinter *)init;
- (NSURL *)URL;
- (UIPrinter *)_initWithPrinter:(PKPrinter *)arg0;
- (id)_internalPrinter;
- (NSURL *)_initWithURL:(NSString *)arg0;
- (NSString *)displayName;
- (NSString *)makeAndModel;
- (NSString *)displayLocation;
- (int)supportedJobTypes;
- (char)supportsColor;
- (char)supportsDuplex;
- (void)contactPrinter:(id)arg0;

@end
