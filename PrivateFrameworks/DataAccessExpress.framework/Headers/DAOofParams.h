/* Runtime dump - DAOofParams
 * Image: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
 */

@interface DAOofParams : NSObject
{
    int _oofState;
    NSDate * _startTime;
    NSDate * _endTime;
    NSString * _message;
    int _externalState;
    NSString * _externalMessage;
}

@property (nonatomic) int oofState;
@property (retain, nonatomic) NSDate * startTime;
@property (retain, nonatomic) NSDate * endTime;
@property (retain, nonatomic) NSString * message;
@property (nonatomic) int externalState;
@property (retain, nonatomic) NSString * externalMessage;

- (void)setEndTime:(NSDate *)arg0;
- (NSString *)description;
- (DAOofParams *)initWithDictionary:(NSDictionary *)arg0;
- (void)setStartTime:(NSDate *)arg0;
- (char)isEnabled;
- (NSString *)message;
- (void)setMessage:(NSString *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (NSDate *)startTime;
- (int)oofState;
- (void)setOofState:(int)arg0;
- (void)setExternalMessage:(NSString *)arg0;
- (int)externalState;
- (void)setExternalState:(int)arg0;
- (NSString *)externalMessage;
- (NSURLSessionTask *)dictionaryRepresentationForASSettingTask;
- (void)enableOof:(char)arg0 From:(NSObject *)arg1 to:(NSObject *)arg2 withMessage:(NSString *)arg3;
- (NSDate *)endTime;

@end
