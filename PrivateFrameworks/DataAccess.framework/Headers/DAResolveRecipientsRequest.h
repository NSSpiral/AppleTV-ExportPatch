/* Runtime dump - DAResolveRecipientsRequest
 * Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@interface DAResolveRecipientsRequest : NSObject
{
    char _retrieveCertificates;
    char _retrieveAvailablilty;
    NSArray * _emailAddresses;
    NSDate * _startTime;
    NSDate * _endTime;
}

@property (retain, nonatomic) NSArray * emailAddresses;
@property (nonatomic) char retrieveCertificates;
@property (nonatomic) char retrieveAvailablilty;
@property (retain, nonatomic) NSDate * startTime;
@property (retain, nonatomic) NSDate * endTime;

- (void)setEndTime:(NSDate *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (void)setStartTime:(NSDate *)arg0;
- (void).cxx_destruct;
- (NSDate *)startTime;
- (void)setRetrieveAvailablilty:(char)arg0;
- (DAResolveRecipientsRequest *)initWithEmailAddresses:(NSArray *)arg0 retrieveCertificates:(char)arg1 retrieveAvailability:(char)arg2 withStartTime:(NSDate *)arg3 endTime:(NSDate *)arg4;
- (char)retrieveAvailablilty;
- (char)retrieveCertificates;
- (void)setRetrieveCertificates:(char)arg0;
- (NSArray *)emailAddresses;
- (void)setEmailAddresses:(NSArray *)arg0;
- (DAResolveRecipientsRequest *)initWithEmailAddresses:(NSArray *)arg0;
- (NSDate *)endTime;

@end
