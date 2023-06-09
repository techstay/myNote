plugins {
    id("java")
}

group = "tech.techstay"
version = "1.0-SNAPSHOT"

repositories {
    mavenCentral()
}

dependencies {
    testImplementation(platform("org.junit:junit-bom:latest.release"))
    testImplementation("org.junit.jupiter:junit-jupiter")
    testImplementation("org.assertj:assertj-core:latest.release")

}

tasks.test {
    useJUnitPlatform()
}
