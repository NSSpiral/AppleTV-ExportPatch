/* Runtime dump - AppCalendarUsage
 * Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomAnalytics.framework/SymptomAnalytics
 */

@interface AppCalendarUsage : NSManagedObject

@property (retain, nonatomic) NSNumber * dayOfWeek;
@property (retain, nonatomic) NSNumber * tier1;
@property (retain, nonatomic) NSNumber * tier2;
@property (retain, nonatomic) NSNumber * tier3;
@property (retain, nonatomic) NSNumber * tier4;
@property (retain, nonatomic) NSNumber * tier5;
@property (retain, nonatomic) NSNumber * timeOfDaySlot;
@property (retain, nonatomic) NSDate * timeStamp;
@property (retain, nonatomic) NSDate * firstTimeStamp;
@property (retain, nonatomic) App * hasApp;
@property (retain, nonatomic) App * hintedBy;

@end
