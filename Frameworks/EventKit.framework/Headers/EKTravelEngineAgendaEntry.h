/* Runtime dump - EKTravelEngineAgendaEntry
 * Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKTravelEngineAgendaEntry : NSObject
{
    char _dismissed;
    NSString * _eventExternalURL;
    EKTravelAgendaItem * _agendaItem;
    EKTravelAdvisor * _advisor;
}

@property (retain, nonatomic) NSString * eventExternalURL;
@property (retain, nonatomic) EKTravelAgendaItem * agendaItem;
@property (nonatomic) char dismissed;
@property (retain, nonatomic) EKTravelAdvisor * advisor;

- (EKTravelAgendaItem *)agendaItem;
- (void)setAgendaItem:(EKTravelAgendaItem *)arg0;
- (void)setDismissed:(char)arg0;
- (EKTravelAdvisor *)advisor;
- (void)setEventExternalURL:(NSString *)arg0;
- (NSString *)eventExternalURL;
- (void)setAdvisor:(EKTravelAdvisor *)arg0;
- (void)dealloc;
- (EKTravelEngineAgendaEntry *)init;
- (NSString *)description;
- (char)dismissed;

@end
