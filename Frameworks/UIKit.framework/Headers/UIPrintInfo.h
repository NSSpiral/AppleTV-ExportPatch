/* Runtime dump - UIPrintInfo
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIPrintInfo : NSObject <NSCopying, NSCoding>
{
    NSString * _printerID;
    NSString * _jobName;
    int _outputType;
    int _orientation;
    int _duplex;
    int _copies;
    char _scaleUp;
}

@property (copy, nonatomic) NSString * printerID;
@property (copy, nonatomic) NSString * jobName;
@property (nonatomic) int outputType;
@property (nonatomic) int orientation;
@property (nonatomic) int duplex;
@property (nonatomic) char scaleUp;
@property (nonatomic) int copies;

+ (UIPrintInfo *)printInfo;
+ (UIPrintInfo *)printInfoWithDictionary:(NSDictionary *)arg0;

- (void)dealloc;
- (UIPrintInfo *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (UIPrintInfo *)init;
- (int)orientation;
- (UIPrintInfo *)copyWithZone:(struct _NSZone *)arg0;
- (void)setOrientation:(int)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void)setJobName:(NSString *)arg0;
- (void)setOutputType:(int)arg0;
- (NSDictionary *)_initWithDictionary:(NSDictionary *)arg0;
- (void)setPrinterID:(NSString *)arg0;
- (void)_updateWithPrinter:(PKPrinter *)arg0;
- (id)_createPrintSettingsForPrinter:(id)arg0;
- (NSString *)printerID;
- (NSString *)jobName;
- (int)outputType;
- (int)duplex;
- (void)setDuplex:(int)arg0;
- (int)copies;
- (void)setCopies:(int)arg0;
- (char)scaleUp;
- (void)setScaleUp:(char)arg0;

@end
