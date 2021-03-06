//
//  MappingProvider.h
//  EasyMappingExample
//
//  Created by Lucas Medeiros on 23/02/13.
//  Copyright (c) 2013 EasyKit. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "EasyMapping.h"
#import "EKManagedObjectMapping.h"

@interface ManagedMappingProvider : NSObject

+ (EKManagedObjectMapping *)carMapping;
+ (EKManagedObjectMapping *)carWithRootKeyMapping;
+ (EKManagedObjectMapping *)carNestedAttributesMapping;
+ (EKManagedObjectMapping *)carWithDateMapping;
+ (EKManagedObjectMapping *)phoneMapping;
+ (EKManagedObjectMapping *)personMapping;
+ (EKManagedObjectMapping *)personWithCarMapping;
+ (EKManagedObjectMapping *)personWithPhonesMapping;
+ (EKManagedObjectMapping *)personWithOnlyValueBlockMapping;

// Fake mapping, is not backed up by CoreData model
+ (EKManagedObjectMapping *)complexPlaneMapping;

@end
