/* Runtime dump - CallRecord
 * Image: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
 */

@interface CallRecord : NSManagedObject

@property (retain, nonatomic) NSString * address;
@property (retain, nonatomic) NSNumber * answered;
@property (retain, nonatomic) NSDate * date;
@property (retain, nonatomic) NSNumber * duration;
@property (retain, nonatomic) NSNumber * face_time_data;
@property (retain, nonatomic) NSString * name;
@property (retain, nonatomic) NSNumber * read;
@property (retain, nonatomic) NSString * unique_id;
@property (retain, nonatomic) NSNumber * calltype;
@property (retain, nonatomic) NSNumber * originated;
@property (retain, nonatomic) NSNumber * disconnected_cause;
@property (retain, nonatomic) NSNumber * number_availability;
@property (retain, nonatomic) NSString * device_id;
@property (retain, nonatomic) NSString * iso_country_code;

@end
