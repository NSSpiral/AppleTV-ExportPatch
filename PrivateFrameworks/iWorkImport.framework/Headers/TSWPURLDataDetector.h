/* Runtime dump - TSWPURLDataDetector
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPURLDataDetector : NSObject <TSWPDataDetectorProtocol>

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSString *)newArrayByScanningString:(NSString *)arg0 scanRange:(struct _NSRange)arg1;
+ (NSString *)detectorIdentifier;
+ (struct _NSRange)calculateScanRangeForString:(NSString *)arg0 changedRange:(struct _NSRange)arg1;
+ (NSString *)scanString:(NSString *)arg0 scanRange:(struct _NSRange)arg1;
+ (void)initURLCharacterSets;
+ (struct _NSRange)expandValidRange:(struct _NSRange)arg0 inString:(NSAttributedString *)arg1;
+ (NSString *)newURLFromString:(NSString *)arg0;
+ (void)setInvalidURLSchemes:(id)arg0;

@end
