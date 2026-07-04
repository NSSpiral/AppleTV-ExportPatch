/* Runtime dump - MKInstructionContents
 * Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKInstructionContents : NSObject
{
    int _maneuverType;
    int _transportType;
    NSString * _intersectionName;
    NSString * _destinationName;
    NSString * _exitNumber;
    NSArray * _branchNames;
    NSArray * _towardNames;
    int _junctionAngle;
    char _toFreeway;
}

@property (nonatomic) int maneuverType;
@property (retain, nonatomic) NSString * roadName;
@property (retain, nonatomic) NSString * intersectionName;
@property (retain, nonatomic) NSString * destinationName;
@property (retain, nonatomic) NSString * exitNumber;
@property (retain, nonatomic) NSArray * branchNames;
@property (retain, nonatomic) NSArray * towardNames;
@property (nonatomic) int transportType;
@property (readonly, nonatomic) char useRoadName;
@property (readonly, nonatomic) char useTowardNames;
@property (readonly, nonatomic) char useIntersectionName;
@property (readonly, nonatomic) char useDestinationName;
@property (readonly, nonatomic) char hasName;
@property (readonly, nonatomic) NSString * primaryName;
@property (readonly, nonatomic) char isExitManeuver;
@property (nonatomic) char toFreeway;
@property (nonatomic) int junctionAngle;

+ (NSObject *)contentsWithStep:(NSString *)arg0 transportType:(int)arg1;
+ (MKInstructionContents *)contentsWithSubstep:(id)arg0 transportType:(int)arg1;
+ (NSObject *)contentsWithManeuverType:(int)arg0 transportType:(int)arg1;

- (<AVVideoCompositionInstruction> *)instruction;
- (void)_populateFromStep:(NSObject *)arg0;
- (void)_populateFromSubstep:(id)arg0;
- (char)useRoadName;
- (NSDictionary *)_stringFromNameInfo:(NSDictionary *)arg0;
- (void)setIntersectionName:(NSString *)arg0;
- (void)setName:(NSString *)arg0 signposts:(NSMutableArray *)arg1;
- (NSDictionary *)_exitNumberFromNameInfo:(NSDictionary *)arg0;
- (void)setJunctionAngle:(int)arg0;
- (char)useDestinationName;
- (NSArray *)branchNames;
- (char)useIntersectionName;
- (NSString *)intersectionName;
- (char)useTowardNames;
- (NSArray *)towardNames;
- (id)_walkingInstructionForContinue;
- (id)_instructionForContinue;
- (id)_walkingInstructionForStart;
- (id)_instructionForStart;
- (id)_walkingInstructionForTurn;
- (id)_instructionForTurn;
- (id)_instructionForBranch;
- (id)_walkingInstructionForUTurn;
- (id)_instructionForUTurn;
- (id)_instructionForFerry;
- (id)_instructionForArrival;
- (id)_walkingInstructionForRoundabout;
- (id)_instructionForRoundabout;
- (id)_instructionForExit;
- (id)_instructionForChangeHighway;
- (id)_instructionsForSigns;
- (char)isExitManeuver;
- (NSString *)primaryName;
- (void)setBranchNames:(NSArray *)arg0;
- (void)setTowardNames:(NSArray *)arg0;
- (int)junctionAngle;
- (MKInstructionContents *)init;
- (NSString *)description;
- (void).cxx_destruct;
- (NSString *)destinationName;
- (void)setDestinationName:(NSString *)arg0;
- (void)setExitNumber:(NSString *)arg0;
- (void)setManeuverType:(int)arg0;
- (char)toFreeway;
- (void)setToFreeway:(char)arg0;
- (int)maneuverType;
- (NSString *)exitNumber;
- (void)setRoadName:(NSString *)arg0;
- (void)setTransportType:(int)arg0;
- (char)hasName;
- (int)transportType;
- (NSString *)roadName;

@end
