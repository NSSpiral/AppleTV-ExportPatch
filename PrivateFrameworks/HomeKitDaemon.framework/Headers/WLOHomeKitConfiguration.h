/* Runtime dump - WLOHomeKitConfiguration
 * Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface WLOHomeKitConfiguration : NSObject
{
    unsigned int _numHomes;
    unsigned int _numAccessories;
    unsigned int _numServices;
    unsigned int _numUsers;
    unsigned int _numTriggers;
    unsigned int _numRooms;
    unsigned int _numZones;
    unsigned int _numAccessoryServiceGroups;
    unsigned int _databaseSize;
}

@property unsigned int numHomes;
@property unsigned int numAccessories;
@property unsigned int numServices;
@property unsigned int numUsers;
@property unsigned int numTriggers;
@property unsigned int numRooms;
@property unsigned int numZones;
@property unsigned int numAccessoryServiceGroups;
@property unsigned int databaseSize;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (void)setNumHomes:(unsigned int)arg0;
- (void)setNumAccessories:(unsigned int)arg0;
- (unsigned int)numServices;
- (void)setNumServices:(unsigned int)arg0;
- (unsigned int)numUsers;
- (void)setNumUsers:(unsigned int)arg0;
- (unsigned int)numTriggers;
- (void)setNumTriggers:(unsigned int)arg0;
- (unsigned int)numRooms;
- (void)setNumRooms:(unsigned int)arg0;
- (unsigned int)numZones;
- (void)setNumZones:(unsigned int)arg0;
- (unsigned int)numAccessoryServiceGroups;
- (void)setNumAccessoryServiceGroups:(unsigned int)arg0;
- (void)setDatabaseSize:(unsigned int)arg0;
- (unsigned int)numHomes;
- (unsigned int)numAccessories;
- (unsigned int)databaseSize;

@end
