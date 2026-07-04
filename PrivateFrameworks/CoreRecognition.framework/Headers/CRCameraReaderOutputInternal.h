/* Runtime dump - CRCameraReaderOutputInternal
 * Image: /System/Library/PrivateFrameworks/CoreRecognition.framework/CoreRecognition
 */

@interface CRCameraReaderOutputInternal : NSObject
{
    NSString * _type;
    NSArray * _vertices;
    NSString * _stringValue;
    NSNumber * _yearValue;
    NSNumber * _monthValue;
    NSNumber * _dayValue;
}

@property (retain) NSString * type;
@property (retain) NSArray * vertices;
@property (retain) NSString * stringValue;
@property (retain) NSNumber * yearValue;
@property (retain) NSNumber * monthValue;
@property (retain) NSNumber * dayValue;

- (void)setType:(NSString *)arg0;
- (NSString *)type;
- (NSString *)stringValue;
- (void)setStringValue:(NSString *)arg0;
- (void).cxx_destruct;
- (NSNumber *)yearValue;
- (void)setYearValue:(NSNumber *)arg0;
- (NSNumber *)monthValue;
- (void)setMonthValue:(NSNumber *)arg0;
- (NSNumber *)dayValue;
- (void)setDayValue:(NSNumber *)arg0;
- (void)setVertices:(NSArray *)arg0;
- (NSArray *)vertices;

@end
